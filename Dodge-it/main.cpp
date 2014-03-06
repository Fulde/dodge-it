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

// another error
