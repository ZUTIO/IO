#ifndef FORMULARZDODAJPRODUKT_H
#define FORMULARZDODAJPRODUKT_H

#include <QDialog>

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
    void on_buttonCancel_clicked();

private:
    Ui::FormularzDodajProdukt *ui;
};

#endif // FORMULARZDODAJPRODUKT_H
