#-------------------------------------------------
#
# Project created by QtCreator 2014-03-03T10:30:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dodge-it
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    objects.cpp \
    world.cpp

HEADERS  += widget.h \
    objects.h \
    world.h

FORMS    += widget.ui

RESOURCES += \
    images/resources.qrc

QMAKE_CXXFLAGS +=-std=c++0x
