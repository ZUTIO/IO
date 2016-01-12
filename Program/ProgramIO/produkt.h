#ifndef PRODUKT_H
#define PRODUKT_H

#include <QString>
#include "formularzdodajprodukt.h"
#include "formularzedytujprodukt.h"

/**
  09-01-2016:ASK:
      1) Stworzono klasę Produkt
 **/
class Produkt
{
    public:
        Produkt();
        void Dodaj();
        void Edytuj();

    private:
        int intID;
        QString strNazwa;
        QString strFormat;
        int intZadruk;
        int intKolor;
        int intIloscStron;
        int intGramatura;
        FormularzDodajProdukt *formularzProduktDodaj;
        FormularzEdytujProdukt *formularzProduktEdytuj;


};

#endif // PRODUKT_H
