#ifndef BUILDER_H
#define BUILDER_H

#include "papier.h"
#include "obraz.h"
class Builder
{
public:
    Builder();
    virtual Papier* getPapier() = 0;
    virtual Obraz* getObraz() = 0;
};

#endif // BUILDER_H
