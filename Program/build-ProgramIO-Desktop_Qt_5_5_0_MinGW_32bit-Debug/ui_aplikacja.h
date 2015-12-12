/********************************************************************************
** Form generated from reading UI file 'aplikacja.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APLIKACJA_H
#define UI_APLIKACJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Aplikacja
{
public:
    QWidget *centralWidget;
    QPushButton *buttonLogin;
    QLabel *labelStatus;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *linePass;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Aplikacja)
    {
        if (Aplikacja->objectName().isEmpty())
            Aplikacja->setObjectName(QStringLiteral("Aplikacja"));
        Aplikacja->resize(416, 235);
        centralWidget = new QWidget(Aplikacja);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        buttonLogin = new QPushButton(centralWidget);
        buttonLogin->setObjectName(QStringLiteral("buttonLogin"));
        buttonLogin->setGeometry(QRect(280, 80, 93, 28));
        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setGeometry(QRect(50, 140, 211, 16));
        QFont font;
        font.setPointSize(9);
        font.setUnderline(false);
        labelStatus->setFont(font);
        labelStatus->setFrameShape(QFrame::Box);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 50, 213, 82));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineUsername = new QLineEdit(widget);
        lineUsername->setObjectName(QStringLiteral("lineUsername"));

        horizontalLayout->addWidget(lineUsername);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        linePass = new QLineEdit(widget);
        linePass->setObjectName(QStringLiteral("linePass"));
        linePass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(linePass);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Aplikacja->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Aplikacja);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 416, 26));
        Aplikacja->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Aplikacja);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Aplikacja->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Aplikacja);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Aplikacja->setStatusBar(statusBar);

        retranslateUi(Aplikacja);

        QMetaObject::connectSlotsByName(Aplikacja);
    } // setupUi

    void retranslateUi(QMainWindow *Aplikacja)
    {
        Aplikacja->setWindowTitle(QApplication::translate("Aplikacja", "Aplikacja", 0));
        buttonLogin->setText(QApplication::translate("Aplikacja", "Login", 0));
        labelStatus->setText(QApplication::translate("Aplikacja", "Login to the application", 0));
        label->setText(QApplication::translate("Aplikacja", "Username:", 0));
        label_2->setText(QApplication::translate("Aplikacja", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class Aplikacja: public Ui_Aplikacja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APLIKACJA_H
