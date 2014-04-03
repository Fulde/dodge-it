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
#include <QString>
#include <string>
#include <QSound>

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
    ui->lblScore->setText(QString::number(Game::getInstance().getScore()));
    ui->lblLives->setText(QString::number(Game::getInstance().getPlayerLives()));

    Game::getInstance().setScore(0);
    Game::getInstance().movePlayer(590, 670);

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

    Game::getInstance().setSlowTimer(0);
    Game::getInstance().setMultiTimer(0);
    Game::getInstance().setInvulTimer(0);
}

WidgetGame::~WidgetGame() { delete ui; }

void WidgetGame::incrementScore(int score) {
    Game::getInstance().incScore(score);
    ui->lblScore->setText(QString::number(Game::getInstance().getScore()));
}

//updates both the player's lives and the label representation
void WidgetGame::decrementLives() {
    if (WidgetPause::cheatMode == true || Game::getInstance().getInvulTimer() > 0) {
        return;
    } else {
        //normal execution
        Game::getInstance().setPlayerLives(Game::getInstance().getPlayerLives() - 1);
        ui->lblLives->setText(QString::number(Game::getInstance().getPlayerLives()));
    }
}

void WidgetGame::loadGame() {
    ui->lblSatyr->move(Game::getInstance().getPlayerX(), Game::getInstance().getPlayerY());
    ui->lblScore->setText(QString::number(Game::getInstance().getScore()));
    ui->lblLives->setText(QString::number(Game::getInstance().getPlayerLives()));

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
    int random;

    //move satyr
    if (Game::getInstance().getPlayerMovingUp() == true && (ui->lblSatyr->y() > 0)) {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() - 3);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() - 3);
    }
    if (Game::getInstance().getPlayerMovingDown() == true && ((ui->lblSatyr->y() + ui->lblSatyr->height()) < 768)) {
        Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() + 3);
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() + 3);
    }
    if (Game::getInstance().getPlayerMovingLeft() == true && (ui->lblSatyr->x() > 170)) {
        Game::getInstance().movePlayer(ui->lblSatyr->x() - 3, ui->lblSatyr->y());
        ui->lblSatyr->move(ui->lblSatyr->x() - 3, ui->lblSatyr->y());
    }
    if (Game::getInstance().getPlayerMovingRight() == true && ((ui->lblSatyr->x() + ui->lblSatyr->width() < 1018))) {
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

        random = rand() % 100 + 1;
        if (random <= 90) {
            if (random <= 50) {                                // (1-50)  basic object
                label->setPixmap(QPixmap(":/basic.png"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
                obj->setPixmap(":/basic.png");
                Game::getInstance().addBasic(obj);
                label->setObject(obj);
            } else if (random >= 51 && random <= 80) {         // (51-80) small object
                label->setPixmap(QPixmap(":/small.png"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
                obj->setPixmap(":/small.png");
                Game::getInstance().addSmall(obj);
                label->setObject(obj);
            } else if (random >= 81 && random <= 90) {        // (81-90) explosive object
                label->setPixmap(QPixmap(":/bomb.gif"));
                DamagingObject *obj = new DamagingObject(randX, -label->height());
                obj->setPixmap(":/bomb.gif");
                Game::getInstance().addExplosive(obj);
                label->setObject(obj);
            }
        } else if (random >= 91) {                            // (91-100) powerup
            if (random >= 91 && random <= 94) {                   // (91-94) exlife
                label->setPixmap(QPixmap(":/heart.png"));
                ExLife *obj = new ExLife(randX, label->height(), false, false);
                obj->setPixmap(":/heart.png");
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random >= 95 && random <= 97) {             // (95-97) multiplier
                label->setPixmap(QPixmap(":/multiplier.png"));
                Multiplier *obj = new Multiplier(randX, label->height(), false, false);
                obj->setPixmap(":/multiplier.png");
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random >= 98  && random <= 99 ) {           // (98-99) slow
                label->setPixmap(QPixmap(":/hourglass.png"));
                Slow *obj = new Slow(randX, label->height(), false, false);
                obj->setPixmap(":/hourglass.png");
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            } else if (random == 100) {                            // (100) invul
                label->setPixmap(QPixmap(":/shield.png"));
                Invul *obj = new Invul(randX, label->height(), false, false);
                obj->setPixmap(":/shield.png");
                label->setObject(obj);
                Game::getInstance().addPowerup(obj);
            }
        }
        label->setGeometry(randX, -label->height(), label->pixmap()->width(), label->pixmap()->height());
        label->show();
    }

    QObjectList labels = this->children();
        for (int i = 0; i < labels.length(); i++) {
            ObjLabel *curLabel = dynamic_cast<ObjLabel*>(labels.at(i));
            if (curLabel == NULL)
                continue;

            Object *curObj = curLabel->getObject();

            slowObject = dynamic_cast<Slow *>(curObj);
            heartObject = dynamic_cast<ExLife *>(curObj);
            invulObject = dynamic_cast<Invul *>(curObj);
            multiObject = dynamic_cast<Multiplier *>(curObj);

            if (ui->lblSatyr->geometry().intersects(curLabel->geometry()) && !curObj->getTouched()) {
                curObj->setTouched(true);
                if(slowObject != NULL && slowObject->getUsed() == false) {
                    slowObject->setActive(true);
                    slowObject->setUsed(true);
                    Game::getInstance().setSlowTimer(0);
                    curLabel->hide();
                } else if(heartObject != NULL && heartObject->getUsed() == false) {
                    heartObject->setActive(true);
                    heartObject->setUsed(true);
                    curLabel->hide();
                } else if(invulObject != NULL && invulObject->getUsed() == false) {
                    invulObject->setActive(true);
                    invulObject->setUsed(true);
                    Game::getInstance().setInvulTimer(0);
                    curLabel->hide();
                } else if(multiObject != NULL && multiObject->getUsed() == false) {
                    multiObject->setActive(true);
                    multiObject->setUsed(true);
                    Game::getInstance().setMultiTimer(0);
                    curLabel->hide();
                } else if (Game::getInstance().getPlayerLives() == 1 && !hitTimer->isActive()) {
                    QSound::play("://95951__tmokonen__lazer.wav");

                    WidgetGame::decrementLives();
                    gameTimer->stop();

                    HighScore::compareScore();
                    WidgetScore* score = new WidgetScore();
                    score->main = this;
                    score->show();
                } else if (!hitTimer->isActive()) {
                    if (random >= 81 && random <= 90) {
                        curLabel->setPixmap(QPixmap(":/explosion.gif"));
                        curObj->setPixmap(":/explosion.gif");
                    }
                    QSound::play("://33940__scarbelly25__rocks-hit.wav");
                    hitTimer->start();
                    curLabel->hide();
                    WidgetGame::decrementLives();
                }
            }

            if(slowObject != NULL && slowObject->getActive() == true) {
                ui->slowPixmap->show();
                Game::getInstance().setSlowTimer(Game::getInstance().getSlowTimer() + 1);
                slowObject->setDuration(Game::getInstance().getSlowTimer());
                gameTimer->setInterval(Game::getInstance().getInterval() + 5);
                ui->slowPixmap->setPixmap(QPixmap(":/hourglass.png"));
                if (Game::getInstance().getSlowTimer() == 500) {
                    gameTimer->setInterval(Game::getInstance().getInterval() - 1);
                    slowObject->setActive(false);
                    ui->slowPixmap->hide();
                    Game::getInstance().setSlowTimer(0);
                }
            } else if(heartObject != NULL && heartObject->getActive() == true) {
                if (Game::getInstance().getPlayerLives() < 3) {
                    Game::getInstance().setPlayerLives(Game::getInstance().getPlayerLives() + 1);
                    // display new lives amount on screen
                    ui->lblLives->setText(QString::number(Game::getInstance().getPlayerLives()));
                    heartObject->setActive(false);
                }
                else
                    heartObject->setActive(false);
            } else if(invulObject != NULL && invulObject->getActive() == true) {
                ui->shieldPixmap->setVisible(true);
                Game::getInstance().setInvulTimer(Game::getInstance().getInvulTimer() + 1);
                invulObject->setDuration(Game::getInstance().getInvulTimer());
                ui->shieldPixmap->setPixmap(QPixmap(":/shield.png"));
                if(Game::getInstance().getInvulTimer() == 500) {
                    ui->shieldPixmap->hide();
                    invulObject->setActive(false);
                    Game::getInstance().setInvulTimer(0);
                }
            } else if(multiObject != NULL && multiObject->getActive() == true) {
                ui->multiPixmap->setVisible(true);
                Game::getInstance().setMultiTimer(Game::getInstance().getMultiTimer() + 1);
                multiObject->setDuration(Game::getInstance().getMultiTimer());
                ui->multiPixmap->setPixmap(QPixmap(":/multiplier.png"));
                if(Game::getInstance().getMultiTimer() == 500) {
                    ui->multiPixmap->hide();
                    multiObject->setActive(false);
                    Game::getInstance().setMultiTimer(0);
                }
            }

            //Test for cheat mode
            if (WidgetPause::cheatMode == false || (invulObject != NULL && invulObject->getActive() == true)) {
                ui->lblCheatMode->setText("");
            } else if (WidgetPause::cheatMode == true) {
                ui->lblCheatMode->setText("Cheat Mode On");
            }

            curObj->move();
            curLabel->move(curObj->getX(), curObj->getY());

            vector<Object*>& pups = Game::getInstance().getPowerups();
            for (int i = 0; i < pups.size(); i++)
            {
                Powerup *pup = dynamic_cast<Powerup*>(pups.at(i));
                if ((pup->getUsed() && !pup->getActive()) || (!pup->getUsed() && pup->getY() > 768))
                    pups.erase(pups.begin() + i);
                else
                    continue;
            }

        if (curObj->getY() > 768)
        {
            if(multiObject == NULL && slowObject == NULL && invulObject == NULL && heartObject == NULL){
                if (Game::getInstance().getMultiTimer() > 0)
                    incrementScore(2);
                else
                    incrementScore(1);
            }
            else
                continue; // object must have been a powerup because one of the powerup casts succeeded

            if (curObj->getPixmap() == ":/basic.png") {
                delete curObj;
                Game::getInstance().getBasics().erase(Game::getInstance().getBasics().begin());
            } else if (curObj->getPixmap() == ":/small.png") {
                delete curObj;
                Game::getInstance().getSmalls().erase(Game::getInstance().getSmalls().begin());
            } else if (curObj->getPixmap() == ":/bomb.gif") {
                delete curObj;
                Game::getInstance().getExplosives().erase(Game::getInstance().getExplosives().begin());
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
