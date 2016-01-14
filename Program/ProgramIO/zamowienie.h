#ifndef ZAMOWIENIE_H
#define ZAMOWIENIE_H

#include "klient.h"
#include "uzytkownik.h"
#include "papier.h"

/**
  09-01-2016:ASK:
      1) Stworzono klasę Zamowienie i dodano prototyp funkcji DodajZamowienie(), UsunZamowienie(),
         EdytujZamowienie()
 **/

class Zamowienie
{
    public:
        Zamowienie();
       // void DodajZamowienie(Klient*,Uzytkownik*,Produkt*);
       // void UsunZamowienie(Klient*,Uzytkownik*,Produkt*);
       // void EdytujZamowienie(Klient*,Uzytkownik*,Produkt*);

    private:
        int Id;
        Klient * klient;
        Uzytkownik * uzytkownik;
        //Produkt * produkt;
};

#endif // ZAMOWIENIE_H
