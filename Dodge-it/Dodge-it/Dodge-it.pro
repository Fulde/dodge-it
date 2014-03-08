#-------------------------------------------------
#
# Project created by QtCreator 2014-03-06T10:34:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dodge-it
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    objects.cpp \
    game.cpp

HEADERS  += widget.h \
    objects.h \
    game.h

FORMS    += widget.ui

RESOURCES += \
    images/resources.qrc
