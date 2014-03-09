//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.H
//====================

#ifndef WIDGETSCORE_H
#define WIDGETSCORE_H

#include "widget.h"
#include <QWidget>

class WidgetScore : public QWidget
{
    Q_OBJECT

public:
    //explicit Widget constructor
    explicit WidgetScore(QWidget *parent = 0);
    //Widget destructor
    ~WidgetScore();

private slots:

private:
    //Private instance for the Widget ui
    Ui::WidgetScore *ui;
};

#endif // WIDGETSCORE_H
