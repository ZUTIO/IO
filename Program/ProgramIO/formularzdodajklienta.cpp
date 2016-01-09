#include "formularzdodajklienta.h"
#include "ui_formularzdodajklienta.h"
#include <QRegExp>
#include <qregularexpression.h>
#include <QtSql/QSqlQuery>

/**
09-01-2016:LSD:
    1) Dodano sprawdzanie poprawnosci wpisywanych danych
     ?? Sprawdzanie strasznie muli apikacje, trzeba jakos to obejsc
    2) Dodano (w 50% bo nie działa :P) dodawanie klienta d bazy danych (coś ze składnią zapytania..)

**/


FormularzDodajKlienta::FormularzDodajKlienta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularzDodajKlienta)
{
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);
}

FormularzDodajKlienta::~FormularzDodajKlienta()
{
    delete ui;
}

void FormularzDodajKlienta::on_buttonOK_clicked()
{
    bool FImie=0,FNazwisko=0,FUlica=0,FNrDomu=0,FNrMieszkania=0,FMiasto=0,FKod=0;

    if (ui->lineImie->text() == "" || ui->lineImie->text().isNull() )
    {
        ui->labelImieWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelImieWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineImie->text());

        if (!match.hasMatch())
        {
            ui->labelImieWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelImieWymagane->setText("Zły format danych.");
            FImie = 0;
        }
        else
            FImie = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineNazwisko->text() == "" || ui->lineNazwisko->text().isNull())
    {
        ui->labelNazwiskoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNazwiskoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineNazwisko->text());
        if (!match.hasMatch())
        {
            ui->labelNazwiskoWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNazwiskoWymagane->setText("Zły format danych.");
            FNazwisko = 0;
        }
        else
            FNazwisko = 1;

        //ui->labelNazwiskoWymagane->setText("");
    }

    if (ui->lineUlica->text() == "" || ui->lineUlica->text().isNull())
    {
        ui->labelUlicaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelUlicaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineUlica->text());
        if (!match.hasMatch())
        {
            ui->labelUlicaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelUlicaWymagane->setText("Zły format danych.");
            FUlica = 0;
        }
        else
            FUlica = 1;

        //ui->labelUlicaWymagane->setText("");
    }

    if (ui->lineNrDomu->text() == "" || ui->lineNrDomu->text().isNull())
    {
        ui->labelNrDomuWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrDomuWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[0-9]+");
        QRegularExpressionMatch match = regex.match(ui->lineNrDomu->text());
        if (!match.hasMatch())
        {
            ui->labelNrDomuWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNrDomuWymagane->setText("Zły format danych.");
            FNrDomu = 0;
        }
        else
            FNrDomu = 1;

        //ui->labelNrDomuWymagane->setText("");
    }

    if (ui->lineNrMieszkania->text() == "" || ui->lineNrMieszkania->text().isNull())
    {
        ui->labelNrMieszkaniaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrMieszkaniaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[0-9]+");
        QRegularExpressionMatch match = regex.match(ui->lineNrMieszkania->text());
        if (!match.hasMatch())
        {
            ui->labelNrMieszkaniaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNrMieszkaniaWymagane->setText("Zły format danych.");
            FNrMieszkania = 0;
        }
        else
            FNrMieszkania = 1;

        //ui->labelNrMieszkaniaWymagane->setText("");
    }

    if (ui->lineMiasto->text() == "" || ui->lineMiasto->text().isNull())
    {
        ui->labelMiastoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelMiastoWymagane->setText("To pole jest wymagane");
    }
    else
    {
       QRegularExpression regex("[a-zA-Z]+");
       QRegularExpressionMatch match = regex.match(ui->lineMiasto->text());
        if (!match.hasMatch())
        {
            ui->labelMiastoWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelMiastoWymagane->setText("Zły format danych.");
            FMiasto = 0;
        }
        else
            FMiasto = 1;

        //ui->labelMiastoWymagane->setText("");
    }

    if (ui->lineKod->text() == "" || ui->lineKod->text().isNull())
    {
        ui->labelKodWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelKodWymagane->setText("To pole jest wymagane");
    }
    else
    {
       QRegularExpression regex("[0-9][0-9]-[0-9][0-9][0-9]");
       QRegularExpressionMatch match = regex.match(ui->lineKod->text());
        if (!match.hasMatch())
        {
            ui->labelKodWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelKodWymagane->setText("Zły format danych.");
            FKod = 0;
        }
        else
            FKod = 1;

        //ui->labelKodWymagane->setText("");
    }

    if (FImie==1  && FNazwisko==1 && FUlica==1 && FNrDomu==1 && FNrMieszkania==1 && FMiasto==1 && FKod==1)
    {
        printf("akjdhkajsh");
        QSqlQuery query;
        query.exec("INSERT INTO Klienci (Imie,Nazwisko,Ulica,Miasto,KodPocztowy) "
                       "VALUES ('" + ui->lineImie->text() + "','" + ui->lineNazwisko->text() + "','" + ui->lineUlica->text() + "','" + ui->lineMiasto->text() + "','" + ui->lineKod->text() + "')");

    }




    if(ui->lineImie->text() != "" && ui->lineNazwisko->text() != "" && ui->lineUlica->text() != "" && ui->lineNrDomu->text() != "" && ui->lineNrMieszkania->text() != "" && ui->lineMiasto->text() != "" && ui->lineKod->text() != "")
    {
        this->hide();
    }
}

void FormularzDodajKlienta::on_buttonCancel_clicked()
{
    this->setResult(QDialog::Rejected);

    this->hide();
}
