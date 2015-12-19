#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T17:19:20
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProgramIO
TEMPLATE = app


SOURCES += main.cpp\
        aplikacja.cpp \
    pracownik.cpp \
    formularzdodajklienta.cpp \
    formularzdodajuzytkownika.cpp \
    administrator.cpp \
    formularzdodajprodukt.cpp

HEADERS  += aplikacja.h \
    pracownik.h \
    formularzdodajklienta.h \
    formularzdodajuzytkownika.h \
    administrator.h \
    formularzdodajprodukt.h

FORMS    += aplikacja.ui \
    formularzdodajklienta.ui \
    formularzdodajuzytkownika.ui \
    administrator.ui \
    formularzdodajprodukt.ui

DISTFILES +=

RESOURCES += \
    resource.qrc
