#include "administrator.h"

Administrator::Administrator()
{

}

void Administrator::Dodaj()
{
    formularzUzytkownikDodaj = new FormularzDodajUzytkownika();
    formularzUzytkownikDodaj->show();
}

void Administrator::Edytuj()
{
    formularzUzytkownikEdytuj = new FormularzEdytujUzytkownika();
    formularzUzytkownikEdytuj->show();
}

void Administrator::Usun()
{
}

