#include "guia.h"
#include "ui_guia.h"
/**
  14-12-2015:ASK:
      1) Wygenerowano klasę administrator
      2) Dodano 3 funkcje obsługujące przyciski "Exit", "Użytkownicy" oraz "Klienci"
      3) Dodano parametry obsługi przycisków
  19-12-2015:ASK:
      1) Dodano obsługę przycisku "Wyjście", "Produkty"
      2) Dodano parametry obsługi przycisków
  11-01-2016:ASK:
      1) Zmieniono nazwę klasy z "Administrator" na "GUIA"
  12-01-2016:PSZ:
        1)Zmieniono metodę wywoływania przycisków dodaj oraz edytuj produkt

 */


/**
 * @brief GUIA::GUIA
 * @param parent
 */
GUIA::GUIA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUIA)
{
    // Schowanie górnego paska aplikacji (minimalizuj,maksymalizuj,exit)
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);

    administrator = new Administrator();

    ui->labelWitajImiePage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelWitajImiePage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelWitajImiePage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelWitajImiePage3->setAttribute(Qt::WA_TranslucentBackground);

    // Ustawianie przezroczystości na stronie 0 (page_0: Strona główna)
    ui->buttonUzytkownicyPage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUzytkownicyPage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonKlienciPage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameKlienciPage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameProduktyPage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonProduktyPage0->setAttribute(Qt::WA_TranslucentBackground);

    // Ustawianie przezroczystości na stronie 3 (page_3: Produkty)
    ui->buttonDodajProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameDodajProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUsunProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUsunProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonEdytujProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameEdytujProdukt->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUzytkownicyPage3->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUzytkownicyPage3->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonKlienciPage3->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameKlienciPage3->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameProduktyPage3->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonProduktyPage3->setAttribute(Qt::WA_TranslucentBackground);

    // Ustawianie przezroczystości na stronie 2 (page_2: Klienci)
    ui->buttonDodajKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameDodajKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUsunKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUsunKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonEdytujKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameEdytujKlienta->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUzytkownicyPage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUzytkownicyPage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonKlienciPage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameKlienciPage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameProduktyPage2->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonProduktyPage2->setAttribute(Qt::WA_TranslucentBackground);

    // Ustawianie przezroczystości na stronie 1 (page_1: Użytkownicy)
    ui->buttonDodajUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameDodajUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUsunUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUsunUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonEdytujUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameEdytujUzytkownika->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonUzytkownicyPage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameUzytkownicyPage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonKlienciPage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameKlienciPage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->frameProduktyPage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->buttonProduktyPage1->setAttribute(Qt::WA_TranslucentBackground);
}
/**
 * @brief GUIA::Init
 * @param stringKtoZalogowany
 */
void GUIA::Init(QString stringKtoZalogowany)
{
    this->Imie = stringKtoZalogowany;
    ui->labelWitajImiePage0->setText("Witaj " + this->Imie);
    ui->labelWitajImiePage1->setText("Witaj " + this->Imie);
    ui->labelWitajImiePage2->setText("Witaj " + this->Imie);
    ui->labelWitajImiePage3->setText("Witaj " + this->Imie);
}

/**
 * @brief GUIA::~GUIA
 */
GUIA::~GUIA()
{
    delete ui;
}

/**
 * @brief GUIA::on_buttonExit_clicked
 */
void GUIA::on_buttonExit_clicked()
{
    this->setResult(QDialog::Rejected);
    this->close();
    delete ui;
}
/**
 * @brief GUIA::on_buttonDodajKlienta_clicked
 */
void GUIA::on_buttonDodajKlienta_clicked()
{
    //formularzKlient = new FormularzDodajKlienta();
    //formularzKlient->show();
}

/**
 * @brief GUIA::on_buttonUzytkownicyPage_clicked
 * Przełącza aktualne okno aplikacji na okno "Użytkownicy"
 */
void GUIA::on_buttonUzytkownicyPage0_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void GUIA::on_buttonUzytkownicyPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void GUIA::on_buttonUzytkownicyPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void GUIA::on_buttonUzytkownicyPage3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief GUIA::on_buttonKlienciPage_clicked
 * Przełącza aktualne okno aplikacji na okno "Klienci"
 */
void GUIA::on_buttonKlienciPage0_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void GUIA::on_buttonKlienciPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void GUIA::on_buttonKlienciPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void GUIA::on_buttonKlienciPage3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/**
 * @brief GUIA::on_buttonProduktyPage_clicked
 * Przełącza aktualne okno aplikacji na okno "Produkty"
 */
void GUIA::on_buttonProduktyPage0_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void GUIA::on_buttonProduktyPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void GUIA::on_buttonProduktyPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void GUIA::on_buttonProduktyPage3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

/**
 * @brief GUIA::on_buttonExitPage_clicked:
 * Obsługa przycisku "Wyjście" - niszczy okno GUIA
 */
void GUIA::on_buttonExitPage0_clicked()
{
    this->destroy(ui);
}
void GUIA::on_buttonExitPage1_clicked()
{
    this->destroy(ui);
}

void GUIA::on_buttonExitPage2_clicked()
{
    this->destroy(ui);
}

void GUIA::on_buttonExitPage3_clicked()
{
    this->destroy(ui);
}

void GUIA::on_buttonDodajUzytkownika_clicked()
{
    administrator->uzytkownik->Dodaj();
  //  administrator->Dodaj();
}

void GUIA::on_buttonDodajProdukt_clicked()
{
    administrator->produkt->Dodaj();
}

void GUIA::on_buttonEdytujUzytkownika_clicked()
{
    administrator->uzytkownik->Edytuj();
 //   administrator->Edytuj();
}

void GUIA::on_buttonEdytujProdukt_clicked()
{
    //administrator->produkt->Edytuj();
}
