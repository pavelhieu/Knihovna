/********************************************************************************
** Form generated from reading UI file 'dialogknihy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGKNIHY_H
#define UI_DIALOGKNIHY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogKnihy
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonPridatNKrat;
    QLabel *label;
    QPushButton *pushButtonVypujcka;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonHledat;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonVsechny;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonPridatKnihu;
    QPushButton *pushButtonSmazatKnihu;

    void setupUi(QDialog *DialogKnihy)
    {
        if (DialogKnihy->objectName().isEmpty())
            DialogKnihy->setObjectName(QStringLiteral("DialogKnihy"));
        DialogKnihy->resize(941, 655);
        DialogKnihy->setStyleSheet(QLatin1String("#DialogKnihy {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#pushButtonHledat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"\n"
"}\n"
"#pushButtonVsechny{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonPridatKnihu{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"\n"
"}\n"
"#pushButtonSmazatKnihu{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVypujcka{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonPridatNKrat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(DialogKnihy);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonPridatNKrat = new QPushButton(DialogKnihy);
        pushButtonPridatNKrat->setObjectName(QStringLiteral("pushButtonPridatNKrat"));
        pushButtonPridatNKrat->setMinimumSize(QSize(350, 40));
        pushButtonPridatNKrat->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButtonPridatNKrat->setFont(font);
        pushButtonPridatNKrat->setStyleSheet(QLatin1String("#pushButtonPridatNKrat\n"
"{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonPridatNKrat, 3, 1, 1, 1);

        label = new QLabel(DialogKnihy);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 4, 2, 1, 1);

        pushButtonVypujcka = new QPushButton(DialogKnihy);
        pushButtonVypujcka->setObjectName(QStringLiteral("pushButtonVypujcka"));
        pushButtonVypujcka->setMinimumSize(QSize(350, 40));
        pushButtonVypujcka->setMaximumSize(QSize(350, 40));
        pushButtonVypujcka->setFont(font);
        pushButtonVypujcka->setStyleSheet(QLatin1String("#pushButtonVypujcka{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVypujcka, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        pushButtonHledat = new QPushButton(DialogKnihy);
        pushButtonHledat->setObjectName(QStringLiteral("pushButtonHledat"));
        pushButtonHledat->setMinimumSize(QSize(350, 40));
        pushButtonHledat->setMaximumSize(QSize(350, 40));
        pushButtonHledat->setFont(font);
        pushButtonHledat->setStyleSheet(QLatin1String("#pushButtonHledat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonHledat, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        pushButtonVsechny = new QPushButton(DialogKnihy);
        pushButtonVsechny->setObjectName(QStringLiteral("pushButtonVsechny"));
        pushButtonVsechny->setMinimumSize(QSize(350, 40));
        pushButtonVsechny->setMaximumSize(QSize(350, 40));
        pushButtonVsechny->setFont(font);
        pushButtonVsechny->setStyleSheet(QLatin1String("#pushButtonVsechny{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVsechny, 1, 1, 1, 1);

        tableView = new QTableView(DialogKnihy);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(tableView, 5, 0, 1, 6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 0, 1, 1);

        pushButtonPridatKnihu = new QPushButton(DialogKnihy);
        pushButtonPridatKnihu->setObjectName(QStringLiteral("pushButtonPridatKnihu"));
        pushButtonPridatKnihu->setMinimumSize(QSize(350, 40));
        pushButtonPridatKnihu->setMaximumSize(QSize(350, 40));
        pushButtonPridatKnihu->setFont(font);
        pushButtonPridatKnihu->setStyleSheet(QLatin1String("#pushButtonPridatKnihu\n"
"{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonPridatKnihu, 2, 1, 1, 1);

        pushButtonSmazatKnihu = new QPushButton(DialogKnihy);
        pushButtonSmazatKnihu->setObjectName(QStringLiteral("pushButtonSmazatKnihu"));
        pushButtonSmazatKnihu->setMinimumSize(QSize(350, 40));
        pushButtonSmazatKnihu->setMaximumSize(QSize(350, 40));
        pushButtonSmazatKnihu->setFont(font);
        pushButtonSmazatKnihu->setStyleSheet(QLatin1String("#pushButtonSmazatKnihu{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonSmazatKnihu, 2, 2, 1, 1);


        retranslateUi(DialogKnihy);

        QMetaObject::connectSlotsByName(DialogKnihy);
    } // setupUi

    void retranslateUi(QDialog *DialogKnihy)
    {
        DialogKnihy->setWindowTitle(QApplication::translate("DialogKnihy", "Knihy", Q_NULLPTR));
        pushButtonPridatNKrat->setText(QApplication::translate("DialogKnihy", "P\305\231idat novou knihu n-kr\303\241t", Q_NULLPTR));
        label->setText(QString());
        pushButtonVypujcka->setText(QApplication::translate("DialogKnihy", "          V\303\275p\305\257j\304\215ka         ", Q_NULLPTR));
        pushButtonHledat->setText(QApplication::translate("DialogKnihy", "Hledat knihu podle ...", Q_NULLPTR));
        pushButtonVsechny->setText(QApplication::translate("DialogKnihy", "     V\305\241echny knihy   ", Q_NULLPTR));
        pushButtonPridatKnihu->setText(QApplication::translate("DialogKnihy", "P\305\231idat novou knihu", Q_NULLPTR));
        pushButtonSmazatKnihu->setText(QApplication::translate("DialogKnihy", "        Smazat knihu    ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogKnihy: public Ui_DialogKnihy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGKNIHY_H
