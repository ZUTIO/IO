#ifndef OKNOGLOWNE_H
#define OKNOGLOWNE_H

#include <QDialog>
#include "Administrator.h"
#include "formularzdodajklienta.h"

namespace Ui {
class oknoglowne;
}

class oknoglowne : public QDialog
{
    Q_OBJECT

public:
    explicit oknoglowne(QWidget *parent = 0);
    ~oknoglowne();

private slots:
    void on_buttonExit_clicked();

    void on_buttonDodajKlienta_clicked();

private:
    Ui::oknoglowne *ui;
    FormularzDodajKlienta *formularz;
};

#endif // OKNOGLOWNE_H
