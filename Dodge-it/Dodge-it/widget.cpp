//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.CPP
//==============================

#include "widget.h"
#include "ui_widget.h"
#include "game.h"

//Instantiates the Widget
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //Set up the ui for the widget
    ui->setupUi(this);

    WidgetStart* start = new WidgetStart(this);
    startMenu = start;
    start->show();
}

Widget::~Widget() {
    delete ui;
}
