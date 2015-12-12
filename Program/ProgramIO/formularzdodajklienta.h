#ifndef FORMULARZDODAJKLIENTA_H
#define FORMULARZDODAJKLIENTA_H

#include <QDialog>

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
};

#endif // FORMULARZDODAJKLIENTA_H
