//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.H
//==============================

#ifndef WIDGETPAUSE_H
#define WIDGETPAUSE_H

#include "widgetgame.h"

#include <QWidget>

namespace Ui {
class WidgetPause;
}

class WidgetPause : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetPause(QWidget *parent = 0);
    ~WidgetPause();
    WidgetGame *par;

private slots:
    void on_btnResume_clicked();
    void on_btnCheat_clicked();
    void on_btnSave_clicked();
    void on_btnStart_clicked();

private:
    Ui::WidgetPause *ui;
};

#endif // WIDGETPAUSE_H
