#include "aplikacja.h"
#include "ui_aplikacja.h"

#define PATH_TO_DB "C:/Users/Alus/Desktop/IO/Database/mydatabase.sqlite"

Aplikacja::Aplikacja(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Aplikacja)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(PATH_TO_DB);
    QFileInfo checkFile(PATH_TO_DB);

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
        if(qry.exec("SELECT Username, Password FROM Uzytkownicy WHERE Username=\'" + ui->lineUsername->text() +
                    "\' AND Password=\'" + ui->linePass->text() + "\'"))
        {
            if (qry.next())
            {
                ui->labelStatus->setText("Login was succesful");
                oknoglowne *og = new oknoglowne(this);
                og->show();
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
