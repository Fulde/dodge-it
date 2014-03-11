//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//==============================
#include <QTimer>
#include <QLabel>

#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "game.h"

QTimer *WidgetGame::timer = new QTimer();

//Instantiates the Widget
WidgetGame::WidgetGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetGame)
{
    //Set up the ui for the widget
    ui->setupUi(this);


    timer->setInterval(Game::getInstance().getInterval());
    connect(timer, &QTimer::timeout, this, &WidgetGame::timerHit);
    timer->start();
}

//Destructor for Widget
WidgetGame::~WidgetGame() {
    delete ui;
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

}

void WidgetGame::on_btnPause_clicked() {
    timer->stop();

    WidgetPause* pause = new WidgetPause();
    pause->show();
}
