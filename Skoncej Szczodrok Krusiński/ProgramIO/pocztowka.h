#ifndef POCZTOWKA_H
#define POCZTOWKA_H

#include "builder.h"

class Pocztowka : public Builder
{
public:
    Pocztowka();

    Papier *getPapier()
    {
        Papier* papier = new Papier();
        papier->strFormat = "150x100";
        return papier;
    }
    Obraz * getObraz()
    {
        Obraz* obraz = new Obraz();
        obraz->intDPI = 200;
        return obraz;
    }
};

#endif // POCZTOWKA_H
