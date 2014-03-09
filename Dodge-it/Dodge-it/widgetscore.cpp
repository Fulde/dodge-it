//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.CPP
//====================

#include "widgetscore.h"
#include "ui_widgetscore.h"
#include "game.h"

//Instantiates the Widget
WidgetScore::WidgetScore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetScore)
{
    //Set up the ui for the widget
    ui->setupUi(this);
}

//Destructor for Widget
WidgetScore::~WidgetScore()
{
    delete ui;
}
