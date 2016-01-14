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
    dane.cpp \
    administrator.cpp \
    formularzedytujuzytkownika.cpp \
    guia.cpp \
    builder.cpp \
    director.cpp \
    ulotka.cpp \
    formularzedytujprodukt.cpp \
    pocztowka.cpp \
    obraz.cpp \
    notes.cpp \
    papier.cpp \
    gotowyprodukt.cpp

HEADERS  += aplikacja.h \
    pracownik.h \
    formularzdodajklienta.h \
    formularzdodajuzytkownika.h \
    formularzdodajprodukt.h \
    klient.h \
    zamowienie.h \
    uzytkownik.h \
    dane.h \
    administrator.h \
    formularzedytujuzytkownika.h \
    guia.h \
    builder.h \
    director.h \
    formularzedytujprodukt.h \
    pocztowka.h \
    obraz.h \
    notes.h \
    papier.h \
    gotowyprodukt.h

FORMS    += aplikacja.ui \
    formularzdodajklienta.ui \
    formularzdodajuzytkownika.ui \
    formularzdodajprodukt.ui \
    formularzedytujuzytkownika.ui \
    guia.ui \
    formularzedytujprodukt.ui

DISTFILES +=

RESOURCES += \
    resource.qrc
