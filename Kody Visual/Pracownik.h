/**
 * Pracownikiem jest kazda osoba w procesie biznesowym, kt�ra mo�e odgrywa� r�ne role
 */
class Pracownik {

private:
	Dane* dane;

public:
	Pracownik();

	virtual void Dodaj() = 0;

	virtual void Usun() = 0;

	virtual void Edytuj() = 0;
};
