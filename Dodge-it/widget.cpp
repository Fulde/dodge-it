// widget.cpp
// defines widget capabilities

#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->setInterval(200);
    QObject::connect(timer, &QTimer::timeout, this, &Widget::timerHit);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnStart_clicked()
{
    if (!ui->rbEasy->isChecked() && !ui->rbMedium->isChecked() && !ui->rbHard->isChecked()) {
        QMessageBox::information(this, "Whoops", "Please choose your difficulty level.");
    } else {

    }
}

void Widget::timerHit() {

}
