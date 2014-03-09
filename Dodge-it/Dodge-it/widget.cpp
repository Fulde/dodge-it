//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.CPP
//====================

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
}

//Destructor for Widget
Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnStart_clicked()
{
    if (ui->rbEasy->isChecked()) {
        Game::getInstance().difficulty = "Easy";
        Game::getInstance().timeInterval = 700;
    } else if (ui->rbMedium->isChecked()) {
        Game::getInstance().difficulty = "Medium";
        Game::getInstance().timeInterval = 500;
    } else if (ui->rbHard->isChecked()) {
        Game::getInstance().difficulty = "Hard";
        Game::getInstance().timeInterval = 300;
    }







}
