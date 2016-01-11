#ifndef FORMULARZDODAJKLIENTA_H
#define FORMULARZDODAJKLIENTA_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>

namespace Ui {
class FormularzDodajKlienta;
}

class FormularzDodajKlienta : public QDialog
{
    Q_OBJECT

public:
    explicit FormularzDodajKlienta(QWidget *parent = 0);
    ~FormularzDodajKlienta();

private slots:
    void on_buttonOK_clicked();

    void on_buttonCancel_clicked();

private:
    Ui::FormularzDodajKlienta *ui;
    QSqlDatabase database;

};

#endif // FORMULARZDODAJKLIENTA_H
