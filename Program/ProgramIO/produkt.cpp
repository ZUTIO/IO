#include "produkt.h"
#include "formularzdodajprodukt.h"

Produkt::Produkt()
{

}
void Produkt::Dodaj()
{
    formularzProduktDodaj = new FormularzDodajProdukt();
    formularzProduktDodaj->show();
}
void Produkt::Edytuj()
{
    formularzProduktEdytuj = new FormularzEdytujProdukt();
    formularzProduktEdytuj->show();
}
