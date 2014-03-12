//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.CPP
//==============================

#include "widgetpause.h"
#include "ui_widgetpause.h"
#include "widgetgame.h"
#include "game.h"

#include <QMessageBox>
#include <QTimer>

//Instantiates the Widget
WidgetPause::WidgetPause(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetPause)
{
    ui->setupUi(this);
    if (cheatMode) {
        ui->btnCheat->setChecked(true);
    } else {
        ui->btnCheat->setChecked(false);
    }
}

bool WidgetPause::cheatMode = false;

void WidgetPause::on_btnResume_clicked() {
    dynamic_cast<WidgetGame*>(parentWidget())->resumeTimer();
    this->hide();
}

void WidgetPause::on_btnCheat_clicked() {
    if (ui->btnCheat->isChecked()) {
        cheatMode = true;
    } else {
        cheatMode = false;
    }
}

void WidgetPause::on_btnSave_clicked() {
    bool saved = Game::getInstance().save();
    if (saved) {
        QMessageBox::information(this, "Save Successful", "Your game was saved.");
    } else {
        QMessageBox::warning(this, "Save Unsuccessful", "Your game was not saved.");
    }
}

void WidgetPause::on_btnStart_clicked() {
    dynamic_cast<WidgetGame*>(parentWidget())->pauseTimer();
    this->hide();

}

//Destructor for Widget
WidgetPause::~WidgetPause() {
    delete ui;
}
