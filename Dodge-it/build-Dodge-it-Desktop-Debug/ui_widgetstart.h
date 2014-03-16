/********************************************************************************
** Form generated from reading UI file 'widgetstart.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSTART_H
#define UI_WIDGETSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetStart
{
public:
    QWidget *widget;
    QLabel *label;
    QRadioButton *rbEasy;
    QRadioButton *rbMedium;
    QRadioButton *rbHard;
    QPushButton *btnLoad;
    QPushButton *btnStart;
    QPushButton *btnHelp;

    void setupUi(QWidget *WidgetStart)
    {
        if (WidgetStart->objectName().isEmpty())
            WidgetStart->setObjectName(QStringLiteral("WidgetStart"));
        WidgetStart->setEnabled(true);
        WidgetStart->resize(1024, 768);
        WidgetStart->setAutoFillBackground(true);
        WidgetStart->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(WidgetStart);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1024, 768));
        widget->setStyleSheet(QStringLiteral("background:#000000;"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 861, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logooption1.png")));
        label->setScaledContents(true);
        rbEasy = new QRadioButton(widget);
        rbEasy->setObjectName(QStringLiteral("rbEasy"));
        rbEasy->setGeometry(QRect(400, 240, 231, 101));
        rbEasy->setStyleSheet(QStringLiteral("font: 60pt;"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(widget);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 350, 331, 71));
        rbMedium->setStyleSheet(QLatin1String("font: 60pt;\n"
"color: rgb(255, 142, 12);"));
        rbHard = new QRadioButton(widget);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 450, 221, 61));
        rbHard->setStyleSheet(QLatin1String("color: rgb(240, 8, 0);\n"
"font: 60pt;"));
        btnLoad = new QPushButton(widget);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 530, 261, 61));
        btnLoad->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        btnStart = new QPushButton(widget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setEnabled(true);
        btnStart->setGeometry(QRect(30, 620, 961, 111));
        btnStart->setAutoFillBackground(false);
        btnStart->setStyleSheet(QLatin1String("font: 50pt \"Sans Serif\";\n"
"background-color: rgb(36, 218, 36);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        btnStart->setCheckable(false);
        btnStart->setAutoDefault(false);
        btnStart->setDefault(false);
        btnStart->setFlat(false);
        label->raise();
        label->raise();
        rbEasy->raise();
        rbMedium->raise();
        rbHard->raise();
        btnLoad->raise();
        btnLoad->raise();
        btnStart->raise();
        btnHelp = new QPushButton(WidgetStart);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setGeometry(QRect(30, 530, 261, 61));
        btnHelp->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));

        retranslateUi(WidgetStart);

        QMetaObject::connectSlotsByName(WidgetStart);
    } // setupUi

    void retranslateUi(QWidget *WidgetStart)
    {
        WidgetStart->setWindowTitle(QApplication::translate("WidgetStart", "Dodge-It!", 0));
        label->setText(QString());
        rbEasy->setText(QApplication::translate("WidgetStart", "Easy", 0));
        rbMedium->setText(QApplication::translate("WidgetStart", "Medium", 0));
        rbHard->setText(QApplication::translate("WidgetStart", "Hard", 0));
        btnLoad->setText(QApplication::translate("WidgetStart", "Load Game", 0));
        btnStart->setText(QApplication::translate("WidgetStart", "Start New Game", 0));
        btnHelp->setText(QApplication::translate("WidgetStart", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetStart: public Ui_WidgetStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSTART_H
