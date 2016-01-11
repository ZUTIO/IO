/********************************************************************************
** Form generated from reading UI file 'formularzdodajuzytkownika.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARZDODAJUZYTKOWNIKA_H
#define UI_FORMULARZDODAJUZYTKOWNIKA_H

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

class Ui_FormularzDodajUzytkownika
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelUsernameU;
    QLabel *labelHasloU;
    QLabel *labelImieU;
    QLabel *labelNazwiskoU;
    QLabel *labelUlicaU;
    QLabel *labelPeselU;
    QLabel *labelMiastoU;
    QLabel *labelKodU;
    QLabel *labelEmailU;
    QLabel *labelStanowiskoU;
    QLabel *labelTelefonU;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineUsernameU;
    QLineEdit *lineHasloU;
    QLineEdit *lineImieU;
    QLineEdit *lineNazwiskoU;
    QLineEdit *lineUlicaU;
    QLineEdit *lineNrMieszkania_2;
    QLineEdit *lineMiastoU;
    QLineEdit *lineKodU;
    QLineEdit *lineEmailU;
    QLineEdit *lineStanowiskoU;
    QLineEdit *lineTelefonU;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelUsernameWymaganeU;
    QLabel *labelHasloWymaganeU;
    QLabel *labelImieWymaganeU;
    QLabel *labelNazwiskoWymaganeU;
    QLabel *labelUlicaWymaganeU;
    QLabel *labelPeselWymaganeU;
    QLabel *labelMiastoWymaganeU;
    QLabel *labelKodWymaganeU;
    QLabel *labelEmailWymaganeU;
    QLabel *labelStanowiskoWymaganeU;
    QLabel *labelTelefonWymaganeU;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *buttonOKU;
    QPushButton *buttonCancel_3;

    void setupUi(QDialog *FormularzDodajUzytkownika)
    {
        if (FormularzDodajUzytkownika->objectName().isEmpty())
            FormularzDodajUzytkownika->setObjectName(QStringLiteral("FormularzDodajUzytkownika"));
        FormularzDodajUzytkownika->resize(521, 461);
        layoutWidget_2 = new QWidget(FormularzDodajUzytkownika);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 20, 465, 352));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelUsernameU = new QLabel(layoutWidget_2);
        labelUsernameU->setObjectName(QStringLiteral("labelUsernameU"));

        verticalLayout_5->addWidget(labelUsernameU);

        labelHasloU = new QLabel(layoutWidget_2);
        labelHasloU->setObjectName(QStringLiteral("labelHasloU"));

        verticalLayout_5->addWidget(labelHasloU);

        labelImieU = new QLabel(layoutWidget_2);
        labelImieU->setObjectName(QStringLiteral("labelImieU"));

        verticalLayout_5->addWidget(labelImieU);

        labelNazwiskoU = new QLabel(layoutWidget_2);
        labelNazwiskoU->setObjectName(QStringLiteral("labelNazwiskoU"));

        verticalLayout_5->addWidget(labelNazwiskoU);

        labelUlicaU = new QLabel(layoutWidget_2);
        labelUlicaU->setObjectName(QStringLiteral("labelUlicaU"));

        verticalLayout_5->addWidget(labelUlicaU);

        labelPeselU = new QLabel(layoutWidget_2);
        labelPeselU->setObjectName(QStringLiteral("labelPeselU"));

        verticalLayout_5->addWidget(labelPeselU);

        labelMiastoU = new QLabel(layoutWidget_2);
        labelMiastoU->setObjectName(QStringLiteral("labelMiastoU"));

        verticalLayout_5->addWidget(labelMiastoU);

        labelKodU = new QLabel(layoutWidget_2);
        labelKodU->setObjectName(QStringLiteral("labelKodU"));

        verticalLayout_5->addWidget(labelKodU);

        labelEmailU = new QLabel(layoutWidget_2);
        labelEmailU->setObjectName(QStringLiteral("labelEmailU"));

        verticalLayout_5->addWidget(labelEmailU);

        labelStanowiskoU = new QLabel(layoutWidget_2);
        labelStanowiskoU->setObjectName(QStringLiteral("labelStanowiskoU"));

        verticalLayout_5->addWidget(labelStanowiskoU);

        labelTelefonU = new QLabel(layoutWidget_2);
        labelTelefonU->setObjectName(QStringLiteral("labelTelefonU"));

        verticalLayout_5->addWidget(labelTelefonU);


        horizontalLayout_5->addLayout(verticalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lineUsernameU = new QLineEdit(layoutWidget_2);
        lineUsernameU->setObjectName(QStringLiteral("lineUsernameU"));
        lineUsernameU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineUsernameU);

        lineHasloU = new QLineEdit(layoutWidget_2);
        lineHasloU->setObjectName(QStringLiteral("lineHasloU"));
        lineHasloU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineHasloU);

        lineImieU = new QLineEdit(layoutWidget_2);
        lineImieU->setObjectName(QStringLiteral("lineImieU"));
        lineImieU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineImieU);

        lineNazwiskoU = new QLineEdit(layoutWidget_2);
        lineNazwiskoU->setObjectName(QStringLiteral("lineNazwiskoU"));
        lineNazwiskoU->setMinimumSize(QSize(200, 25));
        lineNazwiskoU->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(lineNazwiskoU);

        lineUlicaU = new QLineEdit(layoutWidget_2);
        lineUlicaU->setObjectName(QStringLiteral("lineUlicaU"));
        lineUlicaU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineUlicaU);

        lineNrMieszkania_2 = new QLineEdit(layoutWidget_2);
        lineNrMieszkania_2->setObjectName(QStringLiteral("lineNrMieszkania_2"));
        lineNrMieszkania_2->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineNrMieszkania_2);

        lineMiastoU = new QLineEdit(layoutWidget_2);
        lineMiastoU->setObjectName(QStringLiteral("lineMiastoU"));
        lineMiastoU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineMiastoU);

        lineKodU = new QLineEdit(layoutWidget_2);
        lineKodU->setObjectName(QStringLiteral("lineKodU"));
        lineKodU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineKodU);

        lineEmailU = new QLineEdit(layoutWidget_2);
        lineEmailU->setObjectName(QStringLiteral("lineEmailU"));
        lineEmailU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineEmailU);

        lineStanowiskoU = new QLineEdit(layoutWidget_2);
        lineStanowiskoU->setObjectName(QStringLiteral("lineStanowiskoU"));
        lineStanowiskoU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineStanowiskoU);

        lineTelefonU = new QLineEdit(layoutWidget_2);
        lineTelefonU->setObjectName(QStringLiteral("lineTelefonU"));
        lineTelefonU->setMinimumSize(QSize(200, 25));

        verticalLayout_6->addWidget(lineTelefonU);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelUsernameWymaganeU = new QLabel(layoutWidget_2);
        labelUsernameWymaganeU->setObjectName(QStringLiteral("labelUsernameWymaganeU"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelUsernameWymaganeU->sizePolicy().hasHeightForWidth());
        labelUsernameWymaganeU->setSizePolicy(sizePolicy);
        labelUsernameWymaganeU->setMinimumSize(QSize(0, 0));
        labelUsernameWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelUsernameWymaganeU);

        labelHasloWymaganeU = new QLabel(layoutWidget_2);
        labelHasloWymaganeU->setObjectName(QStringLiteral("labelHasloWymaganeU"));
        sizePolicy.setHeightForWidth(labelHasloWymaganeU->sizePolicy().hasHeightForWidth());
        labelHasloWymaganeU->setSizePolicy(sizePolicy);
        labelHasloWymaganeU->setMinimumSize(QSize(0, 0));
        labelHasloWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelHasloWymaganeU);

        labelImieWymaganeU = new QLabel(layoutWidget_2);
        labelImieWymaganeU->setObjectName(QStringLiteral("labelImieWymaganeU"));
        sizePolicy.setHeightForWidth(labelImieWymaganeU->sizePolicy().hasHeightForWidth());
        labelImieWymaganeU->setSizePolicy(sizePolicy);
        labelImieWymaganeU->setMinimumSize(QSize(0, 0));
        labelImieWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelImieWymaganeU);

        labelNazwiskoWymaganeU = new QLabel(layoutWidget_2);
        labelNazwiskoWymaganeU->setObjectName(QStringLiteral("labelNazwiskoWymaganeU"));
        sizePolicy.setHeightForWidth(labelNazwiskoWymaganeU->sizePolicy().hasHeightForWidth());
        labelNazwiskoWymaganeU->setSizePolicy(sizePolicy);
        labelNazwiskoWymaganeU->setMinimumSize(QSize(0, 0));
        labelNazwiskoWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelNazwiskoWymaganeU);

        labelUlicaWymaganeU = new QLabel(layoutWidget_2);
        labelUlicaWymaganeU->setObjectName(QStringLiteral("labelUlicaWymaganeU"));
        sizePolicy.setHeightForWidth(labelUlicaWymaganeU->sizePolicy().hasHeightForWidth());
        labelUlicaWymaganeU->setSizePolicy(sizePolicy);
        labelUlicaWymaganeU->setMinimumSize(QSize(0, 0));
        labelUlicaWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelUlicaWymaganeU);

        labelPeselWymaganeU = new QLabel(layoutWidget_2);
        labelPeselWymaganeU->setObjectName(QStringLiteral("labelPeselWymaganeU"));
        sizePolicy.setHeightForWidth(labelPeselWymaganeU->sizePolicy().hasHeightForWidth());
        labelPeselWymaganeU->setSizePolicy(sizePolicy);
        labelPeselWymaganeU->setMinimumSize(QSize(0, 0));
        labelPeselWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelPeselWymaganeU);

        labelMiastoWymaganeU = new QLabel(layoutWidget_2);
        labelMiastoWymaganeU->setObjectName(QStringLiteral("labelMiastoWymaganeU"));
        sizePolicy.setHeightForWidth(labelMiastoWymaganeU->sizePolicy().hasHeightForWidth());
        labelMiastoWymaganeU->setSizePolicy(sizePolicy);
        labelMiastoWymaganeU->setMinimumSize(QSize(0, 0));
        labelMiastoWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelMiastoWymaganeU);

        labelKodWymaganeU = new QLabel(layoutWidget_2);
        labelKodWymaganeU->setObjectName(QStringLiteral("labelKodWymaganeU"));
        sizePolicy.setHeightForWidth(labelKodWymaganeU->sizePolicy().hasHeightForWidth());
        labelKodWymaganeU->setSizePolicy(sizePolicy);
        labelKodWymaganeU->setMinimumSize(QSize(0, 0));
        labelKodWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelKodWymaganeU);

        labelEmailWymaganeU = new QLabel(layoutWidget_2);
        labelEmailWymaganeU->setObjectName(QStringLiteral("labelEmailWymaganeU"));
        sizePolicy.setHeightForWidth(labelEmailWymaganeU->sizePolicy().hasHeightForWidth());
        labelEmailWymaganeU->setSizePolicy(sizePolicy);
        labelEmailWymaganeU->setMinimumSize(QSize(0, 0));
        labelEmailWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelEmailWymaganeU);

        labelStanowiskoWymaganeU = new QLabel(layoutWidget_2);
        labelStanowiskoWymaganeU->setObjectName(QStringLiteral("labelStanowiskoWymaganeU"));
        sizePolicy.setHeightForWidth(labelStanowiskoWymaganeU->sizePolicy().hasHeightForWidth());
        labelStanowiskoWymaganeU->setSizePolicy(sizePolicy);
        labelStanowiskoWymaganeU->setMinimumSize(QSize(0, 0));
        labelStanowiskoWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelStanowiskoWymaganeU);

        labelTelefonWymaganeU = new QLabel(layoutWidget_2);
        labelTelefonWymaganeU->setObjectName(QStringLiteral("labelTelefonWymaganeU"));
        sizePolicy.setHeightForWidth(labelTelefonWymaganeU->sizePolicy().hasHeightForWidth());
        labelTelefonWymaganeU->setSizePolicy(sizePolicy);
        labelTelefonWymaganeU->setMinimumSize(QSize(0, 0));
        labelTelefonWymaganeU->setMaximumSize(QSize(300, 16777215));

        verticalLayout_7->addWidget(labelTelefonWymaganeU);


        horizontalLayout_6->addLayout(verticalLayout_7);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        layoutWidget_3 = new QWidget(FormularzDodajUzytkownika);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(300, 400, 195, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        buttonOKU = new QPushButton(layoutWidget_3);
        buttonOKU->setObjectName(QStringLiteral("buttonOKU"));

        horizontalLayout_7->addWidget(buttonOKU);

        buttonCancel_3 = new QPushButton(layoutWidget_3);
        buttonCancel_3->setObjectName(QStringLiteral("buttonCancel_3"));

        horizontalLayout_7->addWidget(buttonCancel_3);

        layoutWidget_2->raise();
        layoutWidget_3->raise();

        retranslateUi(FormularzDodajUzytkownika);

        QMetaObject::connectSlotsByName(FormularzDodajUzytkownika);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajUzytkownika)
    {
        FormularzDodajUzytkownika->setWindowTitle(QApplication::translate("FormularzDodajUzytkownika", "Dialog", 0));
        labelUsernameU->setText(QApplication::translate("FormularzDodajUzytkownika", "Username", 0));
        labelHasloU->setText(QApplication::translate("FormularzDodajUzytkownika", "Haslo", 0));
        labelImieU->setText(QApplication::translate("FormularzDodajUzytkownika", "Imie", 0));
        labelNazwiskoU->setText(QApplication::translate("FormularzDodajUzytkownika", "Nazwisko", 0));
        labelUlicaU->setText(QApplication::translate("FormularzDodajUzytkownika", "Ulica zamieszkania", 0));
        labelPeselU->setText(QApplication::translate("FormularzDodajUzytkownika", "Pesel", 0));
        labelMiastoU->setText(QApplication::translate("FormularzDodajUzytkownika", "Miasto", 0));
        labelKodU->setText(QApplication::translate("FormularzDodajUzytkownika", "Kod pocztowy", 0));
        labelEmailU->setText(QApplication::translate("FormularzDodajUzytkownika", "Email", 0));
        labelStanowiskoU->setText(QApplication::translate("FormularzDodajUzytkownika", "Stanowisko", 0));
        labelTelefonU->setText(QApplication::translate("FormularzDodajUzytkownika", "Telefon", 0));
        labelUsernameWymaganeU->setText(QString());
        labelHasloWymaganeU->setText(QString());
        labelImieWymaganeU->setText(QString());
        labelNazwiskoWymaganeU->setText(QString());
        labelUlicaWymaganeU->setText(QString());
        labelPeselWymaganeU->setText(QString());
        labelMiastoWymaganeU->setText(QString());
        labelKodWymaganeU->setText(QString());
        labelEmailWymaganeU->setText(QString());
        labelStanowiskoWymaganeU->setText(QString());
        labelTelefonWymaganeU->setText(QString());
        buttonOKU->setText(QApplication::translate("FormularzDodajUzytkownika", "OK", 0));
        buttonCancel_3->setText(QApplication::translate("FormularzDodajUzytkownika", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajUzytkownika: public Ui_FormularzDodajUzytkownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJUZYTKOWNIKA_H
