//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.H
//==============================

#ifndef WIDGETGAME_H
#define WIDGETGAME_H

#include "widget.h"
#include "object.h"

#include <QWidget>
#include <QEvent>
#include <QKeyEvent>
#include <QLabel>

namespace Ui {
class WidgetGame;
}

class WidgetGame : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetGame(QWidget *parent = 0);
    ~WidgetGame() { delete ui; }
    void incrementScore();
    void decrementLives();
    void pauseTimer();
    void resumeTimer();

    Widget *main;

private slots:
    void gameTimerHit();
    void hitTimerHit();
    void on_btnPause_clicked();
    void keyPressEvent(QKeyEvent *k);

private:
    //Private instance for the Widget ui
    Ui::WidgetGame *ui;
    QTimer *gameTimer;
    QTimer *hitTimer;
};

class ObjLabel : public QLabel {
    QWidget *wid;
    Object *object;

public:
    explicit ObjLabel(QWidget *parent);

    Object *getObject() { return object; }
    void setObject(Object *obj) { object = obj; }
};

#endif // WIDGETGAME_H
