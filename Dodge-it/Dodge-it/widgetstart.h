//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSTART.H
//==============================

#ifndef WIDGETSTART_H
#define WIDGETSTART_H

#include <QWidget>

namespace Ui {
class WidgetStart;
}

class WidgetStart : public QWidget
{
    Q_OBJECT
    
public:
    explicit WidgetStart(QWidget *parent = 0);
    ~WidgetStart();
    
private slots:
    void on_btnStart_clicked();
    void on_btnHelp_clicked();
    void on_btnQuit_clicked();
    void on_btnLoad_clicked();

private:
    Ui::WidgetStart *ui;
    QWidget *main;
};

#endif // WIDGETSTART_H
