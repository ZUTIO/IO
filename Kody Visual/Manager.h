/**
 * osoba, która zarz¹dza zleceniami, przypisuje je poszczególnym u¿ytkownikom. Kontroluje statusy zleceñ oraz sprawdza wydajnoœæ pracowników.
 */
class Manager : Pracownik {

private:
	Klient* klient;
	Zamowienie* zamowienie;

public:
	Manager();
};
