#ifndef APLIKACJA_H
#define APLIKACJA_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFileInfo>
#include <QDialog>


namespace Ui {
class Aplikacja;
}

class Aplikacja : public QMainWindow
{
    Q_OBJECT

public:
    explicit Aplikacja(QWidget *parent = 0);
    ~Aplikacja();

private slots:
    void on_buttonLogin_clicked();

    void on_linePass_returnPressed();

private:
    Ui::Aplikacja *ui;
    QSqlDatabase database;
};

#endif // APLIKACJA_H
