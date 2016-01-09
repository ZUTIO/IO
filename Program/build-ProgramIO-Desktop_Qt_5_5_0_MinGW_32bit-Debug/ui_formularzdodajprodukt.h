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


        retranslateUi(FormularzDodajProdukt);

        QMetaObject::connectSlotsByName(FormularzDodajProdukt);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajProdukt)
    {
        FormularzDodajProdukt->setWindowTitle(QApplication::translate("FormularzDodajProdukt", "Dialog", 0));
        buttonOK->setText(QApplication::translate("FormularzDodajProdukt", "OK", 0));
        buttonCancel->setText(QApplication::translate("FormularzDodajProdukt", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajProdukt: public Ui_FormularzDodajProdukt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJPRODUKT_H
