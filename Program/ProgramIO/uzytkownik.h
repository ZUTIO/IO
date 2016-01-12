#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include "pracownik.h"
#include "formularzedytujuzytkownika.h"
#include "formularzdodajuzytkownika.h"

/**
  09-01-2016:ASK:
      1) Stworzono klasę Uzytkownik
 **/
class Uzytkownik : public Pracownik
{
    public:
        Uzytkownik();
        void Dodaj();
        void Edytuj();

    private:
        FormularzDodajUzytkownika *formularzUzytkownikDodaj;
        FormularzEdytujUzytkownika * formularzUzytkownikEdytuj;
};

#endif // UZYTKOWNIK_H
