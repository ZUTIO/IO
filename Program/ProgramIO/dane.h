#ifndef DANE_H
#define DANE_H

#include <QString>

/**
  09-01-2016:ASK:
      1) Stworzono klasę Dane
 **/

class Dane
{
    public:
        Dane();
    private:
        QString strImie;
        QString strNazwisko;
        QString strLogin;
        QString strHaslo;
        QString strFirma;
        QString strMiasto;
        QString strEmail;
        QString strKodPocztowy;
        QString strStanowisko;
        QString strUlica;
        int intNIP;
        int intTelefon;
        int intPESEL;
        int intID;

};

#endif // DANE_H
