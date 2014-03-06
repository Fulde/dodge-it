#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "widget.h"
#include "ui_widget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    QTimer *timer;

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnStart_clicked();
    void timerHit();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
