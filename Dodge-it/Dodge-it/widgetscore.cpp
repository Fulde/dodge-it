//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.CPP
//==============================

#include "widgetscore.h"
#include "ui_widgetscore.h"
#include "game.h"

//Instantiates the Widget
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
    Game::getInstance().setSlowTimer(0);
    Game::getInstance().setMultiTimer(0);
    Game::getInstance().setInvulTimer(0);

    Game::getInstance().setScore(0);
    Game::getInstance().movePlayer(590, 670);
    Game::getInstance().setPlayerLives(3);

    this->hide();
    main->hide();
    dynamic_cast<WidgetStart*>(main->main->startMenu)->show();
}
