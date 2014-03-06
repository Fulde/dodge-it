#include "widget.h"
#include <QApplication>

void unitTests() {

}

int main(int argc, char *argv[])
{
    unitTests();

    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}

// This is a new comment for lab 6
