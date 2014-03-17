/********************************************************************************
** Form generated from reading UI file 'widgetscore.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETSCORE_H
#define UI_WIDGETSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetScore
{
public:
    QWidget *widget;
    QLabel *lblTitle;
    QPushButton *btnExit;
    QLabel *lblScores;

    void setupUi(QWidget *WidgetScore)
    {
        if (WidgetScore->objectName().isEmpty())
            WidgetScore->setObjectName(QStringLiteral("WidgetScore"));
        WidgetScore->resize(1024, 768);
        WidgetScore->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(WidgetScore);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(256, 192, 512, 384));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lblTitle = new QLabel(widget);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(70, 20, 381, 71));
        lblTitle->setPixmap(QPixmap(QString::fromUtf8(":/highscores2.png")));
        lblTitle->setScaledContents(true);
        btnExit = new QPushButton(widget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(210, 350, 91, 27));
        lblScores = new QLabel(widget);
        lblScores->setObjectName(QStringLiteral("lblScores"));
        lblScores->setGeometry(QRect(40, 120, 431, 211));
        lblScores->setStyleSheet(QStringLiteral("font: 75 14pt \"Ubuntu\";"));
        lblScores->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(WidgetScore);

        QMetaObject::connectSlotsByName(WidgetScore);
    } // setupUi

    void retranslateUi(QWidget *WidgetScore)
    {
        WidgetScore->setWindowTitle(QApplication::translate("WidgetScore", "High Scores", 0));
        lblTitle->setText(QString());
        btnExit->setText(QApplication::translate("WidgetScore", "Exit", 0));
        lblScores->setText(QApplication::translate("WidgetScore", "1\n"
"2\n"
"3\n"
"4\n"
"5\n"
"6\n"
"7\n"
"8\n"
"9\n"
"10", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetScore: public Ui_WidgetScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSCORE_H
