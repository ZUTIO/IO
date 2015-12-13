#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QDialog>
#include <QWidget>
#include "formularzdodajklienta.h"

namespace Ui {
    class Administrator;
}

class Administrator : public QDialog
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = 0);
    ~Administrator();

private slots:
    void on_buttonExit_clicked();

    void on_buttonDodajKlienta_clicked();

private:
    Ui::Administrator *ui;
    FormularzDodajKlienta *formularz;
};

#endif // ADMINISTRATOR_H
