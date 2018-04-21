/********************************************************************************
** Form generated from reading UI file 'pridatknihu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIDATKNIHU_H
#define UI_PRIDATKNIHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PridatKnihu
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QRadioButton *radioButtonKniha;
    QRadioButton *radioButtonCD;
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBoxEvidencniCislo;
    QLineEdit *lineEditNazevKnihy;
    QLineEdit *lineEditAutor1;
    QLineEdit *lineEditAutor2;
    QLineEdit *lineEditMisto;
    QSpinBox *spinBoxRok;
    QLineEdit *lineEditTematika;
    QLineEdit *lineEditCena;
    QSpinBox *spinBoxStrana;

    void setupUi(QDialog *PridatKnihu)
    {
        if (PridatKnihu->objectName().isEmpty())
            PridatKnihu->setObjectName(QStringLiteral("PridatKnihu"));
        PridatKnihu->resize(500, 400);
        PridatKnihu->setMinimumSize(QSize(500, 400));
        PridatKnihu->setMaximumSize(QSize(500, 400));
        PridatKnihu->setStyleSheet(QLatin1String("#PridatKnihu {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#lineEditAutor1{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditAutor2{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditCena{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditMisto{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditNazevKnihy{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditTematika{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#spinBoxEvidencniCislo{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#spinBoxRok{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#spinBoxStrana{\n"
"background: rgb(235,235,235);\n"
"}\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(PridatKnihu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(PridatKnihu);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("#label_7{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label = new QLabel(PridatKnihu);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(PridatKnihu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(PridatKnihu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(PridatKnihu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_9 = new QLabel(PridatKnihu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("#label_9{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_5 = new QLabel(PridatKnihu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("#label_5{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_8 = new QLabel(PridatKnihu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("#label_8{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_6 = new QLabel(PridatKnihu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("#label_6{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        radioButtonKniha = new QRadioButton(PridatKnihu);
        radioButtonKniha->setObjectName(QStringLiteral("radioButtonKniha"));
        radioButtonKniha->setFont(font);
        radioButtonKniha->setStyleSheet(QLatin1String("#radioButtonKniha{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButtonKniha, 0, 2, 1, 1);

        radioButtonCD = new QRadioButton(PridatKnihu);
        radioButtonCD->setObjectName(QStringLiteral("radioButtonCD"));
        radioButtonCD->setFont(font);
        radioButtonCD->setStyleSheet(QLatin1String("#radioButtonCD{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(radioButtonCD, 0, 3, 1, 1);

        buttonBox = new QDialogButtonBox(PridatKnihu);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 3, 1, 1);

        spinBoxEvidencniCislo = new QSpinBox(PridatKnihu);
        spinBoxEvidencniCislo->setObjectName(QStringLiteral("spinBoxEvidencniCislo"));
        spinBoxEvidencniCislo->setMinimumSize(QSize(100, 25));
        spinBoxEvidencniCislo->setMaximumSize(QSize(100, 25));
        QFont font1;
        font1.setPointSize(9);
        spinBoxEvidencniCislo->setFont(font1);
        spinBoxEvidencniCislo->setMaximum(999999999);

        gridLayout->addWidget(spinBoxEvidencniCislo, 0, 1, 1, 1);

        lineEditNazevKnihy = new QLineEdit(PridatKnihu);
        lineEditNazevKnihy->setObjectName(QStringLiteral("lineEditNazevKnihy"));
        lineEditNazevKnihy->setMinimumSize(QSize(350, 0));
        lineEditNazevKnihy->setMaximumSize(QSize(350, 16777215));
        lineEditNazevKnihy->setFont(font1);

        gridLayout->addWidget(lineEditNazevKnihy, 1, 1, 1, 1);

        lineEditAutor1 = new QLineEdit(PridatKnihu);
        lineEditAutor1->setObjectName(QStringLiteral("lineEditAutor1"));
        lineEditAutor1->setMinimumSize(QSize(350, 0));
        lineEditAutor1->setMaximumSize(QSize(350, 16777215));
        lineEditAutor1->setSizeIncrement(QSize(350, 0));
        lineEditAutor1->setFont(font1);

        gridLayout->addWidget(lineEditAutor1, 2, 1, 1, 1);

        lineEditAutor2 = new QLineEdit(PridatKnihu);
        lineEditAutor2->setObjectName(QStringLiteral("lineEditAutor2"));
        lineEditAutor2->setMinimumSize(QSize(350, 0));
        lineEditAutor2->setMaximumSize(QSize(350, 16777215));
        lineEditAutor2->setFont(font1);

        gridLayout->addWidget(lineEditAutor2, 3, 1, 1, 1);

        lineEditMisto = new QLineEdit(PridatKnihu);
        lineEditMisto->setObjectName(QStringLiteral("lineEditMisto"));
        lineEditMisto->setMinimumSize(QSize(350, 0));
        lineEditMisto->setMaximumSize(QSize(350, 16777215));
        lineEditMisto->setFont(font1);

        gridLayout->addWidget(lineEditMisto, 4, 1, 1, 1);

        spinBoxRok = new QSpinBox(PridatKnihu);
        spinBoxRok->setObjectName(QStringLiteral("spinBoxRok"));
        spinBoxRok->setMinimumSize(QSize(100, 25));
        spinBoxRok->setMaximumSize(QSize(100, 25));
        spinBoxRok->setFont(font1);
        spinBoxRok->setMaximum(999999999);

        gridLayout->addWidget(spinBoxRok, 5, 1, 1, 1);

        lineEditTematika = new QLineEdit(PridatKnihu);
        lineEditTematika->setObjectName(QStringLiteral("lineEditTematika"));
        lineEditTematika->setMinimumSize(QSize(350, 0));
        lineEditTematika->setMaximumSize(QSize(350, 16777215));
        lineEditTematika->setSizeIncrement(QSize(350, 0));
        lineEditTematika->setFont(font1);

        gridLayout->addWidget(lineEditTematika, 6, 1, 1, 1);

        lineEditCena = new QLineEdit(PridatKnihu);
        lineEditCena->setObjectName(QStringLiteral("lineEditCena"));
        lineEditCena->setMinimumSize(QSize(350, 0));
        lineEditCena->setMaximumSize(QSize(350, 16777215));
        lineEditCena->setFont(font1);

        gridLayout->addWidget(lineEditCena, 7, 1, 1, 1);

        spinBoxStrana = new QSpinBox(PridatKnihu);
        spinBoxStrana->setObjectName(QStringLiteral("spinBoxStrana"));
        spinBoxStrana->setMinimumSize(QSize(100, 25));
        spinBoxStrana->setMaximumSize(QSize(100, 25));
        spinBoxStrana->setFont(font1);
        spinBoxStrana->setMaximum(999999999);

        gridLayout->addWidget(spinBoxStrana, 8, 1, 1, 1);


        retranslateUi(PridatKnihu);
        QObject::connect(buttonBox, SIGNAL(rejected()), PridatKnihu, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), PridatKnihu, SLOT(accept()));

        QMetaObject::connectSlotsByName(PridatKnihu);
    } // setupUi

    void retranslateUi(QDialog *PridatKnihu)
    {
        PridatKnihu->setWindowTitle(QApplication::translate("PridatKnihu", "P\305\231idat knihu", Q_NULLPTR));
        label_7->setText(QApplication::translate("PridatKnihu", "T\303\251matika", Q_NULLPTR));
        label->setText(QApplication::translate("PridatKnihu", "Evdiden\304\215n\303\255 \304\215\303\255slo", Q_NULLPTR));
        label_2->setText(QApplication::translate("PridatKnihu", "N\303\241zev knihy", Q_NULLPTR));
        label_4->setText(QApplication::translate("PridatKnihu", "Autor2", Q_NULLPTR));
        label_3->setText(QApplication::translate("PridatKnihu", "Autor 1", Q_NULLPTR));
        label_9->setText(QApplication::translate("PridatKnihu", "Po\304\215et stran", Q_NULLPTR));
        label_5->setText(QApplication::translate("PridatKnihu", "Nakladatelstv\303\255", Q_NULLPTR));
        label_8->setText(QApplication::translate("PridatKnihu", "Cena", Q_NULLPTR));
        label_6->setText(QApplication::translate("PridatKnihu", "Rok vyd\303\241n\303\255", Q_NULLPTR));
        radioButtonKniha->setText(QApplication::translate("PridatKnihu", "Kniha", Q_NULLPTR));
        radioButtonCD->setText(QApplication::translate("PridatKnihu", "CD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PridatKnihu: public Ui_PridatKnihu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIDATKNIHU_H
