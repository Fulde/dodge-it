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
    QPushButton *btnQuit;
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
        rbEasy->setGeometry(QRect(400, 200, 231, 91));
        QPalette palette;
        QBrush brush(QColor(24, 177, 34, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(8, 179, 8, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(24, 255, 24, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(16, 217, 16, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(4, 89, 4, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(5, 119, 5, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(36, 172, 21, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(131, 217, 131, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        rbEasy->setPalette(palette);
        rbEasy->setStyleSheet(QStringLiteral("font: 60pt;"));
        rbEasy->setChecked(true);
        rbMedium = new QRadioButton(widget);
        rbMedium->setObjectName(QStringLiteral("rbMedium"));
        rbMedium->setGeometry(QRect(400, 310, 331, 71));
        rbMedium->setStyleSheet(QLatin1String("font: 60pt;\n"
"color: rgb(255, 142, 12);"));
        rbHard = new QRadioButton(widget);
        rbHard->setObjectName(QStringLiteral("rbHard"));
        rbHard->setGeometry(QRect(400, 410, 221, 61));
        rbHard->setStyleSheet(QLatin1String("color: rgb(240, 8, 0);\n"
"font: 60pt;"));
        btnLoad = new QPushButton(widget);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        btnLoad->setGeometry(QRect(730, 530, 261, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush11(QColor(50, 50, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        QBrush brush12(QColor(159, 158, 158, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        btnLoad->setPalette(palette1);
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
        btnQuit = new QPushButton(widget);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setGeometry(QRect(380, 530, 261, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        btnQuit->setPalette(palette2);
        btnQuit->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        btnHelp = new QPushButton(widget);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setGeometry(QRect(30, 530, 261, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        btnHelp->setPalette(palette3);
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
        btnLoad->setText(QApplication::translate("WidgetStart", "Load", 0));
        btnStart->setText(QApplication::translate("WidgetStart", "Start New Game", 0));
        btnQuit->setText(QApplication::translate("WidgetStart", "Quit", 0));
        btnHelp->setText(QApplication::translate("WidgetStart", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetStart: public Ui_WidgetStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSTART_H
