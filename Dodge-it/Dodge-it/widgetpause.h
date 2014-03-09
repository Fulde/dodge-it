//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETPAUSE.H
//====================
\
#ifndef WIDGETPAUSE_H
#define WIDGETPAUSE_H

#include "widget.h"
#include <QWidget>

class WidgetPause : public QWidget
{
    Q_OBJECT

public:
    //explicit Widget constructor
    explicit WidgetPause(QWidget *parent = 0);
    //Widget destructor
    ~WidgetPause();

private slots:

private:
    //Private instance for the Widget ui
    Ui::WidgetPause *ui;
};

#endif // WIDGETPAUSE_H
