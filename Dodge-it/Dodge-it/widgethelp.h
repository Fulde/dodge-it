//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETHELP.H
//==============================

#ifndef WIDGETHELP_H
#define WIDGETHELP_H

#include <QWidget>

namespace Ui {
class WidgetHelp;
}

class WidgetHelp : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetHelp(QWidget *parent = 0);
    ~WidgetHelp() { }

private:
    Ui::WidgetHelp *ui;
};

#endif // WIDGETHELP_H
