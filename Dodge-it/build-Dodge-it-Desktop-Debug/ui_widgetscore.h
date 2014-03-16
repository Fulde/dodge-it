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
    QLabel *label;
    QLabel *lblScores;
    QPushButton *btnQuit;

    void setupUi(QWidget *WidgetScore)
    {
        if (WidgetScore->objectName().isEmpty())
            WidgetScore->setObjectName(QStringLiteral("WidgetScore"));
        WidgetScore->resize(512, 384);
        WidgetScore->setStyleSheet(QStringLiteral(""));
        label = new QLabel(WidgetScore);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 381, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/highscores2.png")));
        label->setScaledContents(true);
        lblScores = new QLabel(WidgetScore);
        lblScores->setObjectName(QStringLiteral("lblScores"));
        lblScores->setGeometry(QRect(40, 110, 431, 211));
        lblScores->setStyleSheet(QStringLiteral("font: 75 14pt \"Ubuntu\";"));
        lblScores->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnQuit = new QPushButton(WidgetScore);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setGeometry(QRect(200, 340, 98, 27));

        retranslateUi(WidgetScore);

        QMetaObject::connectSlotsByName(WidgetScore);
    } // setupUi

    void retranslateUi(QWidget *WidgetScore)
    {
        WidgetScore->setWindowTitle(QApplication::translate("WidgetScore", "High Scores", 0));
        label->setText(QString());
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
        btnQuit->setText(QApplication::translate("WidgetScore", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetScore: public Ui_WidgetScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETSCORE_H
