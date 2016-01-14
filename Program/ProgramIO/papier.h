#ifndef Papier_H
#define Papier_H

#include <QString>
#include "formularzdodajprodukt.h"
#include "formularzedytujprodukt.h"
/**
  09-01-2016:ASK:
      1) Stworzono klasę Papier
 **/
class Papier
{
    public:
        Papier();
        void Dodaj();
        void Edytuj();
        int intID;
        QString strNazwa;
        QString strFormat;
        int intZadruk;
        int intKolor;
        int intIloscStron;
        int intGramatura;

    private:
        FormularzDodajProdukt *formularzPapierDodaj;
        FormularzEdytujProdukt *formularzPapierEdytuj;


};

#endif // Papier_H
