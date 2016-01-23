#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"
#include "papier.h"
#include "obraz.h"
#include "gotowyprodukt.h"

class Director
{
private:
    Builder * builder;
public:
    Director();
    void setBuilder(Builder* newBuilder)
    {
        builder = newBuilder;
    }
    GotowyProdukt* getProdukt()
    {
        GotowyProdukt* produkt = new GotowyProdukt();
        produkt->papier = builder->getPapier();
        produkt->obraz = builder->getObraz();

        return produkt;
    }

};

#endif // DIRECTOR_H
