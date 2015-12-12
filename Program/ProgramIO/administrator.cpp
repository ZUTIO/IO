#include "administrator.h"
#include "ui_oknoglowne.h"
#include <QMessageBox>

oknoglowne::oknoglowne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::oknoglowne)
{
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);
}

oknoglowne::~oknoglowne()
{
    delete ui;
}

void oknoglowne::on_buttonExit_clicked()
{
    this->setResult(QDialog::Rejected);
    this->close();
    delete ui;
}

void oknoglowne::on_buttonDodajKlienta_clicked()
{
    formularz = new FormularzDodajKlienta();
    formularz->show();
}

