#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "pracownik.h"
#include "papier.h"
#include "uzytkownik.h"
#include "klient.h"
#include "formularzdodajklienta.h"
#include "formularzdodajprodukt.h"

/**
   12-01-2016:PSZ:
        1)Dodano wskaźniki na użytkownika i produkt
  */

class Administrator : public Pracownik
{
public:
    Administrator();
    Papier * produkt;
    Uzytkownik * uzytkownik;
    void Dodaj();
    void Usun();
    void Edytuj();
private:

    Klient * klient;
    FormularzDodajKlienta *formularzKlient;

};

#endif // ADMINISTRATOR_H
