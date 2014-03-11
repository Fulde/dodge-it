//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETHELP.CPP
//==============================
#include <QTimer>
#include <QLabel>

#include "widgethelp.h"
#include "ui_widgethelp.h"

//Instantiates the Widget
WidgetHelp::WidgetHelp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetHelp)
{
    //Set up the ui for the widget
    ui->setupUi(this);
}

WidgetHelp::~WidgetHelp() {

}

