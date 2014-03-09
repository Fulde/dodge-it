//====================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGET.H
//====================

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

//Creates the user interface for the game
namespace Ui {
class Widget;
}

//Defines the widget where the game will be displayed
class Widget : public QWidget
{
    Q_OBJECT
    
public:
    //explicit Widget constructor
    explicit Widget(QWidget *parent = 0);
    //Widget destructor
    ~Widget();
    
private slots:
    void on_btnStart_clicked();

private:
    //Private instance for the Widget ui
    Ui::Widget *ui;
};

#endif // WIDGET_H
