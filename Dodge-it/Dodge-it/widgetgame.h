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
#include <QTimer>

namespace Ui {
class WidgetGame;
}

class PowerupTimer;

class WidgetGame : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetGame(QWidget *parent = 0);
    ~WidgetGame();
    // increments both the player's lives and the label representation
    void incrementScore(int score);
    // decrements both the player's lives and the label representation
    void decrementLives();
    // pauses and resumes the timer when pause is toggled
    void WidgetGame::pauseTimer()  { gameTimer->stop(); }
    void WidgetGame::resumeTimer() { gameTimer->start(); }
    // takes the loaded information from the model into and
    void loadGame();

    Widget *main;

private slots:
    // the object should start with a random x coordinate at the top of the window
    void gameTimerHit();
    void on_btnPause_clicked();
    void keyPressEvent(QKeyEvent *k);
    void keyReleaseEvent(QKeyEvent *k);

private:
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
