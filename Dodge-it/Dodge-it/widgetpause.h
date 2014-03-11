//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.H
//==============================

#ifndef WIDGETPAUSE_H
#define WIDGETPAUSE_H

#include "widget.h"
#include "widgetgame.h"
#include <QWidget>

namespace Ui {
class WidgetPause;
}

class WidgetPause : public QWidget
{
    Q_OBJECT

public:
    static bool cheatMode;
    //explicit Widget constructor
    explicit WidgetPause(QWidget *parent = 0);
    //Widget destructor
    ~WidgetPause();

private slots:
    void on_btnResume_clicked();\
    void on_btnCheat_clicked();
    void on_btnSave_clicked();
    void on_btnStart_clicked();

private:
    //Private instance for the Widget ui
    Ui::WidgetPause *ui;
    QWidget *parentW;
};

#endif // WIDGETPAUSE_H
