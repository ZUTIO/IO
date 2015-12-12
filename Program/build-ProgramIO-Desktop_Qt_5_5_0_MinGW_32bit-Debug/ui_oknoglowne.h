/********************************************************************************
** Form generated from reading UI file 'oknoglowne.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOGLOWNE_H
#define UI_OKNOGLOWNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oknoglowne
{
public:
    QTabWidget *tabGlowne;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonDodajKlienta;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_6;
    QPushButton *buttonExit;

    void setupUi(QDialog *oknoglowne)
    {
        if (oknoglowne->objectName().isEmpty())
            oknoglowne->setObjectName(QStringLiteral("oknoglowne"));
        oknoglowne->resize(874, 456);
        tabGlowne = new QTabWidget(oknoglowne);
        tabGlowne->setObjectName(QStringLiteral("tabGlowne"));
        tabGlowne->setGeometry(QRect(10, 10, 861, 381));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabGlowne->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 145, 128));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        tabGlowne->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 145, 128));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonDodajKlienta = new QPushButton(layoutWidget1);
        buttonDodajKlienta->setObjectName(QStringLiteral("buttonDodajKlienta"));

        verticalLayout_2->addWidget(buttonDodajKlienta);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        tabGlowne->addTab(tab_3, QString());
        buttonExit = new QPushButton(oknoglowne);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        buttonExit->setGeometry(QRect(760, 410, 93, 28));

        retranslateUi(oknoglowne);

        tabGlowne->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(oknoglowne);
    } // setupUi

    void retranslateUi(QDialog *oknoglowne)
    {
        oknoglowne->setWindowTitle(QApplication::translate("oknoglowne", "Dialog", 0));
        tabGlowne->setTabText(tabGlowne->indexOf(tab), QApplication::translate("oknoglowne", "Tab 1", 0));
        pushButton->setText(QApplication::translate("oknoglowne", "Dodaj u\305\274ytkownika", 0));
        pushButton_2->setText(QApplication::translate("oknoglowne", "Usu\305\204 u\305\274ytkownika", 0));
        pushButton_3->setText(QApplication::translate("oknoglowne", "Wy\305\233wietl u\305\274ytkownik\303\263w", 0));
        tabGlowne->setTabText(tabGlowne->indexOf(tab_2), QApplication::translate("oknoglowne", "U\305\274ytkownicy", 0));
        buttonDodajKlienta->setText(QApplication::translate("oknoglowne", "Dodaj klienta", 0));
        pushButton_5->setText(QApplication::translate("oknoglowne", "Usu\305\204 klienta", 0));
        pushButton_6->setText(QApplication::translate("oknoglowne", "Wy\305\233wietl klient\303\263w", 0));
        tabGlowne->setTabText(tabGlowne->indexOf(tab_3), QApplication::translate("oknoglowne", "Klienci", 0));
        buttonExit->setText(QApplication::translate("oknoglowne", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class oknoglowne: public Ui_oknoglowne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOGLOWNE_H
