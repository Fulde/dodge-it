//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//====================
#include <QTimer>
#include <QLabel>

#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "game.h"

//Instantiates the Widget
WidgetGame::WidgetGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetGame)
{
    //Set up the ui for the widget
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    timer->setInterval(Game::getInstance().getInterval());
    connect(timer, &QTimer::timeout, this, &WidgetGame::timerHit);
    timer->start();
}

//Destructor for Widget
WidgetGame::~WidgetGame()
{
    delete ui;
}

// Call this method for every tick of the timer
void WidgetGame::timerHit()
{

}
void WidgetGame::on_btnPause_clicked()
{
    // timer needs to stop

    WidgetPause* pause = new WidgetPause();
    pause->show();
}
