//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.H
//==============================

#ifndef WIDGETSCORE_H
#define WIDGETSCORE_H

#include <QWidget>

#include "widgetgame.h"

namespace Ui {
class WidgetScore;
}

class WidgetScore : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetScore(QWidget *parent = 0);
    ~WidgetScore();
    WidgetGame *main;

private slots:
    void on_btnExit_clicked();

private:
    //Private instance for the Widget ui
    Ui::WidgetScore *ui;
};

#endif // WIDGETSCORE_H
