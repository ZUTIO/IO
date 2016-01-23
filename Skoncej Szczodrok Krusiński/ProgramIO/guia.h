#ifndef GUIA_H
#define GUIA_H

#include <QDialog>
#include <QWidget>
#include "administrator.h"
#include <QPixmap>

namespace Ui {
    class GUIA;
}

class GUIA : public QDialog
{
    Q_OBJECT

public:
    explicit GUIA(QWidget *parent = 0);
    ~GUIA();
    void Init(QString kto);

private slots:
    void on_buttonExit_clicked();

    void on_buttonUzytkownicyPage0_clicked();

    void on_buttonKlienciPage0_clicked();

    void on_buttonUzytkownicyPage1_clicked();

    void on_buttonKlienciPage1_clicked();

    void on_buttonUzytkownicyPage2_clicked();

    void on_buttonKlienciPage2_clicked();

    void on_buttonDodajKlienta_clicked();

    void on_buttonExitPage2_clicked();

    void on_buttonExitPage1_clicked();

    void on_buttonExitPage0_clicked();

    void on_buttonProduktyPage0_clicked();

    void on_buttonExitPage3_clicked();

    void on_buttonProduktyPage1_clicked();

    void on_buttonProduktyPage2_clicked();

    void on_buttonUzytkownicyPage3_clicked();

    void on_buttonKlienciPage3_clicked();

    void on_buttonProduktyPage3_clicked();

    void on_buttonDodajUzytkownika_clicked();

    void on_buttonDodajProdukt_clicked();

    void on_buttonEdytujUzytkownika_clicked();

    void on_buttonEdytujProdukt_clicked();

private:
    QString Imie;
    Administrator * administrator;
    Ui::GUIA *ui;
};

#endif // GUIA_H
