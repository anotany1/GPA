#-------------------------------------------------
#
# Project created by QtCreator 2013-10-15T22:38:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Marks
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    MarkLabelList.cpp \
    MarkLabel.cpp

HEADERS  += mainwindow.h \
    MarkLabelList.h \
    MarkLabel.h \
    toolbarwidget.h

FORMS    += mainwindow.ui
