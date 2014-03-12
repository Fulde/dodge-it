//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//==============================

#include <QTimer>
#include <QLabel>
#include <QRect>
#include <QKeyEvent>
#include <QEvent>

#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "object.h"
#include "game.h"

//Instantiates the Widget
WidgetGame::WidgetGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetGame)
{
    //Set up the ui for the widget
    ui->setupUi(this);

    setWindowFlags( ((windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowCloseButtonHint));
    setFocusPolicy(Qt::StrongFocus);

    timer = new QTimer();
    timer->setInterval(30);  // argument was Game::getInstance().getInterval() ... changed for faster testing
    connect(timer, &QTimer::timeout, this, &WidgetGame::timerHit);
    timer->start();
}

//Destructor for Widget
WidgetGame::~WidgetGame() {
    delete ui;
}

void WidgetGame::keyPressEvent(QKeyEvent *k)
{
    if (k->key() == Qt::Key_Up)
    {
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() - 10);
    }
    else if (k->key() == Qt::Key_Down)
    {
        ui->lblSatyr->move(ui->lblSatyr->x(), ui->lblSatyr->y() + 10);
    }
    else if (k->key() == Qt::Key_Left)
    {
        ui->lblSatyr->move(ui->lblSatyr->x() - 10, ui->lblSatyr->y());
    }
    else if (k->key() == Qt::Key_Right)
    {
        ui->lblSatyr->move(ui->lblSatyr->x() + 10, ui->lblSatyr->y());
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
        curObj->move();
        curLabel->move(curObj->getX(), curObj->getY());
        curLabel->show();
    }
}

void WidgetGame::on_btnPause_clicked() {
    timer->stop();

    WidgetPause* pause = new WidgetPause(this);
    pause->setGeometry(QRect(QPoint(256,192),QPoint(768,576)));
    pause->show();
}


ObjLabel::ObjLabel(QWidget *parent) : QLabel(parent), wid(parent)
{

}
