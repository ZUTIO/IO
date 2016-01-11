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
    formularzdodajprodukt.cpp \
    klient.cpp \
    zamowienie.cpp \
    uzytkownik.cpp \
    produkt.cpp \
    dane.cpp \
    administrator.cpp \
    formularzedytujuzytkownika.cpp \
    guia.cpp

HEADERS  += aplikacja.h \
    pracownik.h \
    formularzdodajklienta.h \
    formularzdodajuzytkownika.h \
    formularzdodajprodukt.h \
    klient.h \
    zamowienie.h \
    uzytkownik.h \
    produkt.h \
    dane.h \
    administrator.h \
    formularzedytujuzytkownika.h \
    guia.h

FORMS    += aplikacja.ui \
    formularzdodajklienta.ui \
    formularzdodajuzytkownika.ui \
    formularzdodajprodukt.ui \
    formularzedytujuzytkownika.ui \
    guia.ui

DISTFILES +=

RESOURCES += \
    resource.qrc
