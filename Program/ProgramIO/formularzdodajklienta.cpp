#include "formularzdodajklienta.h"
#include "ui_formularzdodajklienta.h"

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
    if (ui->lineImie->text() == "")
    {
        ui->labelImieWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelImieWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelImieWymagane->setText("");
    }

    if (ui->lineNazwisko->text() == "")
    {
        ui->labelNazwiskoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNazwiskoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelNazwiskoWymagane->setText("");
    }

    if (ui->lineUlica->text() == "")
    {
        ui->labelUlicaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelUlicaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelUlicaWymagane->setText("");
    }

    if (ui->lineNrDomu->text() == "")
    {
        ui->labelNrDomuWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrDomuWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelNrDomuWymagane->setText("");
    }

    if (ui->lineNrMieszkania->text() == "")
    {
        ui->labelNrMieszkaniaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrMieszkaniaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelNrMieszkaniaWymagane->setText("");
    }

 /*   if (ui->comboWojewodztwo-> == "Wybierz województwo")
    {
        ui->labelWojewodztwoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelWojewodztwoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelWojewodztwoWymagane->setText("");
    } */
    if (ui->lineMiasto->text() == "")
    {
        ui->labelMiastoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelMiastoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelMiastoWymagane->setText("");
    }

    if (ui->lineKod->text() == "")
    {
        ui->labelKodWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelKodWymagane->setText("To pole jest wymagane");
    }
    else
    {
        ui->labelKodWymagane->setText("");
    }

    if(ui->lineImie->text() != "" || ui->lineNazwisko->text() != "" || ui->lineUlica->text() != "" || ui->lineNrDomu->text() != "" || ui->lineNrMieszkania->text() != "" || ui->lineMiasto->text() != "" ||ui->lineKod->text() != "")
    {
        this->hide();
    }
}

void FormularzDodajKlienta::on_buttonCancel_clicked()
{
    this->setResult(QDialog::Rejected);

    this->hide();
}
