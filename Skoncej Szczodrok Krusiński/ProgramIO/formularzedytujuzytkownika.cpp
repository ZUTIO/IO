#include "formularzedytujuzytkownika.h"
#include "ui_formularzedytujuzytkownika.h"

/**
   11-01-2016:ASK:
        1)Dodano klasę FormularzEdytujKlienta
  */
/**
 * @brief FormularzEdytujUzytkownika::FormularzEdytujUzytkownika
 * @param parent
 * Dodaje wiersze w tabeli na podstawie bazy danych
 */
FormularzEdytujUzytkownika::FormularzEdytujUzytkownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularzEdytujUzytkownika)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.exec("SELECT * FROM Uzytkownicy");
    int intRow = 0;
    QTableWidgetItem *tableTempItem;
    while (query.next())
    {
        int intColumn = 0;
        ui->tablePracownicy->insertRow( ui->tablePracownicy->rowCount() );
        tableTempItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
        ui->tablePracownicy->setItem(intRow, intColumn++, tableTempItem);

        tableTempItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
        ui->tablePracownicy->setItem(intRow, intColumn++, tableTempItem);

        tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));
        ui->tablePracownicy->setItem(intRow, intColumn++, tableTempItem);
        intRow++;
    }

}

FormularzEdytujUzytkownika::~FormularzEdytujUzytkownika()
{
    delete ui;
}
