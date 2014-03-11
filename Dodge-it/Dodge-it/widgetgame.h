//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.H
//==============================

#ifndef WIDGETGAME_H
#define WIDGETGAME_H

#include "widget.h"
#include <QWidget>
#include <QEvent>

namespace Ui {
class WidgetGame;
}

class WidgetGame : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetGame(QWidget *parent = 0);
    ~WidgetGame();
    void pauseTimer();
    void resumeTimer();

private slots:
    void timerHit();
    void on_btnPause_clicked();
    void keyPressEvent(QKeyEvent *k);

private:
    //Private instance for the Widget ui
    Ui::WidgetGame *ui;
    QTimer *timer;
};

#endif // WIDGETGAME_H
