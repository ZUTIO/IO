#ifndef FORMULARZEDYTUJUZYTKOWNIKA_H
#define FORMULARZEDYTUJUZYTKOWNIKA_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>
/**
  11-01-2016:ASK:
        1)Dodano klasę FormularzEdytujKlienta
  */
namespace Ui {
class FormularzEdytujUzytkownika;
}

class FormularzEdytujUzytkownika : public QDialog
{
    Q_OBJECT

public:
    explicit FormularzEdytujUzytkownika(QWidget *parent = 0);
    ~FormularzEdytujUzytkownika();

private:
    Ui::FormularzEdytujUzytkownika *ui;
};

#endif // FORMULARZEDYTUJUZYTKOWNIKA_H
