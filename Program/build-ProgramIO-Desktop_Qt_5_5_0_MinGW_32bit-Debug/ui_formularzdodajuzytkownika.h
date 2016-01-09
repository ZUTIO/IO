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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularzDodajUzytkownika
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;

    void setupUi(QDialog *FormularzDodajUzytkownika)
    {
        if (FormularzDodajUzytkownika->objectName().isEmpty())
            FormularzDodajUzytkownika->setObjectName(QStringLiteral("FormularzDodajUzytkownika"));
        FormularzDodajUzytkownika->resize(387, 285);
        layoutWidget = new QWidget(FormularzDodajUzytkownika);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 240, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonOK = new QPushButton(layoutWidget);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        horizontalLayout_2->addWidget(buttonOK);

        buttonCancel = new QPushButton(layoutWidget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);


        retranslateUi(FormularzDodajUzytkownika);

        QMetaObject::connectSlotsByName(FormularzDodajUzytkownika);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajUzytkownika)
    {
        FormularzDodajUzytkownika->setWindowTitle(QApplication::translate("FormularzDodajUzytkownika", "Dialog", 0));
        buttonOK->setText(QApplication::translate("FormularzDodajUzytkownika", "OK", 0));
        buttonCancel->setText(QApplication::translate("FormularzDodajUzytkownika", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajUzytkownika: public Ui_FormularzDodajUzytkownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJUZYTKOWNIKA_H
