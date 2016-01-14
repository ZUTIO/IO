#include "papier.h"
#include "formularzdodajprodukt.h"

Papier::Papier()
{

}

void Papier::Dodaj()
{
    formularzPapierDodaj = new FormularzDodajProdukt();
    formularzPapierDodaj->show();
}
void Papier::Edytuj()
{
    formularzPapierEdytuj = new FormularzEdytujProdukt();
    formularzPapierEdytuj->show();
}
