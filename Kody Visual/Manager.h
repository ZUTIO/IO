/**
 * osoba, kt�ra zarz�dza zleceniami, przypisuje je poszczeg�lnym u�ytkownikom. Kontroluje statusy zlece� oraz sprawdza wydajno�� pracownik�w.
 */
class Manager : Pracownik {

private:
	Klient* klient;
	Zamowienie* zamowienie;

public:
	Manager();
};
