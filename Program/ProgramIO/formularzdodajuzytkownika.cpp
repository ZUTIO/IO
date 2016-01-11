#include "formularzdodajuzytkownika.h"
#include "ui_formularzdodajuzytkownika.h"

/**
  19-12-2015:ASK:
      1) Wygenerowano klasę FormularzDodajUzytkownika
  11-01-2016:ASK:
      1) Oskryptowano wyrażenia regularne (do zmiany)
 **/

FormularzDodajUzytkownika::FormularzDodajUzytkownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularzDodajUzytkownika)
{
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);
}

FormularzDodajUzytkownika::~FormularzDodajUzytkownika()
{
    delete ui;
}

void FormularzDodajUzytkownika::on_buttonCancel_clicked()
{
    this->setResult(QDialog::Rejected);
    this->hide();
}

void FormularzDodajUzytkownika::on_buttonOKU_clicked()
{
    bool FImie=0,FNazwisko=0,FUlica=0;

    if (ui->lineImieU->text() == "" || ui->lineImieU->text().isNull() )
    {
        ui->labelImieWymaganeU->setStyleSheet("QLabel {color: red;}");
        ui->labelImieWymaganeU->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineImieU->text());

        if (!match.hasMatch())
        {
            ui->labelImieWymaganeU->setStyleSheet("QLabel {color: red;}");
            ui->labelImieWymaganeU->setText("Zły format danych.");
            FImie = 0;
        }
        else
            FImie = 1;
    }

    if (ui->lineNazwiskoU->text() == "" || ui->lineNazwiskoU->text().isNull())
    {
        ui->labelNazwiskoWymaganeU->setStyleSheet("QLabel {color: red;}");
        ui->labelNazwiskoWymaganeU->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineNazwiskoU->text());
        if (!match.hasMatch())
        {
            ui->labelNazwiskoWymaganeU->setStyleSheet("QLabel {color: red;}");
            ui->labelNazwiskoWymaganeU->setText("Zły format danych.");
            FNazwisko = 0;
        }
        else
            FNazwisko = 1;
    }

    if (ui->lineUsernameU->text() == "" || ui->lineUsernameU->text().isNull())
    {
        ui->labelUsernameWymaganeU->setStyleSheet("QLabel {color: red;}");
        ui->labelUsernameWymaganeU->setText("To pole jest wymagane");
    }
    else
    {
        QRegularExpression regex("[a-zA-Z]+");
        QRegularExpressionMatch match = regex.match(ui->lineUsernameU->text());
        if (!match.hasMatch())
        {
            ui->labelUsernameWymaganeU->setStyleSheet("QLabel {color: red;}");
            ui->labelUsernameWymaganeU->setText("Zły format danych.");
            FUlica = 0;
        }
        else
            FUlica = 1;
    }

    if (FImie==1  && FNazwisko==1 && FUlica==1 )
    {

        QSqlQuery query;
        query.exec("INSERT INTO Uzytkownicy (Username,Imie,Nazwisko) "
                       "VALUES ('" + ui->lineUsernameU->text() + "','" + ui->lineImieU->text() + "','" + ui->lineNazwiskoU->text()+ "')");

    }




    if(ui->lineImieU->text() != "" && ui->lineNazwiskoU->text() != "" && ui->lineUsernameU->text() != "")
    {
        this->hide();
    }
}
