//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.H
//====================

#ifndef WIDGETGAME_H
#define WIDGETGAME_H

#include "widget.h"
#include <QWidget>

namespace Ui {
class WidgetGame;
}

class WidgetGame : public QWidget
{
    Q_OBJECT

public:
    //explicit Widget constructor
    explicit WidgetGame(QWidget *parent = 0);
    //Widget destructor
    ~WidgetGame();

private slots:
    void timerHit();

    void on_btnPause_clicked();

private:
    //Private instance for the Widget ui
    Ui::WidgetGame *ui;
};

#endif // WIDGETGAME_H
