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
    Game::getInstance().reset();

    this->hide();
    main->hide();
    dynamic_cast<WidgetStart*>(main->main->startMenu)->show();
}
