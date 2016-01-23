#include "formularzedytujprodukt.h"
#include "ui_formularzedytujprodukt.h"

/**
   12-01-2016:PSZ:
        1)Dodano klasę FormularzEdytujProdukt
  */
/**
 * @brief FormularzEdytujProdukt::FormularzEdytujProdukt
 * @param parent
 * Dodaje wiersze w tabeli na podstawie bazy danych
 */

FormularzEdytujProdukt::FormularzEdytujProdukt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormularzEdytujProdukt)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.exec("SELECT * FROM Produkty");
    int intRow = 0;
    QTableWidgetItem *tableTempItem;
    while (query.next())
    {
       int intColumn = 0;
       ui->tableProdukty->insertRow( ui->tableProdukty->rowCount() );
       tableTempItem= new QTableWidgetItem(QString::number(intRow));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem= new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);

       tableTempItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));
       ui->tableProdukty->setItem(intRow, intColumn++, tableTempItem);
       intRow++;
    }

}

FormularzEdytujProdukt::~FormularzEdytujProdukt()
{
    delete ui;
}
