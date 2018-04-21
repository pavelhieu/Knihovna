/********************************************************************************
** Form generated from reading UI file 'dialogvypujcka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVYPUJCKA_H
#define UI_DIALOGVYPUJCKA_H

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

class Ui_DialogVypujcka
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonTisk;
    QTextBrowser *textBrowser;
    QPushButton *pushButtonHledat;
    QPushButton *pushButtonVsechny;
    QPushButton *pushButtonSmazat;
    QTableView *tableView;
    QPushButton *pushButtonupravit;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonNovaVypujcka;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *DialogVypujcka)
    {
        if (DialogVypujcka->objectName().isEmpty())
            DialogVypujcka->setObjectName(QStringLiteral("DialogVypujcka"));
        DialogVypujcka->resize(930, 673);
        DialogVypujcka->setMinimumSize(QSize(930, 0));
        DialogVypujcka->setMaximumSize(QSize(930, 16777215));
        DialogVypujcka->setStyleSheet(QLatin1String("#DialogVypujcka {\n"
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
"#pushButtonNovaVypujcka{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonSmazat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonupravit{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVsechny{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonTisk{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
""));
        gridLayout = new QGridLayout(DialogVypujcka);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonTisk = new QPushButton(DialogVypujcka);
        pushButtonTisk->setObjectName(QStringLiteral("pushButtonTisk"));
        pushButtonTisk->setMinimumSize(QSize(350, 40));
        pushButtonTisk->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButtonTisk->setFont(font);
        pushButtonTisk->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButtonTisk->setStyleSheet(QLatin1String("#pushButtonTisk{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonTisk, 4, 1, 1, 1);

        textBrowser = new QTextBrowser(DialogVypujcka);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 50));
        textBrowser->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(11);
        textBrowser->setFont(font1);

        gridLayout->addWidget(textBrowser, 10, 0, 1, 4);

        pushButtonHledat = new QPushButton(DialogVypujcka);
        pushButtonHledat->setObjectName(QStringLiteral("pushButtonHledat"));
        pushButtonHledat->setMinimumSize(QSize(350, 40));
        pushButtonHledat->setMaximumSize(QSize(350, 40));
        pushButtonHledat->setFont(font);
        pushButtonHledat->setStyleSheet(QLatin1String("#pushButtonHledat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonHledat, 1, 2, 1, 1);

        pushButtonVsechny = new QPushButton(DialogVypujcka);
        pushButtonVsechny->setObjectName(QStringLiteral("pushButtonVsechny"));
        pushButtonVsechny->setMinimumSize(QSize(350, 40));
        pushButtonVsechny->setMaximumSize(QSize(350, 40));
        pushButtonVsechny->setFont(font);
        pushButtonVsechny->setStyleSheet(QLatin1String("#pushButtonVsechny{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVsechny, 1, 1, 1, 1);

        pushButtonSmazat = new QPushButton(DialogVypujcka);
        pushButtonSmazat->setObjectName(QStringLiteral("pushButtonSmazat"));
        pushButtonSmazat->setMinimumSize(QSize(350, 40));
        pushButtonSmazat->setMaximumSize(QSize(350, 40));
        pushButtonSmazat->setFont(font);
        pushButtonSmazat->setStyleSheet(QLatin1String("#pushButtonSmazat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonSmazat, 3, 2, 1, 1);

        tableView = new QTableView(DialogVypujcka);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 9, 0, 1, 4);

        pushButtonupravit = new QPushButton(DialogVypujcka);
        pushButtonupravit->setObjectName(QStringLiteral("pushButtonupravit"));
        pushButtonupravit->setMinimumSize(QSize(350, 40));
        pushButtonupravit->setMaximumSize(QSize(350, 40));
        pushButtonupravit->setFont(font);
        pushButtonupravit->setStyleSheet(QLatin1String("#pushButtonupravit{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonupravit, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        buttonBox = new QDialogButtonBox(DialogVypujcka);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 2, 1, 1);

        pushButtonNovaVypujcka = new QPushButton(DialogVypujcka);
        pushButtonNovaVypujcka->setObjectName(QStringLiteral("pushButtonNovaVypujcka"));
        pushButtonNovaVypujcka->setMinimumSize(QSize(350, 40));
        pushButtonNovaVypujcka->setMaximumSize(QSize(350, 40));
        pushButtonNovaVypujcka->setFont(font);
        pushButtonNovaVypujcka->setStyleSheet(QLatin1String("#pushButtonNovaVypujcka{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonNovaVypujcka, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        label = new QLabel(DialogVypujcka);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_2 = new QLabel(DialogVypujcka);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 6, 2, 1, 1);

        radioButton = new QRadioButton(DialogVypujcka);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QLatin1String("#radioButton{\n"
"color:rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButton, 5, 2, 1, 1);

        radioButton_2 = new QRadioButton(DialogVypujcka);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font2);
        radioButton_2->setLayoutDirection(Qt::RightToLeft);
        radioButton_2->setStyleSheet(QLatin1String("#radioButton_2{\n"
"color:rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButton_2, 5, 1, 1, 1);


        retranslateUi(DialogVypujcka);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogVypujcka, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogVypujcka, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogVypujcka);
    } // setupUi

    void retranslateUi(QDialog *DialogVypujcka)
    {
        DialogVypujcka->setWindowTitle(QApplication::translate("DialogVypujcka", "V\303\275p\305\257j\304\215ka", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        pushButtonTisk->setStatusTip(QApplication::translate("DialogVypujcka", "#pushButtonTisk{\\ncolor:rgb(0,67,134)\\n}", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButtonTisk->setText(QApplication::translate("DialogVypujcka", "Tisk", Q_NULLPTR));
        pushButtonHledat->setText(QApplication::translate("DialogVypujcka", "Hledat v\303\275p\305\257j\304\215ku podle...", Q_NULLPTR));
        pushButtonVsechny->setText(QApplication::translate("DialogVypujcka", "V\303\275pis v\305\241ech v\303\275p\305\257j\304\215ek", Q_NULLPTR));
        pushButtonSmazat->setText(QApplication::translate("DialogVypujcka", "Smazat", Q_NULLPTR));
        pushButtonupravit->setText(QApplication::translate("DialogVypujcka", "Vr\303\241ceno", Q_NULLPTR));
        pushButtonNovaVypujcka->setText(QApplication::translate("DialogVypujcka", "    Nov\303\241 v\303\275p\305\257j\304\215ka      ", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        radioButton->setText(QApplication::translate("DialogVypujcka", "Nevr\303\241cen\303\251 knihy", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("DialogVypujcka", "Vr\303\241cen\303\251 knihy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogVypujcka: public Ui_DialogVypujcka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVYPUJCKA_H
