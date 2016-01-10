class Zamownienie {

private:
	Klient* klient;
	Pracownikk* pracownik;
	Produkt* produkt;
	int intID;

public:
	Zamownienie();

	void Dodaj();

	void Usun();

	void Edytuj();
};
