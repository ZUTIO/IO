#include "formularzdodajprodukt.h"
#include "ui_formularzdodajprodukt.h"

/**
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

FormularzDodajProdukt::~FormularzDodajProdukt()
{
    delete ui;
}

void FormularzDodajProdukt::on_buttonCancel_clicked()
{
    this->setResult(QDialog::Rejected);
    this->hide();
}
