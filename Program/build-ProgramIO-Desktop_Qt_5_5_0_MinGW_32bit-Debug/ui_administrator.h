/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *labelWitajImiePage0;
    QFrame *frameUzytkownicy;
    QPushButton *buttonUzytkownicyPage0;
    QLabel *label;
    QFrame *frameKlienci;
    QLabel *label_2;
    QPushButton *buttonKlienciPage0;
    QPushButton *buttonExit;
    QWidget *page_1;
    QFrame *frameUzytkownicyPage1;
    QPushButton *buttonUzytkownicyPage1;
    QLabel *labelUzytkownicyPage1;
    QFrame *frameKlienciPage1;
    QLabel *labelKlienciPage1;
    QPushButton *buttonKlienciPage1;
    QLabel *labelWitajImiePage1;
    QFrame *frameDodajUzytkownika;
    QPushButton *buttonDodajUzytkownika;
    QLabel *labelDodajUzytkownika;
    QFrame *frameEdytujUzytkownika;
    QPushButton *buttonEdytujUzytkownika;
    QLabel *labelEdytujUzytkownika;
    QFrame *frameUsunUzytkownika;
    QPushButton *buttonUsunUzytkownika;
    QLabel *labelKlienciPage1_2;
    QPushButton *buttonExit_2;
    QWidget *page_2;
    QFrame *frameEdytujKlienta;
    QPushButton *buttonEdytujKlienta;
    QLabel *labelEdytujKlienta;
    QFrame *frameUsunKlienta;
    QPushButton *buttonUsunKlienta;
    QLabel *label_14;
    QFrame *frameDodajKlienta;
    QPushButton *buttonDodajKlienta;
    QLabel *label_13;
    QFrame *frameKlienciPage2;
    QLabel *labelKlienciPage2;
    QPushButton *buttonKlienciPage2;
    QFrame *frameUzytkownicyPage2;
    QPushButton *buttonUzytkownicyPage2;
    QLabel *labelUzytkownicyPage2;
    QLabel *labelWitajImiePage2;
    QLabel *label_6;
    QPushButton *buttonExitPage2;

    void setupUi(QDialog *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(912, 534);
        Administrator->setStyleSheet(QStringLiteral("background-image: url(:/Images/Images/background.jpg);"));
        stackedWidget = new QStackedWidget(Administrator);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 10, 881, 491));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        labelWitajImiePage0 = new QLabel(page_0);
        labelWitajImiePage0->setObjectName(QStringLiteral("labelWitajImiePage0"));
        labelWitajImiePage0->setEnabled(true);
        labelWitajImiePage0->setGeometry(QRect(660, 10, 181, 41));
        QFont font;
        font.setFamily(QStringLiteral("Constantia"));
        font.setPointSize(13);
        font.setStyleStrategy(QFont::PreferDefault);
        labelWitajImiePage0->setFont(font);
        labelWitajImiePage0->setAutoFillBackground(false);
        labelWitajImiePage0->setStyleSheet(QStringLiteral("color: white;"));
        labelWitajImiePage0->setFrameShadow(QFrame::Plain);
        labelWitajImiePage0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frameUzytkownicy = new QFrame(page_0);
        frameUzytkownicy->setObjectName(QStringLiteral("frameUzytkownicy"));
        frameUzytkownicy->setGeometry(QRect(10, 100, 250, 90));
        frameUzytkownicy->setMinimumSize(QSize(250, 90));
        frameUzytkownicy->setMaximumSize(QSize(250, 90));
        frameUzytkownicy->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUzytkownicy->setFrameShape(QFrame::StyledPanel);
        frameUzytkownicy->setFrameShadow(QFrame::Plain);
        buttonUzytkownicyPage0 = new QPushButton(frameUzytkownicy);
        buttonUzytkownicyPage0->setObjectName(QStringLiteral("buttonUzytkownicyPage0"));
        buttonUzytkownicyPage0->setGeometry(QRect(0, 0, 251, 91));
        QFont font1;
        font1.setFamily(QStringLiteral("Linux Libertine Display G"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        buttonUzytkownicyPage0->setFont(font1);
        buttonUzytkownicyPage0->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        label = new QLabel(frameUzytkownicy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 70, 74));
        label->setMinimumSize(QSize(70, 74));
        label->setMaximumSize(QSize(70, 74));
        label->setStyleSheet(QLatin1String("image:url(:/Images/Images/user.png);\n"
"background:transparent;"));
        frameKlienci = new QFrame(page_0);
        frameKlienci->setObjectName(QStringLiteral("frameKlienci"));
        frameKlienci->setGeometry(QRect(10, 200, 250, 90));
        frameKlienci->setMinimumSize(QSize(250, 90));
        frameKlienci->setMaximumSize(QSize(250, 90));
        frameKlienci->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameKlienci->setFrameShape(QFrame::StyledPanel);
        frameKlienci->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frameKlienci);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 70, 74));
        label_2->setMinimumSize(QSize(70, 74));
        label_2->setMaximumSize(QSize(70, 74));
        label_2->setStyleSheet(QLatin1String("image: url(:/Images/Images/clients.png);\n"
"background:transparent;"));
        buttonKlienciPage0 = new QPushButton(frameKlienci);
        buttonKlienciPage0->setObjectName(QStringLiteral("buttonKlienciPage0"));
        buttonKlienciPage0->setGeometry(QRect(0, 0, 251, 91));
        buttonKlienciPage0->setFont(font1);
        buttonKlienciPage0->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonKlienciPage0->raise();
        label_2->raise();
        buttonExit = new QPushButton(page_0);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        buttonExit->setGeometry(QRect(720, 440, 141, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Constantia"));
        font2.setPointSize(10);
        buttonExit->setFont(font2);
        buttonExit->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExit->setFlat(true);
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        frameUzytkownicyPage1 = new QFrame(page_1);
        frameUzytkownicyPage1->setObjectName(QStringLiteral("frameUzytkownicyPage1"));
        frameUzytkownicyPage1->setGeometry(QRect(10, 100, 250, 90));
        frameUzytkownicyPage1->setMinimumSize(QSize(250, 90));
        frameUzytkownicyPage1->setMaximumSize(QSize(250, 90));
        frameUzytkownicyPage1->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUzytkownicyPage1->setFrameShape(QFrame::StyledPanel);
        frameUzytkownicyPage1->setFrameShadow(QFrame::Plain);
        buttonUzytkownicyPage1 = new QPushButton(frameUzytkownicyPage1);
        buttonUzytkownicyPage1->setObjectName(QStringLiteral("buttonUzytkownicyPage1"));
        buttonUzytkownicyPage1->setGeometry(QRect(0, 0, 251, 91));
        buttonUzytkownicyPage1->setFont(font1);
        buttonUzytkownicyPage1->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        labelUzytkownicyPage1 = new QLabel(frameUzytkownicyPage1);
        labelUzytkownicyPage1->setObjectName(QStringLiteral("labelUzytkownicyPage1"));
        labelUzytkownicyPage1->setGeometry(QRect(20, 10, 70, 74));
        labelUzytkownicyPage1->setMinimumSize(QSize(70, 74));
        labelUzytkownicyPage1->setMaximumSize(QSize(70, 74));
        labelUzytkownicyPage1->setStyleSheet(QLatin1String("image:url(:/Images/Images/user.png);\n"
"background:transparent;"));
        frameKlienciPage1 = new QFrame(page_1);
        frameKlienciPage1->setObjectName(QStringLiteral("frameKlienciPage1"));
        frameKlienciPage1->setGeometry(QRect(10, 200, 250, 90));
        frameKlienciPage1->setMinimumSize(QSize(250, 90));
        frameKlienciPage1->setMaximumSize(QSize(250, 90));
        frameKlienciPage1->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameKlienciPage1->setFrameShape(QFrame::StyledPanel);
        frameKlienciPage1->setFrameShadow(QFrame::Sunken);
        labelKlienciPage1 = new QLabel(frameKlienciPage1);
        labelKlienciPage1->setObjectName(QStringLiteral("labelKlienciPage1"));
        labelKlienciPage1->setGeometry(QRect(20, 10, 70, 74));
        labelKlienciPage1->setMinimumSize(QSize(70, 74));
        labelKlienciPage1->setMaximumSize(QSize(70, 74));
        labelKlienciPage1->setStyleSheet(QLatin1String("image: url(:/Images/Images/clients.png);\n"
"background:transparent;"));
        buttonKlienciPage1 = new QPushButton(frameKlienciPage1);
        buttonKlienciPage1->setObjectName(QStringLiteral("buttonKlienciPage1"));
        buttonKlienciPage1->setGeometry(QRect(0, 0, 251, 91));
        buttonKlienciPage1->setFont(font1);
        buttonKlienciPage1->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonKlienciPage1->raise();
        labelKlienciPage1->raise();
        labelWitajImiePage1 = new QLabel(page_1);
        labelWitajImiePage1->setObjectName(QStringLiteral("labelWitajImiePage1"));
        labelWitajImiePage1->setEnabled(true);
        labelWitajImiePage1->setGeometry(QRect(660, 10, 181, 41));
        labelWitajImiePage1->setFont(font);
        labelWitajImiePage1->setAutoFillBackground(false);
        labelWitajImiePage1->setStyleSheet(QStringLiteral("color: white;"));
        labelWitajImiePage1->setFrameShadow(QFrame::Plain);
        labelWitajImiePage1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frameDodajUzytkownika = new QFrame(page_1);
        frameDodajUzytkownika->setObjectName(QStringLiteral("frameDodajUzytkownika"));
        frameDodajUzytkownika->setGeometry(QRect(600, 100, 271, 81));
        frameDodajUzytkownika->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameDodajUzytkownika->setFrameShape(QFrame::StyledPanel);
        frameDodajUzytkownika->setFrameShadow(QFrame::Plain);
        buttonDodajUzytkownika = new QPushButton(frameDodajUzytkownika);
        buttonDodajUzytkownika->setObjectName(QStringLiteral("buttonDodajUzytkownika"));
        buttonDodajUzytkownika->setGeometry(QRect(10, 5, 251, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Constantia"));
        font3.setPointSize(12);
        buttonDodajUzytkownika->setFont(font3);
        buttonDodajUzytkownika->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonDodajUzytkownika->setFlat(false);
        labelDodajUzytkownika = new QLabel(frameDodajUzytkownika);
        labelDodajUzytkownika->setObjectName(QStringLiteral("labelDodajUzytkownika"));
        labelDodajUzytkownika->setGeometry(QRect(7, 6, 70, 70));
        labelDodajUzytkownika->setMinimumSize(QSize(70, 70));
        labelDodajUzytkownika->setMaximumSize(QSize(70, 70));
        labelDodajUzytkownika->setStyleSheet(QStringLiteral("background:transparent;"));
        labelDodajUzytkownika->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/plus.png")));
        frameEdytujUzytkownika = new QFrame(page_1);
        frameEdytujUzytkownika->setObjectName(QStringLiteral("frameEdytujUzytkownika"));
        frameEdytujUzytkownika->setGeometry(QRect(600, 190, 271, 81));
        frameEdytujUzytkownika->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameEdytujUzytkownika->setFrameShape(QFrame::StyledPanel);
        frameEdytujUzytkownika->setFrameShadow(QFrame::Plain);
        buttonEdytujUzytkownika = new QPushButton(frameEdytujUzytkownika);
        buttonEdytujUzytkownika->setObjectName(QStringLiteral("buttonEdytujUzytkownika"));
        buttonEdytujUzytkownika->setGeometry(QRect(10, 10, 251, 61));
        buttonEdytujUzytkownika->setFont(font3);
        buttonEdytujUzytkownika->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonEdytujUzytkownika->setFlat(false);
        labelEdytujUzytkownika = new QLabel(frameEdytujUzytkownika);
        labelEdytujUzytkownika->setObjectName(QStringLiteral("labelEdytujUzytkownika"));
        labelEdytujUzytkownika->setGeometry(QRect(17, 7, 70, 70));
        labelEdytujUzytkownika->setMinimumSize(QSize(70, 70));
        labelEdytujUzytkownika->setMaximumSize(QSize(70, 70));
        labelEdytujUzytkownika->setStyleSheet(QStringLiteral("background:transparent;"));
        labelEdytujUzytkownika->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/edit.png")));
        frameUsunUzytkownika = new QFrame(page_1);
        frameUsunUzytkownika->setObjectName(QStringLiteral("frameUsunUzytkownika"));
        frameUsunUzytkownika->setGeometry(QRect(600, 280, 271, 81));
        frameUsunUzytkownika->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUsunUzytkownika->setFrameShape(QFrame::StyledPanel);
        frameUsunUzytkownika->setFrameShadow(QFrame::Plain);
        buttonUsunUzytkownika = new QPushButton(frameUsunUzytkownika);
        buttonUsunUzytkownika->setObjectName(QStringLiteral("buttonUsunUzytkownika"));
        buttonUsunUzytkownika->setGeometry(QRect(10, 10, 251, 61));
        buttonUsunUzytkownika->setFont(font3);
        buttonUsunUzytkownika->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonUsunUzytkownika->setFlat(false);
        labelKlienciPage1_2 = new QLabel(frameUsunUzytkownika);
        labelKlienciPage1_2->setObjectName(QStringLiteral("labelKlienciPage1_2"));
        labelKlienciPage1_2->setGeometry(QRect(17, 6, 70, 70));
        labelKlienciPage1_2->setMinimumSize(QSize(70, 70));
        labelKlienciPage1_2->setMaximumSize(QSize(70, 70));
        labelKlienciPage1_2->setStyleSheet(QStringLiteral("background:transparent;"));
        labelKlienciPage1_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/minus.png")));
        buttonExit_2 = new QPushButton(page_1);
        buttonExit_2->setObjectName(QStringLiteral("buttonExit_2"));
        buttonExit_2->setGeometry(QRect(720, 440, 141, 41));
        buttonExit_2->setFont(font2);
        buttonExit_2->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExit_2->setFlat(true);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frameEdytujKlienta = new QFrame(page_2);
        frameEdytujKlienta->setObjectName(QStringLiteral("frameEdytujKlienta"));
        frameEdytujKlienta->setGeometry(QRect(600, 190, 271, 81));
        frameEdytujKlienta->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameEdytujKlienta->setFrameShape(QFrame::StyledPanel);
        frameEdytujKlienta->setFrameShadow(QFrame::Plain);
        buttonEdytujKlienta = new QPushButton(frameEdytujKlienta);
        buttonEdytujKlienta->setObjectName(QStringLiteral("buttonEdytujKlienta"));
        buttonEdytujKlienta->setGeometry(QRect(10, 10, 251, 61));
        buttonEdytujKlienta->setFont(font3);
        buttonEdytujKlienta->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonEdytujKlienta->setFlat(false);
        labelEdytujKlienta = new QLabel(frameEdytujKlienta);
        labelEdytujKlienta->setObjectName(QStringLiteral("labelEdytujKlienta"));
        labelEdytujKlienta->setGeometry(QRect(17, 7, 70, 70));
        labelEdytujKlienta->setMinimumSize(QSize(70, 70));
        labelEdytujKlienta->setMaximumSize(QSize(70, 70));
        labelEdytujKlienta->setStyleSheet(QStringLiteral("background:transparent;"));
        labelEdytujKlienta->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/edit.png")));
        frameUsunKlienta = new QFrame(page_2);
        frameUsunKlienta->setObjectName(QStringLiteral("frameUsunKlienta"));
        frameUsunKlienta->setGeometry(QRect(600, 280, 271, 81));
        frameUsunKlienta->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUsunKlienta->setFrameShape(QFrame::StyledPanel);
        frameUsunKlienta->setFrameShadow(QFrame::Plain);
        buttonUsunKlienta = new QPushButton(frameUsunKlienta);
        buttonUsunKlienta->setObjectName(QStringLiteral("buttonUsunKlienta"));
        buttonUsunKlienta->setGeometry(QRect(10, 10, 251, 61));
        buttonUsunKlienta->setFont(font3);
        buttonUsunKlienta->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonUsunKlienta->setFlat(false);
        label_14 = new QLabel(frameUsunKlienta);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(17, 6, 70, 70));
        label_14->setMinimumSize(QSize(70, 70));
        label_14->setMaximumSize(QSize(70, 70));
        label_14->setStyleSheet(QStringLiteral("background:transparent;"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/minus.png")));
        frameDodajKlienta = new QFrame(page_2);
        frameDodajKlienta->setObjectName(QStringLiteral("frameDodajKlienta"));
        frameDodajKlienta->setGeometry(QRect(600, 100, 271, 81));
        frameDodajKlienta->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameDodajKlienta->setFrameShape(QFrame::StyledPanel);
        frameDodajKlienta->setFrameShadow(QFrame::Plain);
        buttonDodajKlienta = new QPushButton(frameDodajKlienta);
        buttonDodajKlienta->setObjectName(QStringLiteral("buttonDodajKlienta"));
        buttonDodajKlienta->setGeometry(QRect(10, 5, 251, 61));
        buttonDodajKlienta->setFont(font3);
        buttonDodajKlienta->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonDodajKlienta->setFlat(false);
        label_13 = new QLabel(frameDodajKlienta);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(7, 6, 70, 70));
        label_13->setMinimumSize(QSize(70, 70));
        label_13->setMaximumSize(QSize(70, 70));
        label_13->setStyleSheet(QStringLiteral("background:transparent;"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/plus.png")));
        frameKlienciPage2 = new QFrame(page_2);
        frameKlienciPage2->setObjectName(QStringLiteral("frameKlienciPage2"));
        frameKlienciPage2->setGeometry(QRect(10, 200, 250, 90));
        frameKlienciPage2->setMinimumSize(QSize(250, 90));
        frameKlienciPage2->setMaximumSize(QSize(250, 90));
        frameKlienciPage2->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameKlienciPage2->setFrameShape(QFrame::StyledPanel);
        frameKlienciPage2->setFrameShadow(QFrame::Sunken);
        labelKlienciPage2 = new QLabel(frameKlienciPage2);
        labelKlienciPage2->setObjectName(QStringLiteral("labelKlienciPage2"));
        labelKlienciPage2->setGeometry(QRect(20, 10, 70, 74));
        labelKlienciPage2->setMinimumSize(QSize(70, 74));
        labelKlienciPage2->setMaximumSize(QSize(70, 74));
        labelKlienciPage2->setStyleSheet(QLatin1String("image: url(:/Images/Images/clients.png);\n"
"background:transparent;"));
        buttonKlienciPage2 = new QPushButton(frameKlienciPage2);
        buttonKlienciPage2->setObjectName(QStringLiteral("buttonKlienciPage2"));
        buttonKlienciPage2->setGeometry(QRect(0, 0, 251, 91));
        buttonKlienciPage2->setFont(font1);
        buttonKlienciPage2->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonKlienciPage2->raise();
        labelKlienciPage2->raise();
        frameUzytkownicyPage2 = new QFrame(page_2);
        frameUzytkownicyPage2->setObjectName(QStringLiteral("frameUzytkownicyPage2"));
        frameUzytkownicyPage2->setGeometry(QRect(10, 100, 250, 90));
        frameUzytkownicyPage2->setMinimumSize(QSize(250, 90));
        frameUzytkownicyPage2->setMaximumSize(QSize(250, 90));
        frameUzytkownicyPage2->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUzytkownicyPage2->setFrameShape(QFrame::StyledPanel);
        frameUzytkownicyPage2->setFrameShadow(QFrame::Plain);
        buttonUzytkownicyPage2 = new QPushButton(frameUzytkownicyPage2);
        buttonUzytkownicyPage2->setObjectName(QStringLiteral("buttonUzytkownicyPage2"));
        buttonUzytkownicyPage2->setGeometry(QRect(0, 0, 251, 91));
        buttonUzytkownicyPage2->setFont(font1);
        buttonUzytkownicyPage2->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        labelUzytkownicyPage2 = new QLabel(frameUzytkownicyPage2);
        labelUzytkownicyPage2->setObjectName(QStringLiteral("labelUzytkownicyPage2"));
        labelUzytkownicyPage2->setGeometry(QRect(20, 10, 70, 74));
        labelUzytkownicyPage2->setMinimumSize(QSize(70, 74));
        labelUzytkownicyPage2->setMaximumSize(QSize(70, 74));
        labelUzytkownicyPage2->setStyleSheet(QLatin1String("image:url(:/Images/Images/user.png);\n"
"background:transparent;"));
        labelWitajImiePage2 = new QLabel(page_2);
        labelWitajImiePage2->setObjectName(QStringLiteral("labelWitajImiePage2"));
        labelWitajImiePage2->setEnabled(true);
        labelWitajImiePage2->setGeometry(QRect(660, 10, 181, 41));
        labelWitajImiePage2->setFont(font);
        labelWitajImiePage2->setAutoFillBackground(false);
        labelWitajImiePage2->setStyleSheet(QStringLiteral("color: white;"));
        labelWitajImiePage2->setFrameShadow(QFrame::Plain);
        labelWitajImiePage2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 180, 231, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Constantia"));
        font4.setPointSize(14);
        label_6->setFont(font4);
        label_6->setStyleSheet(QLatin1String("background:transparent;\n"
"color:white;\n"
""));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setAlignment(Qt::AlignCenter);
        buttonExitPage2 = new QPushButton(page_2);
        buttonExitPage2->setObjectName(QStringLiteral("buttonExitPage2"));
        buttonExitPage2->setGeometry(QRect(720, 440, 141, 41));
        buttonExitPage2->setFont(font2);
        buttonExitPage2->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExitPage2->setFlat(true);
        stackedWidget->addWidget(page_2);

        retranslateUi(Administrator);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QDialog *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Dialog", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelWitajImiePage0->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        labelWitajImiePage0->setText(QApplication::translate("Administrator", "Witaj", 0));
        buttonUzytkownicyPage0->setText(QApplication::translate("Administrator", "               U\305\274ytkownicy", 0));
        label->setText(QString());
        label_2->setText(QString());
        buttonKlienciPage0->setText(QApplication::translate("Administrator", "       Klienci", 0));
        buttonExit->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        buttonUzytkownicyPage1->setText(QApplication::translate("Administrator", "               U\305\274ytkownicy", 0));
        labelUzytkownicyPage1->setText(QString());
        labelKlienciPage1->setText(QString());
        buttonKlienciPage1->setText(QApplication::translate("Administrator", "       Klienci", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelWitajImiePage1->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        labelWitajImiePage1->setText(QApplication::translate("Administrator", "Witaj", 0));
        buttonDodajUzytkownika->setText(QApplication::translate("Administrator", "             Dodaj u\305\274ytkownika", 0));
        labelDodajUzytkownika->setText(QString());
        buttonEdytujUzytkownika->setText(QApplication::translate("Administrator", "              Edytuj u\305\274ytkownika", 0));
        labelEdytujUzytkownika->setText(QString());
        buttonUsunUzytkownika->setText(QApplication::translate("Administrator", "             Usu\305\204 u\305\274ytkownika", 0));
        labelKlienciPage1_2->setText(QString());
        buttonExit_2->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        buttonEdytujKlienta->setText(QApplication::translate("Administrator", "              Edytuj dane klienta", 0));
        labelEdytujKlienta->setText(QString());
        buttonUsunKlienta->setText(QApplication::translate("Administrator", "   Usu\305\204 klienta", 0));
        label_14->setText(QString());
        buttonDodajKlienta->setText(QApplication::translate("Administrator", "    Dodaj klienta", 0));
        label_13->setText(QString());
        labelKlienciPage2->setText(QString());
        buttonKlienciPage2->setText(QApplication::translate("Administrator", "       Klienci", 0));
        buttonUzytkownicyPage2->setText(QApplication::translate("Administrator", "               U\305\274ytkownicy", 0));
        labelUzytkownicyPage2->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        labelWitajImiePage2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        labelWitajImiePage2->setText(QApplication::translate("Administrator", "Witaj", 0));
        label_6->setText(QString());
        buttonExitPage2->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
