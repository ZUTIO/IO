#include "aplikacja.h"
#include "ui_aplikacja.h"
#include "Administrator.h"
/**
  14-12-2015:ASK:
      1) Wygenerowano klasę Aplikacja -> trzeba bedzie ją zmienić na PanelLogowania
      2) Dodano połączenie z bazą danych
      3) Dodano obsługę entera, choć nie działa za pierwszym razem a dopiero za drugim (lol)
      4) Dodano funkcję obsługi kont
 **/

Aplikacja::Aplikacja(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Aplikacja)
{
    ui->setupUi(this);
    // Ustawienie bazy danych
    database = QSqlDatabase::addDatabase("QSQLITE");
    // Pobranie aktualnej ścieżki w której znajduje się program (w trybie debug jest to katalog debug)
    QString appDir = QApplication::applicationDirPath();
    database.setDatabaseName(appDir+"/Database/mydatabase.sqlite");
    QFileInfo checkFile(appDir+"/Database/mydatabase.sqlite");

    if(checkFile.isFile())
    {
        if(database.open())
        {
            ui->labelStatus->setText("Connected to the database");
        }
    }
    else
    {
        ui->labelStatus->setText("No connection to the database");
    }
}

Aplikacja::~Aplikacja()
{
    delete ui;
}

void Aplikacja::on_buttonLogin_clicked()
{
    if(!database.isOpen())
    {
        ui->labelStatus->setText("No connection to the database");
    }
    else
    {
        QSqlQuery qry;
        if(qry.exec("SELECT Username, Password FROM Uzytkownicy WHERE Username=\'" + ui->lineUsername->text() +  "\' AND Password=\'" + ui->linePass->text() + "\'"))
        {
            if (qry.next())
            {
                ui->labelStatus->setText("Login was succesful");
                Administrator *adm = new Administrator(this);
                adm->Init(ui->lineUsername->text());
                QPalette palette;
                adm->setPalette(palette);
                adm->show();
                this->hide();
            }
            else
            {
                ui->labelStatus->setText("Wrong username or password");
            }
        }
    }
}

void Aplikacja::on_linePass_returnPressed()
{
    connect(ui->lineUsername, SIGNAL(returnPressed()),ui->buttonLogin,SIGNAL(clicked()));
    connect(ui->linePass, SIGNAL(returnPressed()),ui->buttonLogin,SIGNAL(clicked()));
}
