template <Dane parameter>
/**
 * osoba kt�ra dodaje nowych u�ytkownik�w oraz zarz�dza istniej�cymi kontami. Uzupe�nia list� dost�pnych produkt�w. Czuwa nad poprawno�ci� dzia�ania aplikacji.
 */
class Administrator : public Pracownik {

private:
	Produkt* produkt;
	Klient* klient;

public:
	Administrator();
};
