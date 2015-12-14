#include "administrator.h"
#include "ui_administrator.h"
/**
  14-12-2015:ASK:
      1) Wygenerowano klasę administrator
      2) Dodano 3 funkcje obsługujące przyciski "Exit", "Użytkownicy" oraz "Klienci"
      3) Dodano parametry obsługi przycisków
 **/


/**
 * @brief Administrator::Administrator
 * @param parent
 */
Administrator::Administrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrator)
{
    // Schowanie górnego paska aplikacji (minimalizuj,maksymalizuj,exit)
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);

    ui->labelWitajImiePage0->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelWitajImiePage1->setAttribute(Qt::WA_TranslucentBackground);
    ui->labelWitajImiePage2->setAttribute(Qt::WA_TranslucentBackground);

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
}
/**
 * @brief Administrator::Init
 * @param stringKtoZalogowany
 */
void Administrator::Init(QString stringKtoZalogowany)
{
    this->Imie = stringKtoZalogowany;
    ui->labelWitajImiePage0->setText("Witaj " + this->Imie);
    ui->labelWitajImiePage1->setText("Witaj " + this->Imie);
    ui->labelWitajImiePage2->setText("Witaj " + this->Imie);
}

/**
 * @brief Administrator::~Administrator
 */
Administrator::~Administrator()
{
    delete ui;
}

/**
 * @brief Administrator::on_buttonExit_clicked
 */
void Administrator::on_buttonExit_clicked()
{
    this->setResult(QDialog::Rejected);
    this->close();
    delete ui;
}
/**
 * @brief Administrator::on_buttonDodajKlienta_clicked
 */
void Administrator::on_buttonDodajKlienta_clicked()
{
    formularz = new FormularzDodajKlienta();
    formularz->show();
}

/**
 * @brief Administrator::on_buttonUzytkownicyPage0_clicked
 */
void Administrator::on_buttonUzytkownicyPage0_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief Administrator::on_buttonKlienciPage0_clicked
 */
void Administrator::on_buttonKlienciPage0_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/**
 * @brief Administrator::on_buttonUzytkownicyPage1_clicked
 */
void Administrator::on_buttonUzytkownicyPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief Administrator::on_buttonKlienciPage1_clicked
 */
void Administrator::on_buttonKlienciPage1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/**
 * @brief Administrator::on_buttonUzytkownicyPage2_clicked
 */
void Administrator::on_buttonUzytkownicyPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/**
 * @brief Administrator::on_buttonKlienciPage2_clicked
 */
void Administrator::on_buttonKlienciPage2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
