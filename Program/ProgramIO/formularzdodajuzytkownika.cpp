#include "formularzdodajuzytkownika.h"
#include "ui_formularzdodajuzytkownika.h"

/**
  19-12-2015:ASK:
      1) Wygenerowano klasę FormularzDodajUzytkownika
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
