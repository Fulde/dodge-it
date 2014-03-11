//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.H
//==============================

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

#endif // WIDGET_H
