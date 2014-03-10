//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.CPP
//====================

#include "widgetpause.h"
#include "ui_widgetpause.h"
#include "game.h"

#include <QMessageBox>

//Instantiates the Widget
WidgetPause::WidgetPause(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetPause)
{
    //Set up the ui for the widget
    ui->setupUi(this);
    if (cheatMode) {
        ui->btnCheat->setChecked(true);
    } else {
        ui->btnCheat->setChecked(false);
    }
}

bool WidgetPause::cheatMode = false;

void WidgetPause::on_btnResume_clicked() {
    // resume timer
    this->hide();
}

void WidgetPause::on_btnCheat_clicked() {
    if (ui->btnCheat->isChecked()) {
        cheatMode = true;
    } else {
        cheatMode = false;
    }
    // resume timer
    this->hide();
}

void WidgetPause::on_btnSave_clicked() {
    bool saved = Game::getInstance().save();
    if (saved) {
        QMessageBox::information(this, "Save Successful", "Your game was saved.");
    } else {
        QMessageBox::warning(this, "Save Unsuccessful", "Your game was not saved.");
    }
}

//Destructor for Widget
WidgetPause::~WidgetPause() {
    delete ui;
}
