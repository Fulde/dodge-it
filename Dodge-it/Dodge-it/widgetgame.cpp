//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//==============================

#include "widgetgame.h"
#include "widgetstart.h"
#include "widgetpause.h"
#include "ui_widgetgame.h"
#include "object.h"
#include "game.h"

#include <QTimer>
#include <QLabel>
#include <QRect>
#include <QKeyEvent>
#include <QEvent>
#include <QDebug>
#include <QRect>

//Instantiates the Widget
WidgetGame::WidgetGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetGame)
{
    //Set up the ui for the widget
    ui->setupUi(this);
    main = dynamic_cast<Widget*>(parent);

    setFocusPolicy(Qt::StrongFocus);

    Game::diffSetting difficulty = Game::getInstance().getDifficulty();
    if (difficulty == Game::easy){
        QPixmap background_image(":/easyBackground.png");
        ui->background->setPixmap(background_image);
        ui->background->setScaledContents(true);
    } else if (difficulty == Game::medium) {
        QPixmap background_image(":/mediumBackground.png");
        ui->background->setPixmap(background_image);
        ui->background->setScaledContents(true);
    } else if (difficulty == Game::hard) {
        QPixmap background_image(":/hardBackground.jpg");
        ui->background->setPixmap(background_image);
        ui->background->setScaledContents(true);
    }

    // used for the general game ticks; its hit method moves items and calculates collisions
    gameTimer = new QTimer(this); // this originally did not have a parent
    gameTimer->setInterval(Game::getInstance().getInterval());
    connect(gameTimer, &QTimer::timeout, this, &WidgetGame::gameTimerHit);
    gameTimer->start();

    // starts when the character is hit; the character cannot be hit again until timeout
    hitTimer = new QTimer(this); // this originally did not have a parent
    hitTimer->setInterval(3000); // 3 seconds
    connect(hitTimer, &QTimer::timeout, this, &WidgetGame::hitTimerHit);
    hitTimer->setSingleShot(true);
}

//Destructor for Widget
WidgetGame::~WidgetGame() {
    delete ui;
}

void WidgetGame::incrementScore() {
    ui->lblScore->setText(QString::number(ui->lblScore->text().toInt() + 1));
}

//updates both the player's lives and the label representation
void WidgetGame::decrementLives() {
    if (WidgetPause::cheatMode == true) {
        //displays cheat mode on indication to screen
        ui->lblLives->setText(QString::number((ui->lblLives->text().toInt())));
    }
    else {
        //normal execution
        ui->lblLives->setText(QString::number(ui->lblLives->text().toInt() - 1));
        Game::getInstance().setPlayerLives(Game::getInstance().getPlayerLives() - 1);
        qDebug() << Game::getInstance().getPlayerLives();
    }
}

void WidgetGame::keyPressEvent(QKeyEvent *k)
{
    if ((k->key() == Qt::Key_Up || k->key() == Qt::Key_W) && (ui->lblSatyr->y() > 0))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() - 10);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() - 10);
    }
    else if ((k->key() == Qt::Key_Down || k->key() == Qt::Key_S) && ((ui->lblSatyr->y() + ui->lblSatyr->height()) < 768))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() + 10);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() + 10);
    }
    else if ((k->key() == Qt::Key_Left || k->key() == Qt::Key_A) && (ui->lblSatyr->x() > 170))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x() - 10, ui->lblSatyr->y());
        ui->lblSatyr->move(ui->lblSatyr->x() - 10, ui->lblSatyr->y());
    }
    else if ((k->key() == Qt::Key_Right || k->key() == Qt::Key_D) && ((ui->lblSatyr->x() + ui->lblSatyr->width() < 1018)))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x() + 10, ui->lblSatyr->y());
        ui->lblSatyr->move(ui->lblSatyr->x() + 10, ui->lblSatyr->y());
    }
}

void WidgetGame::pauseTimer()
{
    gameTimer->stop();
}

void WidgetGame::resumeTimer()
{
    gameTimer->start();
}

// the object should have a set x coordinate to start with
//    (basically the object should have a place at the top of the screen)
// between 0 to the far right corner so (x, 0)
void WidgetGame::gameTimerHit() {
    int randX = rand() % 855 + 165;

    if ((randX % Game::getInstance().getObjectInt()) == 0)
    {
        ObjLabel* label = new ObjLabel(this);
        label->setAlignment(Qt::AlignHCenter);

        int random = rand() % 100 + 1;
        if (random <= 100) {                  // THIS OVERRIDES THE POWERUPS CURRENTLY BECAUSE OF THE SIZE OF THE POWERUP PIXMAPS  -- should be 90
            if (random <= 50) {                                // (1-50)  basic object
                label->setPixmap(QPixmap(":/basic.png"));
                DamagingObject *obj = new DamagingObject(randX, label->height());
                Game::getInstance().addBasic(obj);
                label->setObject(obj);
                label->getObject()->setPixmap(":/basic.png");
            } else if (random >= 51 && random <= 100) {         // (51-80) small object
                label->setPixmap(QPixmap(":/small.png"));
                DamagingObject *obj = new DamagingObject(randX, label->height());
                Game::getInstance().addSmall(obj);
                label->setObject(obj);
                label->getObject()->setPixmap(":/small.png");
            } else if (random >= 81 && random <= 100) {        // (81-90) explosive object                        -- this should also be 90
                label->setPixmap(QPixmap(":/explosive.png"));
                DamagingObject *obj = new DamagingObject(randX, label->height());
                Game::getInstance().addExplosive(obj);
                label->setObject(obj);
            }
        } else if (random >= 91) {                             // (91-100) powerup
            if (random >= 91 && random <= 94) {                   // (91-94) exlife
                label->setPixmap(QPixmap(":/heart.png"));
                ExLife *obj = new ExLife(randX, label->height());
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random >= 95 && random <= 97) {             // (95-97) multiplier
                label->setPixmap(QPixmap(":/multiplier.png"));
                Multiplier *obj = new Multiplier(randX, label->height());
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random >= 98  && random <= 99 ) {           // (98-99) slow
                label->setPixmap(QPixmap(":/hourglass.png"));
                Slow *obj = new Slow(randX, label->height());
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random == 100) {                            // (100) invul
                label->setPixmap(QPixmap(":/shield.png"));
                Invul *obj = new Invul(randX, label->height());
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            }


        }
        label->setGeometry(randX, -label->height(), label->pixmap()->width(), label->pixmap()->height());
        label->show();
    }

    QObjectList labels = this->children();
    for (int i = 0; i < labels.length(); i++)
    {
        ObjLabel *curLabel = dynamic_cast<ObjLabel*>(labels.at(i));
        if (curLabel == NULL)
            continue;

        Object *curObj = curLabel->getObject();

        // collision
        /*if ((Game::getInstance().getPlayerX() >= curObj->getX() && Game::getInstance().getPlayerX() <= (curObj->getX() + curLabel->width())) &&     we might need this later; not sure, but I don't feel like rewriting it
                (Game::getInstance().getPlayerY() >= curObj->getY() && Game::getInstance().getPlayerY() <= (curObj->getY() + curLabel->height())))
        */

        if (!hitTimer->isActive() && ui->lblSatyr->geometry().intersects(curLabel->geometry()))
        {
            qDebug() << "You've been hit";
            hitTimer->start();
            WidgetGame::decrementLives();
        }

        curObj->move();
        curLabel->move(curObj->getX(), curObj->getY());
        curLabel->show();

        //Test for cheat mode
        if (WidgetPause::cheatMode == true) {
            ui->lblCheatMode->setText("Cheat Mode On");
        }
        else if (WidgetPause::cheatMode == false) {
            ui->lblCheatMode->setText("");
        }

        //NOT FUNCTIONAL YET.
        //Test for player losing all their lives
        if (Game::getInstance().getPlayerLives() == 0) {
            Game::getInstance().quit();
        }

        // need to figure out how to destry objects; label->deleteLater() will take care of the label, but if I just
        // write "delete curObj;" that will remove it from  memory, and the vector will still hold a pointer to that
        // memory. Bad idea. Should probably give each object an id, which might need to be cycled to prevent int
        // overflow and segfaulting
        if (curObj->getY() > 768)
        {
            incrementScore();
            if (curObj->getPixmap() == ":/basic.png") {
                delete curObj;
                Game::getInstance().getBasics().erase(Game::getInstance().getBasics().begin());  // COULD THESE LINES BE CAUSING THE DOUBLE-FREE/CORRUPTION???
            } else if (curObj->getPixmap() == ":/small.png") {
                delete curObj;
                Game::getInstance().getSmalls().erase(Game::getInstance().getSmalls().begin());
            } else if (curLabel->pixmap()->toImage().text() == ":/explosive.png") {
                delete curObj;
                Game::getInstance().getExplosives().erase(Game::getInstance().getExplosives().begin());
            } else /*assume the pixmap is a powerup*/ {
                delete curObj;
                Game::getInstance().getPowerups().erase(Game::getInstance().getPowerups().begin());
            }
            curLabel->deleteLater();
        }
    }
}


void WidgetGame::hitTimerHit()
{
    // not sure if anything really needs to be done in here; good for debugging
    qDebug() << "Able to be hit again";
}

void WidgetGame::on_btnPause_clicked() {
    gameTimer->stop();

    WidgetPause* pause = new WidgetPause(this);
    pause->show();
}


ObjLabel::ObjLabel(QWidget *parent) : QLabel(parent), wid(parent)
{

}
