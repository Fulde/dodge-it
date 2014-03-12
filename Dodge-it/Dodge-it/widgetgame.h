//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETGAME.H
//==============================

#ifndef WIDGETGAME_H
#define WIDGETGAME_H

#include "widgetstart.h"
#include "object.h"
#include <QWidget>
#include <QEvent>
#include <QKeyEvent>


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



class ObjLabel : public QLabel
{

    QWidget *wid;
    Ui::Widget *UI;
    Object *object;

public:
    explicit ObjLabel(QWidget *parent);

    Object *getObject() { return object; }
    void setObject(Object *obj) { object = obj; }

};

#endif // WIDGETGAME_H
