#ifndef PRODUKT_H
#define PRODUKT_H

#include <QString>

/**
  09-01-2016:ASK:
      1) Stworzono klasę Produkt
 **/
class Produkt
{
    public:
        Produkt();

    private:
        int intID;
        QString strNazwa;
        QString strFormat;
        int intZadruk;
        int intKolor;
        int intIloscStron;
        int intGramatura;

};

#endif // PRODUKT_H
