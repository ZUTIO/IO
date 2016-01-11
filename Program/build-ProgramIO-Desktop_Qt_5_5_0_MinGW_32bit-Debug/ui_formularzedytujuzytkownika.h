/********************************************************************************
** Form generated from reading UI file 'formularzedytujuzytkownika.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARZEDYTUJUZYTKOWNIKA_H
#define UI_FORMULARZEDYTUJUZYTKOWNIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularzEdytujUzytkownika
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tablePracownicy;
    QLabel *labelListaPracownikow;
    QPushButton *buttonEdytuj;

    void setupUi(QDialog *FormularzEdytujUzytkownika)
    {
        if (FormularzEdytujUzytkownika->objectName().isEmpty())
            FormularzEdytujUzytkownika->setObjectName(QStringLiteral("FormularzEdytujUzytkownika"));
        FormularzEdytujUzytkownika->resize(424, 632);
        buttonBox = new QDialogButtonBox(FormularzEdytujUzytkownika);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 590, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tablePracownicy = new QTableWidget(FormularzEdytujUzytkownika);
        if (tablePracownicy->columnCount() < 3)
            tablePracownicy->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePracownicy->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePracownicy->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePracownicy->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tablePracownicy->setObjectName(QStringLiteral("tablePracownicy"));
        tablePracownicy->setGeometry(QRect(10, 70, 401, 431));
        labelListaPracownikow = new QLabel(FormularzEdytujUzytkownika);
        labelListaPracownikow->setObjectName(QStringLiteral("labelListaPracownikow"));
        labelListaPracownikow->setGeometry(QRect(20, 20, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelListaPracownikow->setFont(font);
        buttonEdytuj = new QPushButton(FormularzEdytujUzytkownika);
        buttonEdytuj->setObjectName(QStringLiteral("buttonEdytuj"));
        buttonEdytuj->setGeometry(QRect(290, 510, 93, 28));

        retranslateUi(FormularzEdytujUzytkownika);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormularzEdytujUzytkownika, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormularzEdytujUzytkownika, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormularzEdytujUzytkownika);
    } // setupUi

    void retranslateUi(QDialog *FormularzEdytujUzytkownika)
    {
        FormularzEdytujUzytkownika->setWindowTitle(QApplication::translate("FormularzEdytujUzytkownika", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tablePracownicy->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FormularzEdytujUzytkownika", "Username", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tablePracownicy->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FormularzEdytujUzytkownika", "Imi\304\231", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tablePracownicy->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FormularzEdytujUzytkownika", "Nazwisko", 0));
        labelListaPracownikow->setText(QApplication::translate("FormularzEdytujUzytkownika", "Lista pracownik\303\263w:", 0));
        buttonEdytuj->setText(QApplication::translate("FormularzEdytujUzytkownika", "Edytuj", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzEdytujUzytkownika: public Ui_FormularzEdytujUzytkownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZEDYTUJUZYTKOWNIKA_H
