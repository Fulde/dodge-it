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

//Instantiates the Widget
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
    QString name = ui->lnEditUN->text();
    string stdName = name.toUtf8().constData();

    if (name.length() == 0) {
        QMessageBox::critical(this, "Dodge-it", "Please enter a name.");
        return;
    } else if (name.length() > 15) {
        QMessageBox::critical(this, "Dodge-it", "Your namme is too long.\nPlease enter a name with fewer than 15 chararcters.");
        return;
    }

    ifstream strm(stdName + ".txt");
    if (strm) {
        QMessageBox::information(this, "Dodge-it", "Welcome back, " + name + "!");
    } else {
        QMessageBox::information(this, "Dodge-it", "Welcome to Dodge-it, " + name + ".\nDodge well!");
    }
    Game::getInstance().setUsername(stdName);
    this->hide();
}
