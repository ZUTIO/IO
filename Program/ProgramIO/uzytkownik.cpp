#include "uzytkownik.h"

Uzytkownik::Uzytkownik()
{

}

void Uzytkownik::Dodaj()
{
    formularzUzytkownikDodaj = new FormularzDodajUzytkownika();
    formularzUzytkownikDodaj->show();
}

void Uzytkownik::Edytuj()
{
    formularzUzytkownikEdytuj = new FormularzEdytujUzytkownika();
    formularzUzytkownikEdytuj->show();
}
