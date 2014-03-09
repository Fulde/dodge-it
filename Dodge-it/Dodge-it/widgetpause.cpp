//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.CPP
//====================

#include "widgetpause.h"
#include "ui_widgetpause.h"
#include "game.h"

//Instantiates the Widget
WidgetPause::WidgetPause(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetPause)
{
    //Set up the ui for the widget
    ui->setupUi(this);
}

//Destructor for Widget
WidgetPause::~WidgetPause()
{
    delete ui;
}
