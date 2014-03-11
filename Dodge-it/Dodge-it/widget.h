//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.H
//==============================

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>

#include "object.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    Ui::Widget *ui;
};


class ObjLabel : public QLabel
{

    QWidget *wid;
    Ui::Widget *UI;
    Object *object;

public:
    explicit ObjLabel(QWidget *parent, Ui::Widget *Ui);

    Object *getObject() { return object; }

};

#endif // WIDGET_H
