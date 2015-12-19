/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
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
    QFrame *frameUzytkownicyPage0;
    QPushButton *buttonUzytkownicyPage0;
    QLabel *labelUzytkownicyPage0;
    QFrame *frameKlienciPage0;
    QLabel *labelKlienciPage0;
    QPushButton *buttonKlienciPage0;
    QPushButton *buttonExitPage0;
    QFrame *frameProduktyPage0;
    QPushButton *buttonProduktyPage0;
    QLabel *labelProduktyPage0;
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
    QLabel *labelUsunUzytkownika;
    QPushButton *buttonExitPage1;
    QFrame *frameProduktyPage1;
    QLabel *labelProduktyPage1;
    QPushButton *buttonProduktyPage1;
    QWidget *page_2;
    QFrame *frameEdytujKlienta;
    QPushButton *buttonEdytujKlienta;
    QLabel *labelEdytujKlienta;
    QFrame *frameUsunKlienta;
    QPushButton *buttonUsunKlienta;
    QLabel *labelUsunKlienta;
    QFrame *frameDodajKlienta;
    QPushButton *buttonDodajKlienta;
    QLabel *labelDodajKlienta;
    QFrame *frameKlienciPage2;
    QLabel *labelKlienciPage2;
    QPushButton *buttonKlienciPage2;
    QFrame *frameUzytkownicyPage2;
    QPushButton *buttonUzytkownicyPage2;
    QLabel *labelUzytkownicyPage2;
    QLabel *labelWitajImiePage2;
    QPushButton *buttonExitPage2;
    QFrame *frameProduktyPage2;
    QLabel *labelProduktyPage1_2;
    QPushButton *buttonProduktyPage2;
    QWidget *page3;
    QLabel *labelWitajImiePage3;
    QPushButton *buttonExitPage3;
    QFrame *frameUsunProdukt;
    QPushButton *buttonUsunProdukt;
    QLabel *labelUsunProdukt;
    QFrame *frameDodajProdukt;
    QPushButton *buttonDodajProdukt;
    QLabel *labelDodajProdukt;
    QFrame *frameEdytujProdukt;
    QPushButton *buttonEdytujProdukt;
    QLabel *labelEdytujProdukt;
    QFrame *frameUzytkownicyPage3;
    QLabel *labelUzytkownicyPage3;
    QPushButton *buttonUzytkownicyPage3;
    QFrame *frameProduktyPage3;
    QLabel *labelProduktyPage3;
    QPushButton *buttonProduktyPage3;
    QFrame *frameKlienciPage3;
    QLabel *labelKlienciPage3;
    QPushButton *buttonKlienciPage3;

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
        frameUzytkownicyPage0 = new QFrame(page_0);
        frameUzytkownicyPage0->setObjectName(QStringLiteral("frameUzytkownicyPage0"));
        frameUzytkownicyPage0->setGeometry(QRect(10, 100, 250, 90));
        frameUzytkownicyPage0->setMinimumSize(QSize(250, 90));
        frameUzytkownicyPage0->setMaximumSize(QSize(250, 90));
        frameUzytkownicyPage0->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUzytkownicyPage0->setFrameShape(QFrame::StyledPanel);
        frameUzytkownicyPage0->setFrameShadow(QFrame::Plain);
        buttonUzytkownicyPage0 = new QPushButton(frameUzytkownicyPage0);
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
        labelUzytkownicyPage0 = new QLabel(frameUzytkownicyPage0);
        labelUzytkownicyPage0->setObjectName(QStringLiteral("labelUzytkownicyPage0"));
        labelUzytkownicyPage0->setGeometry(QRect(20, 10, 70, 74));
        labelUzytkownicyPage0->setMinimumSize(QSize(70, 74));
        labelUzytkownicyPage0->setMaximumSize(QSize(70, 74));
        labelUzytkownicyPage0->setStyleSheet(QLatin1String("image:url(:/Images/Images/user.png);\n"
"background:transparent;"));
        frameKlienciPage0 = new QFrame(page_0);
        frameKlienciPage0->setObjectName(QStringLiteral("frameKlienciPage0"));
        frameKlienciPage0->setGeometry(QRect(10, 200, 250, 90));
        frameKlienciPage0->setMinimumSize(QSize(250, 90));
        frameKlienciPage0->setMaximumSize(QSize(250, 90));
        frameKlienciPage0->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameKlienciPage0->setFrameShape(QFrame::StyledPanel);
        frameKlienciPage0->setFrameShadow(QFrame::Sunken);
        labelKlienciPage0 = new QLabel(frameKlienciPage0);
        labelKlienciPage0->setObjectName(QStringLiteral("labelKlienciPage0"));
        labelKlienciPage0->setGeometry(QRect(20, 10, 70, 74));
        labelKlienciPage0->setMinimumSize(QSize(70, 74));
        labelKlienciPage0->setMaximumSize(QSize(70, 74));
        labelKlienciPage0->setStyleSheet(QLatin1String("image: url(:/Images/Images/clients.png);\n"
"background:transparent;"));
        buttonKlienciPage0 = new QPushButton(frameKlienciPage0);
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
        labelKlienciPage0->raise();
        buttonExitPage0 = new QPushButton(page_0);
        buttonExitPage0->setObjectName(QStringLiteral("buttonExitPage0"));
        buttonExitPage0->setGeometry(QRect(720, 440, 141, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Constantia"));
        font2.setPointSize(10);
        buttonExitPage0->setFont(font2);
        buttonExitPage0->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExitPage0->setFlat(true);
        frameProduktyPage0 = new QFrame(page_0);
        frameProduktyPage0->setObjectName(QStringLiteral("frameProduktyPage0"));
        frameProduktyPage0->setGeometry(QRect(10, 300, 250, 90));
        frameProduktyPage0->setMinimumSize(QSize(250, 90));
        frameProduktyPage0->setMaximumSize(QSize(250, 90));
        frameProduktyPage0->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameProduktyPage0->setFrameShape(QFrame::StyledPanel);
        frameProduktyPage0->setFrameShadow(QFrame::Plain);
        buttonProduktyPage0 = new QPushButton(frameProduktyPage0);
        buttonProduktyPage0->setObjectName(QStringLiteral("buttonProduktyPage0"));
        buttonProduktyPage0->setGeometry(QRect(0, 0, 251, 91));
        buttonProduktyPage0->setFont(font1);
        buttonProduktyPage0->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        labelProduktyPage0 = new QLabel(frameProduktyPage0);
        labelProduktyPage0->setObjectName(QStringLiteral("labelProduktyPage0"));
        labelProduktyPage0->setGeometry(QRect(20, 10, 70, 74));
        labelProduktyPage0->setMinimumSize(QSize(70, 74));
        labelProduktyPage0->setMaximumSize(QSize(70, 74));
        labelProduktyPage0->setStyleSheet(QLatin1String("color:white;\n"
"background:transparent;"));
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
        labelUsunUzytkownika = new QLabel(frameUsunUzytkownika);
        labelUsunUzytkownika->setObjectName(QStringLiteral("labelUsunUzytkownika"));
        labelUsunUzytkownika->setGeometry(QRect(17, 6, 70, 70));
        labelUsunUzytkownika->setMinimumSize(QSize(70, 70));
        labelUsunUzytkownika->setMaximumSize(QSize(70, 70));
        labelUsunUzytkownika->setStyleSheet(QStringLiteral("background:transparent;"));
        labelUsunUzytkownika->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/minus.png")));
        buttonExitPage1 = new QPushButton(page_1);
        buttonExitPage1->setObjectName(QStringLiteral("buttonExitPage1"));
        buttonExitPage1->setGeometry(QRect(720, 440, 141, 41));
        buttonExitPage1->setFont(font2);
        buttonExitPage1->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExitPage1->setFlat(true);
        frameProduktyPage1 = new QFrame(page_1);
        frameProduktyPage1->setObjectName(QStringLiteral("frameProduktyPage1"));
        frameProduktyPage1->setGeometry(QRect(10, 300, 250, 90));
        frameProduktyPage1->setMinimumSize(QSize(250, 90));
        frameProduktyPage1->setMaximumSize(QSize(250, 90));
        frameProduktyPage1->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameProduktyPage1->setFrameShape(QFrame::StyledPanel);
        frameProduktyPage1->setFrameShadow(QFrame::Plain);
        labelProduktyPage1 = new QLabel(frameProduktyPage1);
        labelProduktyPage1->setObjectName(QStringLiteral("labelProduktyPage1"));
        labelProduktyPage1->setGeometry(QRect(20, 10, 70, 74));
        labelProduktyPage1->setMinimumSize(QSize(70, 74));
        labelProduktyPage1->setMaximumSize(QSize(70, 74));
        labelProduktyPage1->setStyleSheet(QStringLiteral("color:white;"));
        buttonProduktyPage1 = new QPushButton(frameProduktyPage1);
        buttonProduktyPage1->setObjectName(QStringLiteral("buttonProduktyPage1"));
        buttonProduktyPage1->setGeometry(QRect(0, 0, 251, 91));
        buttonProduktyPage1->setFont(font1);
        buttonProduktyPage1->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
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
        labelUsunKlienta = new QLabel(frameUsunKlienta);
        labelUsunKlienta->setObjectName(QStringLiteral("labelUsunKlienta"));
        labelUsunKlienta->setGeometry(QRect(17, 6, 70, 70));
        labelUsunKlienta->setMinimumSize(QSize(70, 70));
        labelUsunKlienta->setMaximumSize(QSize(70, 70));
        labelUsunKlienta->setStyleSheet(QStringLiteral("background:transparent;"));
        labelUsunKlienta->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/minus.png")));
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
        labelDodajKlienta = new QLabel(frameDodajKlienta);
        labelDodajKlienta->setObjectName(QStringLiteral("labelDodajKlienta"));
        labelDodajKlienta->setGeometry(QRect(7, 6, 70, 70));
        labelDodajKlienta->setMinimumSize(QSize(70, 70));
        labelDodajKlienta->setMaximumSize(QSize(70, 70));
        labelDodajKlienta->setStyleSheet(QStringLiteral("background:transparent;"));
        labelDodajKlienta->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/plus.png")));
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
        frameProduktyPage2 = new QFrame(page_2);
        frameProduktyPage2->setObjectName(QStringLiteral("frameProduktyPage2"));
        frameProduktyPage2->setGeometry(QRect(10, 300, 250, 90));
        frameProduktyPage2->setMinimumSize(QSize(250, 90));
        frameProduktyPage2->setMaximumSize(QSize(250, 90));
        frameProduktyPage2->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameProduktyPage2->setFrameShape(QFrame::StyledPanel);
        frameProduktyPage2->setFrameShadow(QFrame::Plain);
        labelProduktyPage1_2 = new QLabel(frameProduktyPage2);
        labelProduktyPage1_2->setObjectName(QStringLiteral("labelProduktyPage1_2"));
        labelProduktyPage1_2->setGeometry(QRect(20, 10, 70, 74));
        labelProduktyPage1_2->setMinimumSize(QSize(70, 74));
        labelProduktyPage1_2->setMaximumSize(QSize(70, 74));
        labelProduktyPage1_2->setStyleSheet(QStringLiteral("color:white;"));
        buttonProduktyPage2 = new QPushButton(frameProduktyPage2);
        buttonProduktyPage2->setObjectName(QStringLiteral("buttonProduktyPage2"));
        buttonProduktyPage2->setGeometry(QRect(0, 0, 251, 91));
        buttonProduktyPage2->setFont(font1);
        buttonProduktyPage2->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        stackedWidget->addWidget(page_2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        labelWitajImiePage3 = new QLabel(page3);
        labelWitajImiePage3->setObjectName(QStringLiteral("labelWitajImiePage3"));
        labelWitajImiePage3->setEnabled(true);
        labelWitajImiePage3->setGeometry(QRect(660, 10, 181, 41));
        labelWitajImiePage3->setFont(font);
        labelWitajImiePage3->setAutoFillBackground(false);
        labelWitajImiePage3->setStyleSheet(QStringLiteral("color: white;"));
        labelWitajImiePage3->setFrameShadow(QFrame::Plain);
        labelWitajImiePage3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        buttonExitPage3 = new QPushButton(page3);
        buttonExitPage3->setObjectName(QStringLiteral("buttonExitPage3"));
        buttonExitPage3->setGeometry(QRect(720, 440, 141, 41));
        buttonExitPage3->setFont(font2);
        buttonExitPage3->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        buttonExitPage3->setFlat(true);
        frameUsunProdukt = new QFrame(page3);
        frameUsunProdukt->setObjectName(QStringLiteral("frameUsunProdukt"));
        frameUsunProdukt->setGeometry(QRect(600, 280, 271, 81));
        frameUsunProdukt->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUsunProdukt->setFrameShape(QFrame::StyledPanel);
        frameUsunProdukt->setFrameShadow(QFrame::Plain);
        buttonUsunProdukt = new QPushButton(frameUsunProdukt);
        buttonUsunProdukt->setObjectName(QStringLiteral("buttonUsunProdukt"));
        buttonUsunProdukt->setGeometry(QRect(10, 10, 251, 61));
        buttonUsunProdukt->setFont(font3);
        buttonUsunProdukt->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonUsunProdukt->setFlat(false);
        labelUsunProdukt = new QLabel(frameUsunProdukt);
        labelUsunProdukt->setObjectName(QStringLiteral("labelUsunProdukt"));
        labelUsunProdukt->setGeometry(QRect(17, 6, 70, 70));
        labelUsunProdukt->setMinimumSize(QSize(70, 70));
        labelUsunProdukt->setMaximumSize(QSize(70, 70));
        labelUsunProdukt->setStyleSheet(QStringLiteral("background:transparent;"));
        labelUsunProdukt->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/minus.png")));
        frameDodajProdukt = new QFrame(page3);
        frameDodajProdukt->setObjectName(QStringLiteral("frameDodajProdukt"));
        frameDodajProdukt->setGeometry(QRect(600, 100, 271, 81));
        frameDodajProdukt->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameDodajProdukt->setFrameShape(QFrame::StyledPanel);
        frameDodajProdukt->setFrameShadow(QFrame::Plain);
        buttonDodajProdukt = new QPushButton(frameDodajProdukt);
        buttonDodajProdukt->setObjectName(QStringLiteral("buttonDodajProdukt"));
        buttonDodajProdukt->setGeometry(QRect(10, 5, 251, 61));
        buttonDodajProdukt->setFont(font3);
        buttonDodajProdukt->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonDodajProdukt->setFlat(false);
        labelDodajProdukt = new QLabel(frameDodajProdukt);
        labelDodajProdukt->setObjectName(QStringLiteral("labelDodajProdukt"));
        labelDodajProdukt->setGeometry(QRect(7, 6, 70, 70));
        labelDodajProdukt->setMinimumSize(QSize(70, 70));
        labelDodajProdukt->setMaximumSize(QSize(70, 70));
        labelDodajProdukt->setStyleSheet(QStringLiteral("background:transparent;"));
        labelDodajProdukt->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/plus.png")));
        frameEdytujProdukt = new QFrame(page3);
        frameEdytujProdukt->setObjectName(QStringLiteral("frameEdytujProdukt"));
        frameEdytujProdukt->setGeometry(QRect(600, 190, 271, 81));
        frameEdytujProdukt->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameEdytujProdukt->setFrameShape(QFrame::StyledPanel);
        frameEdytujProdukt->setFrameShadow(QFrame::Plain);
        buttonEdytujProdukt = new QPushButton(frameEdytujProdukt);
        buttonEdytujProdukt->setObjectName(QStringLiteral("buttonEdytujProdukt"));
        buttonEdytujProdukt->setGeometry(QRect(10, 10, 251, 61));
        buttonEdytujProdukt->setFont(font3);
        buttonEdytujProdukt->setStyleSheet(QLatin1String("border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;"));
        buttonEdytujProdukt->setFlat(false);
        labelEdytujProdukt = new QLabel(frameEdytujProdukt);
        labelEdytujProdukt->setObjectName(QStringLiteral("labelEdytujProdukt"));
        labelEdytujProdukt->setGeometry(QRect(17, 7, 70, 70));
        labelEdytujProdukt->setMinimumSize(QSize(70, 70));
        labelEdytujProdukt->setMaximumSize(QSize(70, 70));
        labelEdytujProdukt->setStyleSheet(QStringLiteral("background:transparent;"));
        labelEdytujProdukt->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/edit.png")));
        frameUzytkownicyPage3 = new QFrame(page3);
        frameUzytkownicyPage3->setObjectName(QStringLiteral("frameUzytkownicyPage3"));
        frameUzytkownicyPage3->setGeometry(QRect(10, 100, 250, 90));
        frameUzytkownicyPage3->setMinimumSize(QSize(250, 90));
        frameUzytkownicyPage3->setMaximumSize(QSize(250, 90));
        frameUzytkownicyPage3->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameUzytkownicyPage3->setFrameShape(QFrame::StyledPanel);
        frameUzytkownicyPage3->setFrameShadow(QFrame::Plain);
        labelUzytkownicyPage3 = new QLabel(frameUzytkownicyPage3);
        labelUzytkownicyPage3->setObjectName(QStringLiteral("labelUzytkownicyPage3"));
        labelUzytkownicyPage3->setGeometry(QRect(20, 10, 70, 74));
        labelUzytkownicyPage3->setMinimumSize(QSize(70, 74));
        labelUzytkownicyPage3->setMaximumSize(QSize(70, 74));
        labelUzytkownicyPage3->setStyleSheet(QLatin1String("image:url(:/Images/Images/user.png);\n"
"background:transparent;"));
        buttonUzytkownicyPage3 = new QPushButton(frameUzytkownicyPage3);
        buttonUzytkownicyPage3->setObjectName(QStringLiteral("buttonUzytkownicyPage3"));
        buttonUzytkownicyPage3->setGeometry(QRect(0, 0, 251, 91));
        buttonUzytkownicyPage3->setFont(font1);
        buttonUzytkownicyPage3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        frameProduktyPage3 = new QFrame(page3);
        frameProduktyPage3->setObjectName(QStringLiteral("frameProduktyPage3"));
        frameProduktyPage3->setGeometry(QRect(10, 300, 250, 90));
        frameProduktyPage3->setMinimumSize(QSize(250, 90));
        frameProduktyPage3->setMaximumSize(QSize(250, 90));
        frameProduktyPage3->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameProduktyPage3->setFrameShape(QFrame::StyledPanel);
        frameProduktyPage3->setFrameShadow(QFrame::Plain);
        labelProduktyPage3 = new QLabel(frameProduktyPage3);
        labelProduktyPage3->setObjectName(QStringLiteral("labelProduktyPage3"));
        labelProduktyPage3->setGeometry(QRect(20, 10, 70, 74));
        labelProduktyPage3->setMinimumSize(QSize(70, 74));
        labelProduktyPage3->setMaximumSize(QSize(70, 74));
        labelProduktyPage3->setStyleSheet(QStringLiteral("color:white;"));
        buttonProduktyPage3 = new QPushButton(frameProduktyPage3);
        buttonProduktyPage3->setObjectName(QStringLiteral("buttonProduktyPage3"));
        buttonProduktyPage3->setGeometry(QRect(0, 0, 251, 91));
        buttonProduktyPage3->setFont(font1);
        buttonProduktyPage3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        frameKlienciPage3 = new QFrame(page3);
        frameKlienciPage3->setObjectName(QStringLiteral("frameKlienciPage3"));
        frameKlienciPage3->setGeometry(QRect(10, 200, 250, 90));
        frameKlienciPage3->setMinimumSize(QSize(250, 90));
        frameKlienciPage3->setMaximumSize(QSize(250, 90));
        frameKlienciPage3->setStyleSheet(QLatin1String("QFrame:hover{\n"
"background-color:rgba(255, 255, 255, 20);\n"
"\n"
"}\n"
""));
        frameKlienciPage3->setFrameShape(QFrame::StyledPanel);
        frameKlienciPage3->setFrameShadow(QFrame::Sunken);
        labelKlienciPage3 = new QLabel(frameKlienciPage3);
        labelKlienciPage3->setObjectName(QStringLiteral("labelKlienciPage3"));
        labelKlienciPage3->setGeometry(QRect(20, 10, 70, 74));
        labelKlienciPage3->setMinimumSize(QSize(70, 74));
        labelKlienciPage3->setMaximumSize(QSize(70, 74));
        labelKlienciPage3->setStyleSheet(QLatin1String("image: url(:/Images/Images/clients.png);\n"
"background:transparent;"));
        buttonKlienciPage3 = new QPushButton(frameKlienciPage3);
        buttonKlienciPage3->setObjectName(QStringLiteral("buttonKlienciPage3"));
        buttonKlienciPage3->setGeometry(QRect(0, 0, 251, 91));
        buttonKlienciPage3->setFont(font1);
        buttonKlienciPage3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(255,255,255,40);\n"
"}"));
        stackedWidget->addWidget(page3);

        retranslateUi(Administrator);

        stackedWidget->setCurrentIndex(3);


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
        labelUzytkownicyPage0->setText(QString());
        labelKlienciPage0->setText(QString());
        buttonKlienciPage0->setText(QApplication::translate("Administrator", "       Klienci", 0));
        buttonExitPage0->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        buttonProduktyPage0->setText(QApplication::translate("Administrator", "          Produkty", 0));
        labelProduktyPage0->setText(QApplication::translate("Administrator", "Tu powinno\n"
" byc zdj\304\231cie", 0));
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
        labelUsunUzytkownika->setText(QString());
        buttonExitPage1->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        labelProduktyPage1->setText(QApplication::translate("Administrator", "Tu powinno\n"
" byc zdj\304\231cie", 0));
        buttonProduktyPage1->setText(QApplication::translate("Administrator", "          Produkty", 0));
        buttonEdytujKlienta->setText(QApplication::translate("Administrator", "              Edytuj dane klienta", 0));
        labelEdytujKlienta->setText(QString());
        buttonUsunKlienta->setText(QApplication::translate("Administrator", "   Usu\305\204 klienta", 0));
        labelUsunKlienta->setText(QString());
        buttonDodajKlienta->setText(QApplication::translate("Administrator", "    Dodaj klienta", 0));
        labelDodajKlienta->setText(QString());
        labelKlienciPage2->setText(QString());
        buttonKlienciPage2->setText(QApplication::translate("Administrator", "       Klienci", 0));
        buttonUzytkownicyPage2->setText(QApplication::translate("Administrator", "               U\305\274ytkownicy", 0));
        labelUzytkownicyPage2->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        labelWitajImiePage2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        labelWitajImiePage2->setText(QApplication::translate("Administrator", "Witaj", 0));
        buttonExitPage2->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        labelProduktyPage1_2->setText(QApplication::translate("Administrator", "Tu powinno\n"
" byc zdj\304\231cie", 0));
        buttonProduktyPage2->setText(QApplication::translate("Administrator", "          Produkty", 0));
#ifndef QT_NO_ACCESSIBILITY
        labelWitajImiePage3->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        labelWitajImiePage3->setText(QApplication::translate("Administrator", "Witaj", 0));
        buttonExitPage3->setText(QApplication::translate("Administrator", "Wyj\305\233cie", 0));
        buttonUsunProdukt->setText(QApplication::translate("Administrator", "   Usu\305\204 produkt", 0));
        labelUsunProdukt->setText(QString());
        buttonDodajProdukt->setText(QApplication::translate("Administrator", "    Dodaj produkt", 0));
        labelDodajProdukt->setText(QString());
        buttonEdytujProdukt->setText(QApplication::translate("Administrator", "              Edytuj dane produktu", 0));
        labelEdytujProdukt->setText(QString());
        labelUzytkownicyPage3->setText(QString());
        buttonUzytkownicyPage3->setText(QApplication::translate("Administrator", "               U\305\274ytkownicy", 0));
        labelProduktyPage3->setText(QApplication::translate("Administrator", "Tu powinno\n"
" byc zdj\304\231cie", 0));
        buttonProduktyPage3->setText(QApplication::translate("Administrator", "          Produkty", 0));
        labelKlienciPage3->setText(QString());
        buttonKlienciPage3->setText(QApplication::translate("Administrator", "       Klienci", 0));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
