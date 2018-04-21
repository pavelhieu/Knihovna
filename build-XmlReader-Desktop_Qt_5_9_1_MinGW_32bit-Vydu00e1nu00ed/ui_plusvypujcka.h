/********************************************************************************
** Form generated from reading UI file 'plusvypujcka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSVYPUJCKA_H
#define UI_PLUSVYPUJCKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PlusVypujcka
{
public:
    QGridLayout *gridLayout;
    QLabel *labelAktualniDatum;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QCheckBox *checkBoxVraceno;
    QLabel *label;
    QPushButton *pushButtonDatumVypujcky;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QPushButton *pushButtonLhuta;
    QPushButton *pushButtonDatumVraceni;
    QSpinBox *spinBoxIdKnihy;
    QSpinBox *spinBoxIdZaka;
    QLineEdit *lineEditNazevKnihy;
    QLineEdit *lineEditJmenoZaka;
    QLineEdit *lineEditPoznamka;

    void setupUi(QDialog *PlusVypujcka)
    {
        if (PlusVypujcka->objectName().isEmpty())
            PlusVypujcka->setObjectName(QStringLiteral("PlusVypujcka"));
        PlusVypujcka->resize(510, 236);
        PlusVypujcka->setStyleSheet(QLatin1String("#PlusVypujcka {\n"
"background: rgb(204,229,250);\n"
"}\n"
"\n"
"#lineEditJmenoZaka{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditNazevKnihy{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditPoznamka{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#pushButtonDatumVraceni{\n"
"background: rgb(235,235,235);\n"
"border-radius : 10px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonDatumVypujcky{\n"
"background: rgb(235,235,235);\n"
"border-radius : 10px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#spinBoxIdKnihy{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#spinBoxIdZaka{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#checkBoxVraceno{\n"
"background: rgb(204,229,250);\n"
"}\n"
"\n"
"#pushButtonLhuta{\n"
"background: rgb(235,235,235);\n"
"border-radius : 10px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(PlusVypujcka);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelAktualniDatum = new QLabel(PlusVypujcka);
        labelAktualniDatum->setObjectName(QStringLiteral("labelAktualniDatum"));
        QFont font;
        font.setPointSize(9);
        labelAktualniDatum->setFont(font);
        labelAktualniDatum->setStyleSheet(QLatin1String("#labelAktualniDatum{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(labelAktualniDatum, 8, 3, 1, 1);

        buttonBox = new QDialogButtonBox(PlusVypujcka);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 14, 3, 1, 1);

        label_2 = new QLabel(PlusVypujcka);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        checkBoxVraceno = new QCheckBox(PlusVypujcka);
        checkBoxVraceno->setObjectName(QStringLiteral("checkBoxVraceno"));

        gridLayout->addWidget(checkBoxVraceno, 6, 1, 1, 1);

        label = new QLabel(PlusVypujcka);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        pushButtonDatumVypujcky = new QPushButton(PlusVypujcka);
        pushButtonDatumVypujcky->setObjectName(QStringLiteral("pushButtonDatumVypujcky"));
        pushButtonDatumVypujcky->setMinimumSize(QSize(130, 30));
        pushButtonDatumVypujcky->setMaximumSize(QSize(130, 30));
        pushButtonDatumVypujcky->setFont(font1);

        gridLayout->addWidget(pushButtonDatumVypujcky, 8, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 13, 4, 1, 1);

        label_3 = new QLabel(PlusVypujcka);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        pushButtonLhuta = new QPushButton(PlusVypujcka);
        pushButtonLhuta->setObjectName(QStringLiteral("pushButtonLhuta"));
        pushButtonLhuta->setMinimumSize(QSize(130, 30));
        pushButtonLhuta->setMaximumSize(QSize(131, 30));
        pushButtonLhuta->setFont(font1);

        gridLayout->addWidget(pushButtonLhuta, 8, 1, 1, 1);

        pushButtonDatumVraceni = new QPushButton(PlusVypujcka);
        pushButtonDatumVraceni->setObjectName(QStringLiteral("pushButtonDatumVraceni"));
        pushButtonDatumVraceni->setMinimumSize(QSize(130, 30));
        pushButtonDatumVraceni->setMaximumSize(QSize(130, 30));
        pushButtonDatumVraceni->setFont(font1);

        gridLayout->addWidget(pushButtonDatumVraceni, 13, 0, 1, 1);

        spinBoxIdKnihy = new QSpinBox(PlusVypujcka);
        spinBoxIdKnihy->setObjectName(QStringLiteral("spinBoxIdKnihy"));
        spinBoxIdKnihy->setFont(font);
        spinBoxIdKnihy->setMaximum(999999999);

        gridLayout->addWidget(spinBoxIdKnihy, 2, 1, 1, 1);

        spinBoxIdZaka = new QSpinBox(PlusVypujcka);
        spinBoxIdZaka->setObjectName(QStringLiteral("spinBoxIdZaka"));
        QFont font2;
        font2.setPointSize(10);
        spinBoxIdZaka->setFont(font2);
        spinBoxIdZaka->setMaximum(999999999);

        gridLayout->addWidget(spinBoxIdZaka, 4, 1, 1, 1);

        lineEditNazevKnihy = new QLineEdit(PlusVypujcka);
        lineEditNazevKnihy->setObjectName(QStringLiteral("lineEditNazevKnihy"));
        lineEditNazevKnihy->setFont(font);

        gridLayout->addWidget(lineEditNazevKnihy, 2, 3, 1, 2);

        lineEditJmenoZaka = new QLineEdit(PlusVypujcka);
        lineEditJmenoZaka->setObjectName(QStringLiteral("lineEditJmenoZaka"));
        lineEditJmenoZaka->setFont(font);

        gridLayout->addWidget(lineEditJmenoZaka, 4, 3, 1, 2);

        lineEditPoznamka = new QLineEdit(PlusVypujcka);
        lineEditPoznamka->setObjectName(QStringLiteral("lineEditPoznamka"));
        lineEditPoznamka->setFont(font);

        gridLayout->addWidget(lineEditPoznamka, 6, 3, 1, 2);


        retranslateUi(PlusVypujcka);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlusVypujcka, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlusVypujcka, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlusVypujcka);
    } // setupUi

    void retranslateUi(QDialog *PlusVypujcka)
    {
        PlusVypujcka->setWindowTitle(QApplication::translate("PlusVypujcka", "P\305\231idat v\303\275p\305\257j\304\215ku", Q_NULLPTR));
        labelAktualniDatum->setText(QString());
        label_2->setText(QApplication::translate("PlusVypujcka", "\304\214\303\255slo \305\276\303\241ka", Q_NULLPTR));
        checkBoxVraceno->setText(QString());
        label->setText(QApplication::translate("PlusVypujcka", "\304\214\303\255slo knihy", Q_NULLPTR));
        pushButtonDatumVypujcky->setText(QApplication::translate("PlusVypujcka", "Datum v\303\275p\305\257j\304\215ky", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlusVypujcka", "Vr\303\241ceno", Q_NULLPTR));
        pushButtonLhuta->setText(QApplication::translate("PlusVypujcka", "Lh\305\257ta v\303\275p\305\257j\304\215ky", Q_NULLPTR));
        pushButtonDatumVraceni->setText(QApplication::translate("PlusVypujcka", "Datum vracen\303\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlusVypujcka: public Ui_PlusVypujcka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSVYPUJCKA_H
