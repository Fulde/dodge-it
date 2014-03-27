//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETUSER.CPP
//==============================

#include "widgetuser.h"

//Instantiates the Widget
WidgetUser::WidgetUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetUser)
{
    ui->setupUi(this);
}

WidgetUser::~WidgetUser() { delete ui; }
