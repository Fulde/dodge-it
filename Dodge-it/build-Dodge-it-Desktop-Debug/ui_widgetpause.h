/********************************************************************************
** Form generated from reading UI file 'widgetpause.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETPAUSE_H
#define UI_WIDGETPAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetPause
{
public:
    QPushButton *btnResume;
    QPushButton *btnSave;
    QPushButton *btnStart;
    QPushButton *btnCheat;

    void setupUi(QWidget *WidgetPause)
    {
        if (WidgetPause->objectName().isEmpty())
            WidgetPause->setObjectName(QStringLiteral("WidgetPause"));
        WidgetPause->resize(512, 384);
        WidgetPause->setAutoFillBackground(false);
        WidgetPause->setStyleSheet(QLatin1String("background-image: url(:/pauseBackground.png);\n"
"font: 75 18pt \"Ubuntu\";"));
        btnResume = new QPushButton(WidgetPause);
        btnResume->setObjectName(QStringLiteral("btnResume"));
        btnResume->setGeometry(QRect(120, 30, 271, 51));
        btnResume->setStyleSheet(QStringLiteral("background:FFFFFF;"));
        btnSave = new QPushButton(WidgetPause);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(120, 120, 271, 51));
        btnSave->setStyleSheet(QStringLiteral("background:FFFFFF;"));
        btnStart = new QPushButton(WidgetPause);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(120, 300, 271, 51));
        btnStart->setStyleSheet(QStringLiteral("background:FFFFFF;"));
        btnCheat = new QPushButton(WidgetPause);
        btnCheat->setObjectName(QStringLiteral("btnCheat"));
        btnCheat->setGeometry(QRect(120, 210, 271, 51));
        btnCheat->setStyleSheet(QStringLiteral("background:FFFFFF;"));
        btnCheat->setCheckable(true);

        retranslateUi(WidgetPause);

        QMetaObject::connectSlotsByName(WidgetPause);
    } // setupUi

    void retranslateUi(QWidget *WidgetPause)
    {
        WidgetPause->setWindowTitle(QApplication::translate("WidgetPause", "Widget", 0));
        btnResume->setText(QApplication::translate("WidgetPause", "Resume", 0));
        btnSave->setText(QApplication::translate("WidgetPause", "Save", 0));
        btnStart->setText(QApplication::translate("WidgetPause", "Quit / Main Menu", 0));
        btnCheat->setText(QApplication::translate("WidgetPause", "Cheat Mode", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetPause: public Ui_WidgetPause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETPAUSE_H
