//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.CPP
//==============================

#include "widgetscore.h"
#include "ui_widgetscore.h"
#include "game.h"


WidgetScore::WidgetScore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetScore)
{
    ui->setupUi(this);
    QString scores = QString::fromStdString(HighScore::scoresToString());
    ui->lblScores->setText(scores);
}

WidgetScore::~WidgetScore() { delete ui; }

void WidgetScore::on_btnExit_clicked()
{
    //resets the game to a blank state upon exiting in preparation for a new game
    Game::getInstance().reset();

    //hides the game screen and opens the start menu screen
    this->hide();
    main->hide();
    dynamic_cast<WidgetStart*>(main->main->startMenu)->show();
}
