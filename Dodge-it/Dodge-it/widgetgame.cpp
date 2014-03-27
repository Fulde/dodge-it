//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//==============================

#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "widgetstart.h"
#include "widgetpause.h"
#include "widgetscore.h"
#include "object.h"
#include "game.h"

#include <QTimer>
#include <QLabel>
#include <QRect>
#include <QKeyEvent>
#include <QEvent>
#include <QDebug>
#include <QRect>

void WidgetGame::pauseTimer()  { gameTimer->stop(); }
void WidgetGame::resumeTimer() { gameTimer->start(); }

//Instantiates the Widget
WidgetGame::WidgetGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetGame)
{
    ui->setupUi(this);
    main = dynamic_cast<Widget*>(parent);

    setFocusPolicy(Qt::StrongFocus);

    Game::getInstance().setScore(0);

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
    gameTimer = new QTimer(this);
    gameTimer->setInterval(Game::getInstance().getInterval());
    connect(gameTimer, &QTimer::timeout, this, &WidgetGame::gameTimerHit);
    gameTimer->start();

    // starts when the character is hit; the character cannot be hit again until timeout
    hitTimer = new QTimer(this);
    hitTimer->setInterval(3000); // 3 seconds
    hitTimer->setSingleShot(true);
}

WidgetGame::~WidgetGame() { delete ui; }

void WidgetGame::incrementScore() {
    ui->lblScore->setText(QString::number(ui->lblScore->text().toInt() + 1));
}

//updates both the player's lives and the label representation
void WidgetGame::decrementLives() {
    if (WidgetPause::cheatMode == true) {
        //displays cheat mode on indication to screen
        ui->lblLives->setText(QString::number((ui->lblLives->text().toInt())));
    } else {
        //normal execution
        ui->lblLives->setText(QString::number(ui->lblLives->text().toInt() - 1));
        Game::getInstance().setPlayerLives(Game::getInstance().getPlayerLives() - 1);
    }
}

void WidgetGame::loadGame() {
    ui->lblSatyr->move(Game::getInstance().getPlayerX(), Game::getInstance().getPlayerY());

    for (size_t i = 0; i < Game::getInstance().getBasics().size(); i++) {
        ObjLabel* label = new ObjLabel(this);
        label->setObject(Game::getInstance().getBasics().at(i));
        label->setPixmap(QPixmap(":/basic.png"));
        label->getObject()->setPixmap(":/basic.png");
        label->show();
    }
    for (size_t i = 0; i < Game::getInstance().getSmalls().size(); i++) {
        ObjLabel* label = new ObjLabel(this);
        label->setObject(Game::getInstance().getSmalls().at(i));
        label->setPixmap(QPixmap(":/small.png"));
        label->getObject()->setPixmap(":/small.png");
        label->show();
    }
    for (size_t i = 0; i < Game::getInstance().getExplosives().size(); i++) {
        ObjLabel* label = new ObjLabel(this);
        label->setObject(Game::getInstance().getExplosives().at(i));
        label->setPixmap(QPixmap(":/explosive.png"));
        label->getObject()->setPixmap(":/explosive.png");
        label->show();
    }
    for (size_t i = 0; i < Game::getInstance().getPowerups().size(); i++) {
        ObjLabel* label = new ObjLabel(this);
        label->setObject(Game::getInstance().getPowerups().at(i));
        if (dynamic_cast<Invul*>(Game::getInstance().getPowerups().at(i))) {
            label->setPixmap(QPixmap(":/shield.png"));
            label->getObject()->setPixmap(":/shield.png");
        } else if (dynamic_cast<ExLife*>(Game::getInstance().getPowerups().at(i))) {
            label->setPixmap(QPixmap(":/heart.png"));
            label->getObject()->setPixmap(":/heart.png");
        } else if (dynamic_cast<Slow*>(Game::getInstance().getPowerups().at(i))) {
            label->setPixmap(QPixmap(":/hourglass.png"));
            label->getObject()->setPixmap(":/hourglass.png");
        } else if (dynamic_cast<Multiplier*>(Game::getInstance().getPowerups().at(i))) {
            label->setPixmap(QPixmap(":/multiplier.png"));
            label->getObject()->setPixmap(":/multiplier.png");
        }
        label->show();
    }
}

void WidgetGame::keyPressEvent(QKeyEvent *k)
{
    if ((k->key() == Qt::Key_Up || k->key() == Qt::Key_W))
    {
        Game::getInstance().setPlayerMovingUp(true);
    }
    else if ((k->key() == Qt::Key_Down || k->key() == Qt::Key_S))
    {
        Game::getInstance().setPlayerMovingDown(true);
    }
    else if ((k->key() == Qt::Key_Left || k->key() == Qt::Key_A))
    {
        Game::getInstance().setPlayerMovingLeft(true);
    }
    else if ((k->key() == Qt::Key_Right || k->key() == Qt::Key_D))
    {
        Game::getInstance().setPlayerMovingRight(true);
    }
}

void WidgetGame::keyReleaseEvent(QKeyEvent *k)
{
    if ((k->key() == Qt::Key_Up || k->key() == Qt::Key_W))
    {
        Game::getInstance().setPlayerMovingUp(false);
    }
    else if ((k->key() == Qt::Key_Down || k->key() == Qt::Key_S))
    {
        Game::getInstance().setPlayerMovingDown(false);
    }
    else if ((k->key() == Qt::Key_Left || k->key() == Qt::Key_A))
    {;
        Game::getInstance().setPlayerMovingLeft(false);
    }
    else if ((k->key() == Qt::Key_Right || k->key() == Qt::Key_D))
    {
        Game::getInstance().setPlayerMovingRight(false);
    }
}

// the object should start with a random x coordinate at the top of the window
void WidgetGame::gameTimerHit() {
    int randX = rand() % 855 + 165;

    //move satyr
    if (Game::getInstance().getPlayerMovingUp() == true && (ui->lblSatyr->y() > 0))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() - 3);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() - 3);
    }
    if (Game::getInstance().getPlayerMovingDown() == true && ((ui->lblSatyr->y() + ui->lblSatyr->height()) < 768))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() + 3);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() + 3);
    }
    if (Game::getInstance().getPlayerMovingLeft() == true && (ui->lblSatyr->x() > 170))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x() - 3, ui->lblSatyr->y());
        ui->lblSatyr->move(ui->lblSatyr->x() - 3, ui->lblSatyr->y());
    }
    if (Game::getInstance().getPlayerMovingRight() == true && ((ui->lblSatyr->x() + ui->lblSatyr->width() < 1018)))
    {
        Game::getInstance().movePlayer(ui->lblSatyr->x() + 3, ui->lblSatyr->y());
        ui->lblSatyr->move(ui->lblSatyr->x() + 3, ui->lblSatyr->y());
    }
    //dont move satyr
    if (Game::getInstance().getPlayerMovingUp(), Game::getInstance().getPlayerMovingDown(),
            Game::getInstance().getPlayerMovingLeft(), Game::getInstance().getPlayerMovingRight() == false) {
    }

    if ((randX % Game::getInstance().getObjectInt()) == 0)
    {
        ObjLabel* label = new ObjLabel(this);
        label->setAlignment(Qt::AlignHCenter);

        int random = rand() % 100 + 1;
        if (random <= 90) {
            if (random <= 50) {                                // (1-50)  basic object
                label->setPixmap(QPixmap(":/basic.png"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
                Game::getInstance().addBasic(obj);
                label->setObject(obj);
                label->getObject()->setPixmap(":/basic.png");
            } else if (random >= 51 && random <= 100) {         // (51-80) small object
                label->setPixmap(QPixmap(":/small.png"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
                Game::getInstance().addSmall(obj);
                label->setObject(obj);
                label->getObject()->setPixmap(":/small.png");
            } else if (random >= 81 && random <= 90) {        // (81-90) explosive object
                label->setPixmap(QPixmap(":/explosive.png"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
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

        if (!hitTimer->isActive() && ui->lblSatyr->geometry().intersects(curLabel->geometry()))
        {
            if (Game::getInstance().getPlayerLives() == 1)
            {
                WidgetGame::decrementLives();
                gameTimer->stop();

                HighScore::compareScore();
                WidgetScore* score = new WidgetScore();
                score->main = this;
                score->show();
            } else {
                hitTimer->start();
                WidgetGame::decrementLives();
            }
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

        if (curObj->getY() > 768)
        {
            incrementScore();
            Game::getInstance().incScore(1);
            if (curObj->getPixmap() == ":/basic.png") {
                delete curObj;
                Game::getInstance().getBasics().erase(Game::getInstance().getBasics().begin());
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

void WidgetGame::on_btnPause_clicked() {
    gameTimer->stop();
    WidgetPause* pause = new WidgetPause(this);
    pause->show();
}

ObjLabel::ObjLabel(QWidget *parent) : QLabel(parent), wid(parent) { }
