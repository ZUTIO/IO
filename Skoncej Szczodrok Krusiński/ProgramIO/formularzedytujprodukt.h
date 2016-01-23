#ifndef FORMULARZEDYTUJPRODUKT_H
#define FORMULARZEDYTUJPRODUKT_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>
/**
   12-01-2016:PSZ:
        1)Dodano klasę FormularzEdytujProdukt
  */

namespace Ui {
class FormularzEdytujProdukt;
}

class FormularzEdytujProdukt : public QDialog
{
    Q_OBJECT

public:
    explicit FormularzEdytujProdukt(QWidget *parent = 0);
    ~FormularzEdytujProdukt();

private:
    Ui::FormularzEdytujProdukt *ui;
};

#endif // FORMULARZEDYTUJPRODUKT_H
