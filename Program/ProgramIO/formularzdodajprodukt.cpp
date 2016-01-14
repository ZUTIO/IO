#include "formularzdodajprodukt.h"
#include "ui_formularzdodajprodukt.h"
#include "gotowyprodukt.h"
#include "director.h"
#include "pocztowka.h"
#include "notes.h"
#include <QMessageBox>

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
    GotowyProdukt* produkt; // Final product

    /* A director who controls the process */
    Director director;

    /* Concrete builders */
    Pocztowka pocztowka;
    Notes notes;
    if (ui->radioPocztowka->isChecked())
    {
        director.setBuilder(&pocztowka); // using JeepBuilder instance
        produkt = director.getProdukt();
//        QSqlQuery query;
//        query.exec("INSERT INTO Produkty (Nazwa,Format,Obraz,Ilosc) "
//                       "VALUES ('" + produkt->obraz->intDPI.text() + "','" + ui->lineNazwisko->text() + "','" + ui->lineUlica->text() + "','" + ui->lineMiasto->text() + "','" + ui->lineKod->text() + "')");
    }
   else if(ui->radioNotes->isChecked())
   {
       director.setBuilder(&notes); // using JeepBuilder instance
       produkt = director.getProdukt();
   }
   QMessageBox::information(
          this,
          tr("Powodzenie"),
          tr("Produkt dodany.") );
   this->hide();

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
