#ifndef NOTES_H
#define NOTES_H

#include "builder.h"

class Notes : public Builder
{
public:
    Notes();
    Papier *getPapier()
    {
        Papier* papier = new Papier();
        papier->strFormat = "A5";
        return papier;
    }
    Obraz * getObraz()
    {
        Obraz* obraz = new Obraz();
        obraz->intDPI = 300;
        return obraz;
    }
};

#endif // NOTES_H
