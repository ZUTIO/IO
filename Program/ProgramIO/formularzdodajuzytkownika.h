#ifndef FORMULARZDODAJUZYTKOWNIKA_H
#define FORMULARZDODAJUZYTKOWNIKA_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>

namespace Ui {
class FormularzDodajUzytkownika;
}

class FormularzDodajUzytkownika : public QDialog
{
    Q_OBJECT

public:
    explicit FormularzDodajUzytkownika(QWidget *parent = 0);
    ~FormularzDodajUzytkownika();

private slots:
    void on_buttonCancel_clicked();

    void on_buttonOKU_clicked();

private:
    Ui::FormularzDodajUzytkownika *ui;
};

#endif // FORMULARZDODAJUZYTKOWNIKA_H
