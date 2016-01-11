/********************************************************************************
** Form generated from reading UI file 'formularzdodajprodukt.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARZDODAJPRODUKT_H
#define UI_FORMULARZDODAJPRODUKT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularzDodajProdukt
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QLabel *labelNazwa;
    QLabel *labelFormat;
    QLabel *labelZadruk;
    QLabel *labelKolor;
    QLabel *labelIloscStron;
    QLabel *labelGramatura;
    QLineEdit *lineFormat;
    QLineEdit *lineGramatura;
    QLineEdit *lineIloscStron;
    QLineEdit *lineKolor;
    QLineEdit *lineNazwa;
    QLineEdit *lineZadruk;
    QLabel *labelFormatWymagane;
    QLabel *labelGramaturaWymagane;
    QLabel *labelIloscStronWymagane;
    QLabel *labelKolorWymagane;
    QLabel *labelNazwaWymagane;
    QLabel *labelZadrukWymagane;

    void setupUi(QDialog *FormularzDodajProdukt)
    {
        if (FormularzDodajProdukt->objectName().isEmpty())
            FormularzDodajProdukt->setObjectName(QStringLiteral("FormularzDodajProdukt"));
        FormularzDodajProdukt->resize(400, 300);
        layoutWidget = new QWidget(FormularzDodajProdukt);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 250, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonOK = new QPushButton(layoutWidget);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        horizontalLayout_2->addWidget(buttonOK);

        buttonCancel = new QPushButton(layoutWidget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        labelNazwa = new QLabel(FormularzDodajProdukt);
        labelNazwa->setObjectName(QStringLiteral("labelNazwa"));
        labelNazwa->setGeometry(QRect(50, 20, 47, 13));
        labelFormat = new QLabel(FormularzDodajProdukt);
        labelFormat->setObjectName(QStringLiteral("labelFormat"));
        labelFormat->setGeometry(QRect(50, 60, 61, 16));
        labelZadruk = new QLabel(FormularzDodajProdukt);
        labelZadruk->setObjectName(QStringLiteral("labelZadruk"));
        labelZadruk->setGeometry(QRect(50, 100, 51, 16));
        labelKolor = new QLabel(FormularzDodajProdukt);
        labelKolor->setObjectName(QStringLiteral("labelKolor"));
        labelKolor->setGeometry(QRect(50, 140, 47, 13));
        labelIloscStron = new QLabel(FormularzDodajProdukt);
        labelIloscStron->setObjectName(QStringLiteral("labelIloscStron"));
        labelIloscStron->setGeometry(QRect(50, 180, 47, 13));
        labelGramatura = new QLabel(FormularzDodajProdukt);
        labelGramatura->setObjectName(QStringLiteral("labelGramatura"));
        labelGramatura->setGeometry(QRect(50, 220, 47, 13));
        lineFormat = new QLineEdit(FormularzDodajProdukt);
        lineFormat->setObjectName(QStringLiteral("lineFormat"));
        lineFormat->setGeometry(QRect(110, 20, 113, 20));
        lineGramatura = new QLineEdit(FormularzDodajProdukt);
        lineGramatura->setObjectName(QStringLiteral("lineGramatura"));
        lineGramatura->setGeometry(QRect(110, 60, 113, 20));
        lineIloscStron = new QLineEdit(FormularzDodajProdukt);
        lineIloscStron->setObjectName(QStringLiteral("lineIloscStron"));
        lineIloscStron->setGeometry(QRect(110, 100, 113, 20));
        lineKolor = new QLineEdit(FormularzDodajProdukt);
        lineKolor->setObjectName(QStringLiteral("lineKolor"));
        lineKolor->setGeometry(QRect(110, 140, 113, 20));
        lineNazwa = new QLineEdit(FormularzDodajProdukt);
        lineNazwa->setObjectName(QStringLiteral("lineNazwa"));
        lineNazwa->setGeometry(QRect(110, 180, 113, 20));
        lineZadruk = new QLineEdit(FormularzDodajProdukt);
        lineZadruk->setObjectName(QStringLiteral("lineZadruk"));
        lineZadruk->setGeometry(QRect(110, 220, 113, 20));
        labelFormatWymagane = new QLabel(FormularzDodajProdukt);
        labelFormatWymagane->setObjectName(QStringLiteral("labelFormatWymagane"));
        labelFormatWymagane->setGeometry(QRect(250, 20, 111, 21));
        labelGramaturaWymagane = new QLabel(FormularzDodajProdukt);
        labelGramaturaWymagane->setObjectName(QStringLiteral("labelGramaturaWymagane"));
        labelGramaturaWymagane->setGeometry(QRect(250, 60, 111, 21));
        labelIloscStronWymagane = new QLabel(FormularzDodajProdukt);
        labelIloscStronWymagane->setObjectName(QStringLiteral("labelIloscStronWymagane"));
        labelIloscStronWymagane->setGeometry(QRect(240, 100, 111, 21));
        labelKolorWymagane = new QLabel(FormularzDodajProdukt);
        labelKolorWymagane->setObjectName(QStringLiteral("labelKolorWymagane"));
        labelKolorWymagane->setGeometry(QRect(246, 140, 111, 20));
        labelNazwaWymagane = new QLabel(FormularzDodajProdukt);
        labelNazwaWymagane->setObjectName(QStringLiteral("labelNazwaWymagane"));
        labelNazwaWymagane->setGeometry(QRect(246, 180, 111, 20));
        labelZadrukWymagane = new QLabel(FormularzDodajProdukt);
        labelZadrukWymagane->setObjectName(QStringLiteral("labelZadrukWymagane"));
        labelZadrukWymagane->setGeometry(QRect(246, 220, 121, 20));

        retranslateUi(FormularzDodajProdukt);

        QMetaObject::connectSlotsByName(FormularzDodajProdukt);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajProdukt)
    {
        FormularzDodajProdukt->setWindowTitle(QApplication::translate("FormularzDodajProdukt", "Dialog", 0));
        buttonOK->setText(QApplication::translate("FormularzDodajProdukt", "OK", 0));
        buttonCancel->setText(QApplication::translate("FormularzDodajProdukt", "Cancel", 0));
        labelNazwa->setText(QApplication::translate("FormularzDodajProdukt", "Format", 0));
        labelFormat->setText(QApplication::translate("FormularzDodajProdukt", "Gramatura", 0));
        labelZadruk->setText(QApplication::translate("FormularzDodajProdukt", "Ilosc Stron", 0));
        labelKolor->setText(QApplication::translate("FormularzDodajProdukt", "Kolor", 0));
        labelIloscStron->setText(QApplication::translate("FormularzDodajProdukt", "Nazwa", 0));
        labelGramatura->setText(QApplication::translate("FormularzDodajProdukt", "Zadruk", 0));
        labelFormatWymagane->setText(QString());
        labelGramaturaWymagane->setText(QString());
        labelIloscStronWymagane->setText(QString());
        labelKolorWymagane->setText(QString());
        labelNazwaWymagane->setText(QString());
        labelZadrukWymagane->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajProdukt: public Ui_FormularzDodajProdukt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJPRODUKT_H
