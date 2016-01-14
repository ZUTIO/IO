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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularzDodajProdukt
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QRadioButton *radioPocztowka;
    QRadioButton *radioNotes;
    QRadioButton *radioUlotka;
    QRadioButton *radioWizytowka;
    QRadioButton *radioPlakat;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *FormularzDodajProdukt)
    {
        if (FormularzDodajProdukt->objectName().isEmpty())
            FormularzDodajProdukt->setObjectName(QStringLiteral("FormularzDodajProdukt"));
        FormularzDodajProdukt->resize(440, 375);
        layoutWidget = new QWidget(FormularzDodajProdukt);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 330, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonOK = new QPushButton(layoutWidget);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        horizontalLayout_2->addWidget(buttonOK);

        buttonCancel = new QPushButton(layoutWidget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        radioPocztowka = new QRadioButton(FormularzDodajProdukt);
        radioPocztowka->setObjectName(QStringLiteral("radioPocztowka"));
        radioPocztowka->setGeometry(QRect(30, 50, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Mongolian Baiti"));
        font.setPointSize(10);
        radioPocztowka->setFont(font);
        radioPocztowka->setIconSize(QSize(30, 30));
        radioNotes = new QRadioButton(FormularzDodajProdukt);
        radioNotes->setObjectName(QStringLiteral("radioNotes"));
        radioNotes->setGeometry(QRect(30, 100, 95, 20));
        radioNotes->setFont(font);
        radioNotes->setIconSize(QSize(30, 30));
        radioUlotka = new QRadioButton(FormularzDodajProdukt);
        radioUlotka->setObjectName(QStringLiteral("radioUlotka"));
        radioUlotka->setGeometry(QRect(30, 150, 95, 20));
        radioUlotka->setFont(font);
        radioUlotka->setIconSize(QSize(30, 30));
        radioWizytowka = new QRadioButton(FormularzDodajProdukt);
        radioWizytowka->setObjectName(QStringLiteral("radioWizytowka"));
        radioWizytowka->setGeometry(QRect(30, 200, 111, 16));
        radioWizytowka->setFont(font);
        radioWizytowka->setIconSize(QSize(30, 30));
        radioPlakat = new QRadioButton(FormularzDodajProdukt);
        radioPlakat->setObjectName(QStringLiteral("radioPlakat"));
        radioPlakat->setGeometry(QRect(30, 250, 95, 20));
        radioPlakat->setFont(font);
        radioPlakat->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(FormularzDodajProdukt);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 50, 113, 22));
        lineEdit_2 = new QLineEdit(FormularzDodajProdukt);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 100, 113, 22));
        lineEdit_3 = new QLineEdit(FormularzDodajProdukt);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 150, 113, 22));
        lineEdit_4 = new QLineEdit(FormularzDodajProdukt);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(300, 250, 113, 22));
        lineEdit_5 = new QLineEdit(FormularzDodajProdukt);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(300, 200, 113, 22));
        label = new QLabel(FormularzDodajProdukt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 50, 55, 16));
        label_2 = new QLabel(FormularzDodajProdukt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 100, 55, 16));
        label_3 = new QLabel(FormularzDodajProdukt);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 150, 55, 16));
        label_4 = new QLabel(FormularzDodajProdukt);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 200, 55, 16));
        label_5 = new QLabel(FormularzDodajProdukt);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 250, 55, 16));

        retranslateUi(FormularzDodajProdukt);

        QMetaObject::connectSlotsByName(FormularzDodajProdukt);
    } // setupUi

    void retranslateUi(QDialog *FormularzDodajProdukt)
    {
        FormularzDodajProdukt->setWindowTitle(QApplication::translate("FormularzDodajProdukt", "Dialog", 0));
        buttonOK->setText(QApplication::translate("FormularzDodajProdukt", "OK", 0));
        buttonCancel->setText(QApplication::translate("FormularzDodajProdukt", "Cancel", 0));
        radioPocztowka->setText(QApplication::translate("FormularzDodajProdukt", "Poczt\303\263wka", 0));
        radioNotes->setText(QApplication::translate("FormularzDodajProdukt", "Notes", 0));
        radioUlotka->setText(QApplication::translate("FormularzDodajProdukt", "Ulotka", 0));
        radioWizytowka->setText(QApplication::translate("FormularzDodajProdukt", "Wizyt\303\263wka", 0));
        radioPlakat->setText(QApplication::translate("FormularzDodajProdukt", "Plakat", 0));
        label->setText(QApplication::translate("FormularzDodajProdukt", "Ilo\305\233\304\207", 0));
        label_2->setText(QApplication::translate("FormularzDodajProdukt", "Ilo\305\233\304\207", 0));
        label_3->setText(QApplication::translate("FormularzDodajProdukt", "Ilo\305\233\304\207", 0));
        label_4->setText(QApplication::translate("FormularzDodajProdukt", "Ilo\305\233\304\207", 0));
        label_5->setText(QApplication::translate("FormularzDodajProdukt", "Ilo\305\233\304\207", 0));
    } // retranslateUi

};

namespace Ui {
    class FormularzDodajProdukt: public Ui_FormularzDodajProdukt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARZDODAJPRODUKT_H
