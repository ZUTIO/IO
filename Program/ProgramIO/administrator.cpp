#include "administrator.h"
#include "ui_administrator.h"

Administrator::Administrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrator)
{
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    ui->setupUi(this);
}

Administrator::~Administrator()
{
    delete ui;
}
void Administrator::on_buttonExit_clicked()
{
    this->setResult(QDialog::Rejected);
    this->close();
    delete ui;
}

void Administrator::on_buttonDodajKlienta_clicked()
{
    formularz = new FormularzDodajKlienta();
    formularz->show();
}

