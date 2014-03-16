//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETHELP.CPP
//==============================

#include "widgethelp.h"
#include "ui_widgethelp.h"

#include <QTimer>
#include <QLabel>

//Instantiates the Widget
WidgetHelp::WidgetHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetHelp)
{
    ui->setupUi(this);
}
