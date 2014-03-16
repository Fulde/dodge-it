//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSCORE.H
//==============================

#ifndef WIDGETSCORE_H
#define WIDGETSCORE_H

#include <QWidget>

namespace Ui {
class WidgetScore;
}

class WidgetScore : public QWidget
{
    Q_OBJECT

public:
    //explicit Widget constructor
    explicit WidgetScore(QWidget *parent = 0);
    //Widget destructor
    ~WidgetScore() { delete ui; }

private slots:

    void on_btnQuit_clicked();
    
private:
    //Private instance for the Widget ui
    Ui::WidgetScore *ui;
};

#endif // WIDGETSCORE_H
