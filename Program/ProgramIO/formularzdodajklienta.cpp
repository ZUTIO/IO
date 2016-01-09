#include "formularzdodajklienta.h"
#include "ui_formularzdodajklienta.h"
#include <QRegExp>

int match(QString text, QString pattern)
{
    QRegExp regex(pattern);
    bool matches = regex.exactMatch(text);
    return matches;
}

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
    if (ui->lineImie->text() == "" || ui->lineImie->text().isNull() )
    {
        ui->labelImieWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelImieWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineImie->text(),"[a-zA-Z]+"))
        {
            ui->labelImieWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelImieWymagane->setText("Zły format danych. [a-zA-Z]");
        }

        //ui->labelImieWymagane->setText("");
    }

    if (ui->lineNazwisko->text() == "" || ui->lineNazwisko->text().isNull())
    {
        ui->labelNazwiskoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNazwiskoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineNazwisko->text(),"[a-zA-Z]+"))
        {
            ui->labelNazwiskoWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNazwiskoWymagane->setText("Zły format danych. [a-zA-Z]");
        }

        //ui->labelNazwiskoWymagane->setText("");
    }

    if (ui->lineUlica->text() == "" || ui->lineUlica->text().isNull())
    {
        ui->labelUlicaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelUlicaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineUlica->text(),"[a-zA-Z]+"))
        {
            ui->labelUlicaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelUlicaWymagane->setText("Zły format danych. [a-zA-Z]");
        }

        //ui->labelUlicaWymagane->setText("");
    }

    if (ui->lineNrDomu->text() == "" || ui->lineNrDomu->text().isNull())
    {
        ui->labelNrDomuWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrDomuWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineNrDomu->text(),"[0-9]+"))
        {
            ui->labelNrDomuWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNrDomuWymagane->setText("Zły format danych. [0-9]");
        }

        //ui->labelNrDomuWymagane->setText("");
    }

    if (ui->lineNrMieszkania->text() == "" || ui->lineNrMieszkania->text().isNull())
    {
        ui->labelNrMieszkaniaWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelNrMieszkaniaWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineNrMieszkania->text(),"[0-9]+"))
        {
            ui->labelNrMieszkaniaWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelNrMieszkaniaWymagane->setText("Zły format danych. [0-9]");
        }

        //ui->labelNrMieszkaniaWymagane->setText("");
    }

    if (ui->lineMiasto->text() == "" || ui->lineMiasto->text().isNull())
    {
        ui->labelMiastoWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelMiastoWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineMiasto->text(),"[a-zA-Z]+"))
        {
            ui->labelMiastoWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelMiastoWymagane->setText("Zły format danych. [a-zA-Z]");
        }

        //ui->labelMiastoWymagane->setText("");
    }

    if (ui->lineKod->text() == "" || ui->lineKod->text().isNull())
    {
        ui->labelKodWymagane->setStyleSheet("QLabel {color: red;}");
        ui->labelKodWymagane->setText("To pole jest wymagane");
    }
    else
    {
        if (!match(ui->lineKod->text(),"[0-9][0-9]-[0-9][0-9][0-9]"))
        {
            ui->labelKodWymagane->setStyleSheet("QLabel {color: red;}");
            ui->labelKodWymagane->setText("Zły format danych. [xx-xxx]");
        }

        //ui->labelKodWymagane->setText("");
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
