//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.CPP
//==============================

#include <QMessageBox>
#include <QTimer>

#include "widget.h"
#include "widgetpause.h"
#include "ui_widgetpause.h"
#include "widgetgame.h"
#include "game.h"

#include <QSound>

bool WidgetPause::cheatMode;

//Instantiates the Widget
WidgetPause::WidgetPause(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetPause)
{
    ui->setupUi(this);
    par = dynamic_cast<WidgetGame*>(parent);

    if (cheatMode) {
        ui->btnCheat->setChecked(true);
    } else {
        ui->btnCheat->setChecked(false);
    }
}

WidgetPause::~WidgetPause() { delete ui; }

void WidgetPause::on_btnResume_clicked() {
    dynamic_cast<WidgetGame*>(parentWidget())->resumeTimer();
    this->hide();
}

void WidgetPause::on_btnCheat_clicked() {
    QSound::play("://219069__annabloom__click1.wav");

    if (ui->btnCheat->isChecked()) {
        cheatMode = true;
    } else {
        cheatMode = false;
    }
}

void WidgetPause::on_btnSave_clicked() {
    QSound::play("://219069__annabloom__click1.wav");

    bool saved = Game::getInstance().save(Game::getInstance().getUsername() + ".txt");
    if (saved) {
        QMessageBox::information(this, "Save Successful", "Your game was saved.");
    } else {
        QMessageBox::warning(this, "Save Unsuccessful", "Your game was not saved.");
    }
}

void WidgetPause::on_btnStart_clicked() {
    QSound::play("://219069__annabloom__click1.wav");
    dynamic_cast<WidgetGame*>(parentWidget())->pauseTimer();
    this->hide();
    par->hide();
    Game::getInstance().clearObjVectors();
    dynamic_cast<WidgetStart*>(par->main->startMenu)->show();
}
