//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSTART.H
//==============================

#ifndef WIDGETSTART_H
#define WIDGETSTART_H

#include <QWidget>

//Creates the user interface for the game
namespace Ui {
class WidgetStart;
}

//Defines the widget where the game will be displayed
class WidgetStart : public QWidget
{
    Q_OBJECT
    
public:
    //explicit Widget constructor
    explicit WidgetStart(QWidget *parent = 0);
    //Widget destructor
    ~WidgetStart();
    
private slots:
    void on_btnStart_clicked();

    void on_btnHelp_clicked();

private:
    //Private instance for the Widget ui
    Ui::WidgetStart *ui;
    QWidget *main;
};

#endif // WIDGETSTART_H
