//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.CPP
//====================

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
}

//Destructor for Widget
WidgetGame::~WidgetGame()
{
    delete ui;
}
