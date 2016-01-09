/********************************************************************************
** Form generated from reading UI file 'formularzdodajklienta.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARZDODAJKLIENTA_H
#define UI_FORMULARZDODAJKLIENTA_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularzDodajKlienta
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelImie;
    QLabel *labelNazwisko;
    QLabel *labelUlica;
    QLabel *labelNrDomu;
    QLabel *labelNrMieszkania;
    QLabel *labelMiasto;
    QLabel *labelKod;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineImie;
    QLineEdit *lineNazwisko;
    QLineEdit *lineUlica;
    QLineEdit *lineNrDomu;
    QLineEdit *lineNrMieszkania;
    QLineEdit *lineMiasto;
    QLineEdit *lineKod;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelImieWymagane;
    QLabel *labelNazwiskoWymagane;
    QLabel *labelUlicaWymagane;
    QLabel *labelNrDomuWymagane;
    QLabel *labelNrMieszkaniaWymagane;
    QLabel *labelMiastoWymagane;
    QLabel *labelKodWymagane;

    void setupUi(QDialog *FormularzDodajKlienta)
    {
        if (FormularzDodajKlienta->objectName().isEmpty())
            FormularzDodajKlienta->setObjectName(QStringLiteral("FormularzDodajKlienta"));
        FormularzDodajKlienta->resize(526, 389);
        layoutWidget = new QWidget(FormularzDodajKlienta);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 340, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonOK = new QPushButton(layoutWidget);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        horizontalLayout_2->addWidget(buttonOK);

        buttonCancel = new QPushButton(layoutWidget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        layoutWidget1 = new QWidget(FormularzDodajKlienta);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 465, 352));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelImie = new QLabel(layoutWidget1);
        labelImie->setObjectName(QStringLiteral("labelImie"));

        verticalLayout_2->addWidget(labelImie);

        labelNazwisko = new QLabel(layoutWidget1);
        labelNazwisko->setObjectName(QStringLiteral("labelNazwisko"));

        verticalLayout_2->addWidget(labelNazwisko);

        labelUlica = new QLabel(layoutWidget1);
        labelUlica->setObjectName(QStringLiteral("labelUlica"));

        verticalLayout_2->addWidget(labelUlica);

        labelNrDomu = new QLabel(layoutWidget1);
        labelNrDomu->setObjectName(QStringLiteral("labelNrDomu"));

        verticalLayout_2->addWidget(labelNrDomu);

        labelNrMieszkania = new QLabel(layoutWidget1);
        labelNrMieszkania->setObjectName(QStringLiteral("labelNrMieszkania"));

        verticalLayout_2->addWidget(labelNrMieszkania);

        labelMiasto = new QLabel(layoutWidget1);
        labelMiasto->setObjectName(QStringLiteral("labelMiasto"));

        verticalLayout_2->addWidget(labelMiasto);

        labelKod = new QLabel(layoutWidget1);
        labelKod->setObjectName(QStringLiteral("labelKod"));

        verticalLayout_2->addWidget(labelKod);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineImie = new QLineEdit(layoutWidget1);
        lineImie->setObjectName(QStringLiteral("lineImie"));
        lineImie->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineImie);

        lineNazwisko = new QLineEdit(layoutWidget1);
        lineNazwisko->setObjectName(QStringLiteral("lineNazwisko"));
        lineNazwisko->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineNazwisko);

        lineUlica = new QLineEdit(layoutWidget1);
        lineUlica->setObjectName(QStringLiteral("lineUlica"));
        lineUlica->setMinimumSize(QSize(200, 25));
        lineUlica->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_4->addWidget(lineUlica);

        lineNrDomu = new QLineEdit(layoutWidget1);
        lineNrDomu->setObjectName(QStringLiteral("lineNrDomu"));
        lineNrDomu->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineNrDomu);

        lineNrMieszkania = new QLineEdit(layoutWidget1);
        lineNrMieszkania->setObjectName(QStringLiteral("lineNrMieszkania"));
        lineNrMieszkania->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineNrMieszkania);

        lineMiasto = new QLineEdit(layoutWidget1);
        lineMiasto->setObjectName(QStringLiteral("lineMiasto"));
        lineMiasto->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineMiasto);

        lineKod = new QLineEdit(layoutWidget1);
        lineKod->setObjectName(QStringLiteral("lineKod"));
        lineKod->setMinimumSize(QSize(200, 25));

        verticalLayout_4->addWidget(lineKod);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelImieWymagane = new QLabel(layoutWidget1);
        labelImieWymagane->setObjectName(QStringLiteral("labelImieWymagane"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelImieWymagane->sizePolicy().hasHeightForWidth());
        labelImieWymagane->setSizePolicy(sizePolicy);
        labelImieWymagane->setMinimumSize(QSize(0, 0));
        labelImieWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelImieWymagane);

        labelNazwiskoWymagane = new QLabel(layoutWidget1);
        labelNazwiskoWymagane->setObjectName(QStringLiteral("labelNazwiskoWymagane"));
        sizePolicy.setHeightForWidth(labelNazwiskoWymagane->sizePolicy().hasHeightForWidth());
        labelNazwiskoWymagane->setSizePolicy(sizePolicy);
        labelNazwiskoWymagane->setMinimumSize(QSize(0, 0));
        labelNazwiskoWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelNazwiskoWymagane);

        labelUlicaWymagane = new QLabel(layoutWidget1);
        labelUlicaWymagane->setObjectName(QStringLiteral("labelUlicaWymagane"));
        sizePolicy.setHeightForWidth(labelUlicaWymagane->sizePolicy().hasHeightForWidth());
        labelUlicaWymagane->setSizePolicy(sizePolicy);
        labelUlicaWymagane->setMinimumSize(QSize(0, 0));
        labelUlicaWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelUlicaWymagane);

        labelNrDomuWymagane = new QLabel(layoutWidget1);
        labelNrDomuWymagane->setObjectName(QStringLiteral("labelNrDomuWymagane"));
        sizePolicy.setHeightForWidth(labelNrDomuWymagane->sizePolicy().hasHeightForWidth());
        labelNrDomuWymagane->setSizePolicy(sizePolicy);
        labelNrDomuWymagane->setMinimumSize(QSize(0, 0));
        labelNrDomuWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelNrDomuWymagane);

        labelNrMieszkaniaWymagane = new QLabel(layoutWidget1);
        labelNrMieszkaniaWymagane->setObjectName(QStringLiteral("labelNrMieszkaniaWymagane"));
        sizePolicy.setHeightForWidth(labelNrMieszkaniaWymagane->sizePolicy().hasHeightForWidth());
        labelNrMieszkaniaWymagane->setSizePolicy(sizePolicy);
        labelNrMieszkaniaWymagane->setMinimumSize(QSize(0, 0));
        labelNrMieszkaniaWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelNrMieszkaniaWymagane);

        labelMiastoWymagane = new QLabel(layoutWidget1);
        labelMiastoWymagane->setObjectName(QStringLiteral("labelMiastoWymagane"));
        sizePolicy.setHeightForWidth(labelMiastoWymagane->sizePolicy().hasHeightForWidth());
        labelMiastoWymagane->setSizePolicy(sizePolicy);
        labelMiastoWymagane->setMinimumSize(QSize(0, 0));
        labelMiastoWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelMiastoWymagane);

        labelKodWymagane = new QLabel(layoutWidget1);
        labelKodWymagane->setObjectName(QStringLiteral("labelKodWymagane"));
        sizePolicy.setHeightForWidth(labelKodWymagane->sizePolicy().hasHeightForWidth());
        labelKodWymagane->setSizePolicy(sizePolicy);
        labelKodWymagane->setMinimumSize(QSize(0, 0));
        labelKodWymagane->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(labelKodWymagane);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout);


        retranslateUi(FormularzDodajKlienta);

        QMetaObject::connectSlotsByName(FormularzDodajKlienta);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajKlienta)
    {
        FormularzDodajKlienta->setWindowTitle(QApplication::translate("FormularzDodajKlienta", "Dialog", 0));
        buttonOK->setText(QApplication::translate("FormularzDodajKlienta", "OK", 0));
        buttonCancel->setText(QApplication::translate("FormularzDodajKlienta", "Cancel", 0));
        labelImie->setText(QApplication::translate("FormularzDodajKlienta", "Imie", 0));
        labelNazwisko->setText(QApplication::translate("FormularzDodajKlienta", "Nazwisko", 0));
        labelUlica->setText(QApplication::translate("FormularzDodajKlienta", "Ulica zamieszkania", 0));
        labelNrDomu->setText(QApplication::translate("FormularzDodajKlienta", "Numer domu", 0));
        labelNrMieszkania->setText(QApplication::translate("FormularzDodajKlienta", "Numer mieszkania", 0));
        labelMiasto->setText(QApplication::translate("FormularzDodajKlienta", "Miasto", 0));
        labelKod->setText(QApplication::translate("FormularzDodajKlienta", "Kod pocztowy", 0));
        labelImieWymagane->setText(QString());
        labelNazwiskoWymagane->setText(QString());
        labelUlicaWymagane->setText(QString());
        labelNrDomuWymagane->setText(QString());
        labelNrMieszkaniaWymagane->setText(QString());
        labelMiastoWymagane->setText(QString());
        labelKodWymagane->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajKlienta: public Ui_FormularzDodajKlienta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJKLIENTA_H
