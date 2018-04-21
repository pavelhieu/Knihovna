/********************************************************************************
** Form generated from reading UI file 'dialogucitelvypujcka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUCITELVYPUJCKA_H
#define UI_DIALOGUCITELVYPUJCKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogUcitelVypujcka
{
public:
    QGridLayout *gridLayout;
    QRadioButton *radioButtonVraceneKnihy;
    QPushButton *pushButtonTisk;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *pushButtonSmazat;
    QPushButton *pushButtonHledat;
    QPushButton *pushButtonNova;
    QLabel *label;
    QPushButton *pushButtonVraceno;
    QRadioButton *radioButtonNevraceneKnihy;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonVsechny;
    QLabel *labelLoad;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogUcitelVypujcka)
    {
        if (DialogUcitelVypujcka->objectName().isEmpty())
            DialogUcitelVypujcka->setObjectName(QStringLiteral("DialogUcitelVypujcka"));
        DialogUcitelVypujcka->resize(930, 708);
        DialogUcitelVypujcka->setMinimumSize(QSize(930, 0));
        DialogUcitelVypujcka->setMaximumSize(QSize(930, 16777215));
        DialogUcitelVypujcka->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("MS Serif"));
        DialogUcitelVypujcka->setFont(font);
        DialogUcitelVypujcka->setStyleSheet(QLatin1String("#DialogUcitelVypujcka {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#centralWidget {\n"
"background: rgb(204,229,250);\n"
"}\n"
"\n"
"#pushButtonHledat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonNova{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonSmazat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVraceno\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVsechny\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonTisk\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
""));
        gridLayout = new QGridLayout(DialogUcitelVypujcka);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonVraceneKnihy = new QRadioButton(DialogUcitelVypujcka);
        radioButtonVraceneKnihy->setObjectName(QStringLiteral("radioButtonVraceneKnihy"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        radioButtonVraceneKnihy->setFont(font1);
        radioButtonVraceneKnihy->setLayoutDirection(Qt::RightToLeft);
        radioButtonVraceneKnihy->setStyleSheet(QLatin1String("#radioButtonVraceneKnihy{\n"
"color:rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButtonVraceneKnihy, 4, 1, 1, 1);

        pushButtonTisk = new QPushButton(DialogUcitelVypujcka);
        pushButtonTisk->setObjectName(QStringLiteral("pushButtonTisk"));
        pushButtonTisk->setMinimumSize(QSize(350, 40));
        pushButtonTisk->setMaximumSize(QSize(350, 40));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButtonTisk->setFont(font2);
        pushButtonTisk->setStyleSheet(QLatin1String("#pushButtonTisk{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonTisk, 3, 1, 1, 1);

        tableView = new QTableView(DialogUcitelVypujcka);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 6, 0, 1, 4);

        label_2 = new QLabel(DialogUcitelVypujcka);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 5, 2, 1, 1);

        pushButtonSmazat = new QPushButton(DialogUcitelVypujcka);
        pushButtonSmazat->setObjectName(QStringLiteral("pushButtonSmazat"));
        pushButtonSmazat->setMinimumSize(QSize(350, 40));
        pushButtonSmazat->setMaximumSize(QSize(350, 40));
        pushButtonSmazat->setFont(font2);
        pushButtonSmazat->setStyleSheet(QLatin1String("#pushButtonSmazat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonSmazat, 2, 2, 1, 1);

        pushButtonHledat = new QPushButton(DialogUcitelVypujcka);
        pushButtonHledat->setObjectName(QStringLiteral("pushButtonHledat"));
        pushButtonHledat->setMinimumSize(QSize(350, 40));
        pushButtonHledat->setMaximumSize(QSize(350, 40));
        pushButtonHledat->setFont(font2);
        pushButtonHledat->setStyleSheet(QLatin1String("#pushButtonHledat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonHledat, 1, 2, 1, 1);

        pushButtonNova = new QPushButton(DialogUcitelVypujcka);
        pushButtonNova->setObjectName(QStringLiteral("pushButtonNova"));
        pushButtonNova->setMinimumSize(QSize(350, 40));
        pushButtonNova->setMaximumSize(QSize(350, 40));
        pushButtonNova->setFont(font2);
        pushButtonNova->setStyleSheet(QLatin1String("#pushButtonNova{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonNova, 2, 1, 1, 1);

        label = new QLabel(DialogUcitelVypujcka);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 5, 1, 1, 1);

        pushButtonVraceno = new QPushButton(DialogUcitelVypujcka);
        pushButtonVraceno->setObjectName(QStringLiteral("pushButtonVraceno"));
        pushButtonVraceno->setMinimumSize(QSize(350, 40));
        pushButtonVraceno->setMaximumSize(QSize(350, 40));
        pushButtonVraceno->setFont(font2);
        pushButtonVraceno->setStyleSheet(QLatin1String("#pushButtonVraceno{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVraceno, 3, 2, 1, 1);

        radioButtonNevraceneKnihy = new QRadioButton(DialogUcitelVypujcka);
        radioButtonNevraceneKnihy->setObjectName(QStringLiteral("radioButtonNevraceneKnihy"));
        radioButtonNevraceneKnihy->setFont(font1);
        radioButtonNevraceneKnihy->setStyleSheet(QLatin1String("#radioButtonNevraceneKnihy{\n"
"color:rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButtonNevraceneKnihy, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        buttonBox = new QDialogButtonBox(DialogUcitelVypujcka);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 9, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        pushButtonVsechny = new QPushButton(DialogUcitelVypujcka);
        pushButtonVsechny->setObjectName(QStringLiteral("pushButtonVsechny"));
        pushButtonVsechny->setMinimumSize(QSize(350, 40));
        pushButtonVsechny->setMaximumSize(QSize(350, 40));
        pushButtonVsechny->setFont(font2);
        pushButtonVsechny->setStyleSheet(QLatin1String("#pushButtonVsechny{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVsechny, 1, 1, 1, 1);

        labelLoad = new QLabel(DialogUcitelVypujcka);
        labelLoad->setObjectName(QStringLiteral("labelLoad"));

        gridLayout->addWidget(labelLoad, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(DialogUcitelVypujcka);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 50));
        textBrowser->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setPointSize(11);
        textBrowser->setFont(font3);

        gridLayout->addWidget(textBrowser, 7, 0, 1, 4);


        retranslateUi(DialogUcitelVypujcka);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogUcitelVypujcka, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogUcitelVypujcka, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogUcitelVypujcka);
    } // setupUi

    void retranslateUi(QDialog *DialogUcitelVypujcka)
    {
        DialogUcitelVypujcka->setWindowTitle(QApplication::translate("DialogUcitelVypujcka", "V\303\275p\305\257\304\215jka vyu\304\215uj\303\255c\303\255", Q_NULLPTR));
        radioButtonVraceneKnihy->setText(QApplication::translate("DialogUcitelVypujcka", "Vr\303\241cen\303\251 knihy", Q_NULLPTR));
        pushButtonTisk->setText(QApplication::translate("DialogUcitelVypujcka", "Tisk", Q_NULLPTR));
        label_2->setText(QString());
        pushButtonSmazat->setText(QApplication::translate("DialogUcitelVypujcka", "Smazat", Q_NULLPTR));
        pushButtonHledat->setText(QApplication::translate("DialogUcitelVypujcka", "Hledat v\303\275p\305\257j\304\215ku podle ...", Q_NULLPTR));
        pushButtonNova->setText(QApplication::translate("DialogUcitelVypujcka", "      Nov\303\241 v\303\275p\305\257j\304\215ka     ", Q_NULLPTR));
        label->setText(QString());
        pushButtonVraceno->setText(QApplication::translate("DialogUcitelVypujcka", "Vr\303\241ceno", Q_NULLPTR));
        radioButtonNevraceneKnihy->setText(QApplication::translate("DialogUcitelVypujcka", "Nevr\303\241cen\303\251 knihy", Q_NULLPTR));
        pushButtonVsechny->setText(QApplication::translate("DialogUcitelVypujcka", "V\303\275pis v\305\241ech v\303\275p\305\257j\304\215ek", Q_NULLPTR));
        labelLoad->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogUcitelVypujcka: public Ui_DialogUcitelVypujcka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUCITELVYPUJCKA_H
