//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.CPP
//====================

#include "widget.h"
#include "ui_widget.h"

//Instantiates the Widget
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //Set up the ui for the widget
    ui->setupUi(this);
}

//Destructor for Widget
Widget::~Widget()
{
    delete ui;
}
