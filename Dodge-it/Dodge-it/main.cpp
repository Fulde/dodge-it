//===================================
//  CpS111 - Team 3 - Dodge-It
//
//      MAIN.CPP
//
//  This game allows the user to control a character
//   and dodge falling objects to earn points.
//===================================

#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}
