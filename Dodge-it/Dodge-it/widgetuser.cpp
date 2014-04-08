//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETUSER.CPP
//==============================

#include "widgetuser.h"
#include "ui_widgetuser.h"
#include "game.h"

#include <QString>
#include <string>
#include <fstream>
#include <QMessageBox>
#include <QSound>

using namespace std;


WidgetUser::WidgetUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetUser)
{
    ui->setupUi(this);
}

WidgetUser::~WidgetUser() { delete ui; }

void WidgetUser::on_btnEnter_clicked()
{
    QSound::play("://219069__annabloom__click1.wav");

    //acquire player's name
    QString name = ui->lnEditUN->text();
    string stdName = name.toUtf8().constData();

    //if no name...
    if (name.length() == 0) {
        QMessageBox::critical(this, "Dodge-it", "Please enter a name.");
        return;
    //if name is too big...
    } else if (name.length() > 15) {
        QMessageBox::critical(this, "Dodge-it", "Your namme is too long.\nPlease enter a name with fewer than 15 chararcters.");
        return;
    }

    ifstream strm(stdName + ".txt");
    if (strm) {
        //for returning users
        QMessageBox::information(this, "Dodge-it", "Welcome back, " + name + "!");
    } else {
        //for new users
        QMessageBox::information(this, "Dodge-it", "Welcome to Dodge-it, " + name + ".\nDodge well!");
    }

    //set the player username
    Game::getInstance().setUsername(stdName);
    this->hide();
}
