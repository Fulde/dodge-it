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
    QWidget *widget;
    QPushButton *btnResume;
    QPushButton *btnSave;
    QPushButton *btnCheat;
    QPushButton *btnStart;

    void setupUi(QWidget *WidgetPause)
    {
        if (WidgetPause->objectName().isEmpty())
            WidgetPause->setObjectName(QStringLiteral("WidgetPause"));
        WidgetPause->resize(1024, 768);
        WidgetPause->setWindowOpacity(0.5);
        WidgetPause->setAutoFillBackground(false);
        WidgetPause->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(WidgetPause);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(256, 192, 512, 384));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/pauseBackground.png);"));
        btnResume = new QPushButton(widget);
        btnResume->setObjectName(QStringLiteral("btnResume"));
        btnResume->setGeometry(QRect(120, 30, 271, 51));
        btnResume->setStyleSheet(QLatin1String("background:#686868;\n"
"color:white"));
        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(120, 120, 271, 51));
        btnSave->setStyleSheet(QLatin1String("background:#686868;\n"
"color:white"));
        btnCheat = new QPushButton(widget);
        btnCheat->setObjectName(QStringLiteral("btnCheat"));
        btnCheat->setGeometry(QRect(120, 210, 271, 51));
        btnCheat->setStyleSheet(QLatin1String("background:#686868;\n"
"color:white;"));
        btnCheat->setCheckable(true);
        btnStart = new QPushButton(widget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(120, 300, 271, 51));
        btnStart->setStyleSheet(QLatin1String("background:#686868;\n"
"color:white;"));

        retranslateUi(WidgetPause);

        QMetaObject::connectSlotsByName(WidgetPause);
    } // setupUi

    void retranslateUi(QWidget *WidgetPause)
    {
        WidgetPause->setWindowTitle(QApplication::translate("WidgetPause", "Paused", 0));
        btnResume->setText(QApplication::translate("WidgetPause", "Resume", 0));
        btnSave->setText(QApplication::translate("WidgetPause", "Save", 0));
        btnCheat->setText(QApplication::translate("WidgetPause", "Cheat Mode", 0));
        btnStart->setText(QApplication::translate("WidgetPause", "Quit / Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetPause: public Ui_WidgetPause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETPAUSE_H
