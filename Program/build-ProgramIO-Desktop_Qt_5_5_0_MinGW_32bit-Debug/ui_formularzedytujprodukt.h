/********************************************************************************
** Form generated from reading UI file 'formularzedytujprodukt.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARZEDYTUJPRODUKT_H
#define UI_FORMULARZEDYTUJPRODUKT_H

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

class Ui_FormularzEdytujProdukt
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *buttonEdytuj;
    QLabel *labelListaPracownikow;
    QTableWidget *tableProdukty;

    void setupUi(QDialog *FormularzEdytujProdukt)
    {
        if (FormularzEdytujProdukt->objectName().isEmpty())
            FormularzEdytujProdukt->setObjectName(QStringLiteral("FormularzEdytujProdukt"));
        FormularzEdytujProdukt->resize(939, 613);
        buttonBox = new QDialogButtonBox(FormularzEdytujProdukt);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(560, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonEdytuj = new QPushButton(FormularzEdytujProdukt);
        buttonEdytuj->setObjectName(QStringLiteral("buttonEdytuj"));
        buttonEdytuj->setGeometry(QRect(800, 510, 93, 28));
        labelListaPracownikow = new QLabel(FormularzEdytujProdukt);
        labelListaPracownikow->setObjectName(QStringLiteral("labelListaPracownikow"));
        labelListaPracownikow->setGeometry(QRect(20, 10, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelListaPracownikow->setFont(font);
        tableProdukty = new QTableWidget(FormularzEdytujProdukt);
        if (tableProdukty->columnCount() < 7)
            tableProdukty->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableProdukty->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableProdukty->setObjectName(QStringLiteral("tableProdukty"));
        tableProdukty->setGeometry(QRect(10, 60, 911, 431));
        tableProdukty->setAutoScroll(true);

        retranslateUi(FormularzEdytujProdukt);
        QObject::connect(buttonBox, SIGNAL(accepted()), FormularzEdytujProdukt, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FormularzEdytujProdukt, SLOT(reject()));

        QMetaObject::connectSlotsByName(FormularzEdytujProdukt);
    } // setupUi

    void retranslateUi(QDialog *FormularzEdytujProdukt)
    {
        FormularzEdytujProdukt->setWindowTitle(QApplication::translate("FormularzEdytujProdukt", "Dialog", 0));
        buttonEdytuj->setText(QApplication::translate("FormularzEdytujProdukt", "Edytuj", 0));
        labelListaPracownikow->setText(QApplication::translate("FormularzEdytujProdukt", "Lista produkt\303\263w:", 0));
        QTableWidgetItem *___qtablewidgetitem = tableProdukty->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FormularzEdytujProdukt", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableProdukty->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FormularzEdytujProdukt", "Nazwa", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableProdukty->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FormularzEdytujProdukt", "Format", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableProdukty->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FormularzEdytujProdukt", "Zadruk", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableProdukty->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FormularzEdytujProdukt", "Kolor", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableProdukty->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("FormularzEdytujProdukt", "Iloscstron", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableProdukty->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("FormularzEdytujProdukt", "Gramatura", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzEdytujProdukt: public Ui_FormularzEdytujProdukt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZEDYTUJPRODUKT_H
