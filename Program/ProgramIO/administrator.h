#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "pracownik.h"
#include "produkt.h"
#include "klient.h"
#include "formularzdodajklienta.h"
#include "formularzdodajuzytkownika.h"
#include "formularzdodajprodukt.h"
#include "formularzedytujuzytkownika.h"

class Administrator : public Pracownik
{
public:
    Administrator();
    void Dodaj();
    void Usun();
    void Edytuj();
private:
    Produkt * produkt;
    Klient * klient;
    FormularzDodajKlienta *formularzKlient;
    FormularzDodajUzytkownika *formularzUzytkownikDodaj;
    FormularzDodajProdukt *formularzProdukt;
    FormularzEdytujUzytkownika * formularzUzytkownikEdytuj;

};

#endif // ADMINISTRATOR_H
