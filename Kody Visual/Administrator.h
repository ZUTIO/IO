template <Dane parameter>
/**
 * osoba która dodaje nowych u¿ytkowników oraz zarz¹dza istniej¹cymi kontami. Uzupe³nia listê dostêpnych produktów. Czuwa nad poprawnoœci¹ dzia³ania aplikacji.
 */
class Administrator : public Pracownik {

private:
	Produkt* produkt;
	Klient* klient;

public:
	Administrator();
};
