//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETUSER.H
//==============================

#ifndef WIDGETUSER_H
#define WIDGETUSER_H

#include <QWidget>

namespace Ui {
class WidgetUser;
}

class WidgetUser : public QWidget
{
    Q_OBJECT

public:
    WidgetUser(QWidget *parent = 0);
    ~WidgetUser();

private slots:
    void on_btnEnter_clicked();

private:
    Ui::WidgetUser *ui;
};

#endif // WIDGETUSER_H
