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
        Game::getInstance().setDifficulty("Easy");
        Game::getInstance().setTimeInt(700);
    } else if (ui->rbMedium->isChecked()) {
        Game::getInstance().setDifficulty("Medium");
        Game::getInstance().setTimeInt(500);
    } else if (ui->rbHard->isChecked()) {
        Game::getInstance().setDifficulty("Hard");
        Game::getInstance().setTimeInt(300);
    }

    WidgetGame* game = new WidgetGame();
    game->show();
    this->hide();
}
