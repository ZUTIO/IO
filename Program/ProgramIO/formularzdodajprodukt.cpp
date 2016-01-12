#include "formularzdodajprodukt.h"
#include "ui_formularzdodajprodukt.h"

/**
  12-01-2016:PSZ:
      1) Poprawiłem nazwy i kolejność zmiennych(przycisków) w formularzu
  10-01-2016:LSD:
      1) Stworzyłem formularz produktu oraz mozliwosc ich dodawania do bazy danych
      2) Wyrazenia regularne trzeba dobrac odpowiednio
  19-12-2015:ASK:
      1) Wygenerowano klasę FormularzDodajProdukt
 **/

FormularzDodajProdukt::FormularzDodajProdukt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularzDodajProdukt)
{
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);
}

void FormularzDodajProdukt::on_buttonOK_clicked()
{

    bool boolFormat=0,boolGramatura=0,boolIloscStron=0,boolKolor=0,boolNazwa=0,boolZadruk=0;

    if (ui->lineNazwa->text() == "" || ui->lineNazwa->text().isNull() )
    {
        ui->labelFormatWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelFormatWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineNazwa->text());

        if (!match.hasMatch())
        {
            ui->labelNazwaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNazwaWymagane->setText("Zły format danych.");
            boolFormat = 0;
        }
        else
            boolFormat = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineFormat->text() == "" || ui->lineFormat->text().isNull() )
    {
        ui->labelFormatWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelFormatWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineFormat ->text());

        if (!match.hasMatch())
        {
            ui->labelFormatWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelFormatWymagane->setText("Zły format danych.");
            boolGramatura = 0;
        }
        else
            boolGramatura = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineZadruk->text() == "" || ui->lineZadruk->text().isNull() )
    {
        ui->labelZadrukWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelZadrukWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineZadruk ->text());

        if (!match.hasMatch())
        {
            ui->labelZadrukWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelZadrukWymagane->setText("Zły format danych.");
            boolIloscStron = 0;
        }
        else
            boolIloscStron = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineKolor->text() == "" || ui->lineKolor->text().isNull() )
    {
        ui->labelKolorWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelKolorWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineKolor->text());

        if (!match.hasMatch())
        {
            ui->labelKolorWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelKolorWymagane->setText("Zły format danych.");
            boolKolor = 0;
        }
        else
            boolKolor = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineIloscStron->text() == "" || ui->lineIloscStron->text().isNull() )
    {
        ui->labelIloscStron->setStyleSheet("QLabel {color: red;}");
        ui->labelIloscStron->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineIloscStron->text());

        if (!match.hasMatch())
        {
            ui->labelIloscStronWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelIloscStronWymagane->setText("Zły format danych.");
            boolNazwa = 0;
        }
        else
            boolNazwa = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineZadruk->text() == "" || ui->lineZadruk->text().isNull() )
    {
        ui->labelGramaturaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelGramaturaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineGramatura->text());

        if (!match.hasMatch())
        {
            ui->labelGramaturaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelGramaturaWymagane->setText("Zły format danych.");
            boolZadruk = 0;
        }
        else
            boolZadruk = 1;

        //ui->labelImieWymagane->setText("");
    }

    if (boolFormat==1  && boolGramatura==1 && boolIloscStron==1 && boolKolor==1 && boolNazwa==1 && boolZadruk==1)
    {

        QSqlQuery query;
        query.exec("INSERT INTO Produkty (Format,Gramatura,IloscStron,Kolor,Nazwa,Zadruk) "
                       "VALUES ('" + ui->lineFormat->text() + "','" + ui->lineGramatura->text() + "','" + ui->lineIloscStron->text() + "','" + ui->lineKolor->text() + "','" + ui->lineNazwa->text() + "','" + ui->lineZadruk->text() + "')");


    }




    if(ui->lineFormat->text() != "" && ui->lineGramatura->text() != "" && ui->lineIloscStron->text() != "" && ui->lineKolor->text() != "" && ui->lineNazwa->text() != "" && ui->lineZadruk->text() != "")
    {
        this->hide();
    }
}



FormularzDodajProdukt::~FormularzDodajProdukt()
{
    delete ui;
}

void FormularzDodajProdukt::on_buttonCancel_clicked()
{
    this->setResult(QDialog::Rejected);
    this->hide();
}
