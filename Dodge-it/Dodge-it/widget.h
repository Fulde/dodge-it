//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.H
//==============================

#ifndef WIDGET_H
#define WIDGET_H

#include "widgetstart.h"

#include <QWidget>
#include <QLabel>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    WidgetStart *startMenu;
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    Ui::Widget *ui;
};


#endif // WIDGET_H
