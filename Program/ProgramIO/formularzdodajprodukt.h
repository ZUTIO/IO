#ifndef FORMULARZDODAJPRODUKT_H
#define FORMULARZDODAJPRODUKT_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>

namespace Ui {
class FormularzDodajProdukt;
}

class FormularzDodajProdukt : public QDialog
{
    Q_OBJECT

public:
    explicit FormularzDodajProdukt(QWidget *parent = 0);
    ~FormularzDodajProdukt();

private slots:
    void on_buttonOK_clicked();

    void on_buttonCancel_clicked();

private:
    Ui::FormularzDodajProdukt *ui;
    QSqlDatabase database;
};

#endif // FORMULARZDODAJPRODUKT_H
