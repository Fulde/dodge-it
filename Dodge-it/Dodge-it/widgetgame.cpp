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
       // this->setStyleSheet("background-image: url(:/easyBackground.png);");
    } else if (difficulty == Game::medium) {
       // this->setStyleSheet("background-image: url(:/mediumBackground.png);");
    } else if (difficulty == Game::hard) {
       // this->setStyleSheet("background-image: url(:/hardBackground.jpg);");
    }

    timer = new QTimer();
    timer->setInterval(30);  // argument was Game::getInstance().getInterval() ... changed for faster testing
    connect(timer, &QTimer::timeout, this, &WidgetGame::timerHit);
    timer->start();
}

//Destructor for Widget
WidgetGame::~WidgetGame() {
    delete ui;
}

void WidgetGame::incrementScore() {
    ui->lblScore->setText(QString::number(ui->lblScore->text().toInt() + 1));
}

void WidgetGame::decrementLives() {
    ui->lblLives->setText(QString::number(ui->lblLives->text().toInt() - 1));
    // STILL NEED TO DECREMENT THE CHARACTER'S LIVES -- THIS IS ONLY THE LABEL
}

void WidgetGame::keyPressEvent(QKeyEvent *k)
{
    if (k->key() == Qt::Key_Up)
    {
        if (ui->lblSatyr->y() > 0)
        {
            Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() - 10);
            ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() - 10);
        }
    }
    else if (k->key() == Qt::Key_Down)
    {
        if ((ui->lblSatyr->y() + ui->lblSatyr->height()) < 768)
        {
            Game::getInstance().movePlayer(ui->lblSatyr->x(), ui->lblSatyr->y() + 10);
            ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() + 10);
        }
    }
    else if (k->key() == Qt::Key_Left)
    {
        if (ui->lblSatyr->x() > 0)
        {
            Game::getInstance().movePlayer(ui->lblSatyr->x() - 10, ui->lblSatyr->y());
            ui->lblSatyr->move(ui->lblSatyr->x() - 10, ui->lblSatyr->y());
        }
    }
    else if (k->key() == Qt::Key_Right)
    {
        if ((ui->lblSatyr->x() + ui->lblSatyr->height() < 1024))
        {
            Game::getInstance().movePlayer(ui->lblSatyr->x() + 10, ui->lblSatyr->y());
            ui->lblSatyr->move(ui->lblSatyr->x() + 10, ui->lblSatyr->y());
        }
    }
}

void WidgetGame::pauseTimer()
{
    timer->stop();
}

void WidgetGame::resumeTimer()
{
    timer->start();
}

// Call this method for every tick of the timer
// should create an object each time using the random 1-30 number scale
// 1-15 is the basic object
// 11-18 is the explosive object
// 19-21 is the invul powerup
// 22-24 is the exlife powerup
// 25-27 is the slow powerup
// 28-30 is the muliplier powerup
// the object should have a set x coordinate to start with (basically the object should have a place at the top of the screen
// between 0 to the far right corner so (x, 0)
void WidgetGame::timerHit() {
    int randX = rand() % 1024;


    if ((randX % 5) == 0)
    {
        ObjLabel* label = new ObjLabel(this);
        QPixmap basic(":/basic.png");
        label->setPixmap(basic);
        label->setGeometry(randX, 0, basic.width(), basic.height());

        //create new damaging object
        DamagingObject *obj = new DamagingObject(randX, label->height());
        Game::getInstance().addObject(obj);  // add to Game's vector of Object*

        label->setObject(obj);
        label->show();
    }

    QObjectList labels = this->children();
    for (int i = 4; i < labels.length(); i++)
    {
        ObjLabel *curLabel = dynamic_cast<ObjLabel*>(labels.at(i));
        if (curLabel == NULL)
            continue;

        Object *curObj = curLabel->getObject();

        // collision
        /*if ((Game::getInstance().getPlayerX() >= curObj->getX() && Game::getInstance().getPlayerX() <= (curObj->getX() + curLabel->width())) &&
                (Game::getInstance().getPlayerY() >= curObj->getY() && Game::getInstance().getPlayerY() <= (curObj->getY() + curLabel->height())))
        */

        if (ui->lblSatyr->geometry().intersects(curLabel->geometry()))
        {
            qDebug() << "You've been hit";
            decrementLives();
        }


        // need to figure out how to destry items; label->deleteLater() will take care of the label, but if I just
        // write "delete curObj;" that will remove it from  memory, but the vector will still hold a pointer to that
        // memory. Bad idea. Should probably give each object an id, which might need to be cycled to prevent int
        // overflow and segfaulting
        if (curObj->getY() > 768)
        {
            incrementScore();
            //destroy object here
        }

        curObj->move();
        curLabel->move(curObj->getX(), curObj->getY());
        curLabel->show();
    }
}

void WidgetGame::on_btnPause_clicked() {
    timer->stop();

    WidgetPause* pause = new WidgetPause(this);
    pause->show();
}


ObjLabel::ObjLabel(QWidget *parent) : QLabel(parent), wid(parent)
{

}
