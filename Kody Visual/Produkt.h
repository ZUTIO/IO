class Produkt {

private:
	int intID;
	QString strNazwa;
	QString strFormat;
	int intZadruk;
	int intKolor;
	int intIloscStron;
	int intGramatura;

public:
	Produkt();

	void Dodaj();

	void Usun();

	void Edytuj();
};
