/********************************************************************************
** Form generated from reading UI file 'plusucitelvypujcka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSUCITELVYPUJCKA_H
#define UI_PLUSUCITELVYPUJCKA_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PlusUcitelVypujcka
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonDatumVypujcky;
    QLineEdit *lineEditPoznamka;
    QLabel *label;
    QCheckBox *checkBox;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QLabel *labelDatum;
    QLabel *label_3;
    QPushButton *pushButtonLhuta;
    QPushButton *pushButtonDatumVraceni;
    QSpinBox *spinBoxIdKnihy;
    QLineEdit *lineEditNazevKnihy;
    QSpinBox *spinBoxIdUcitel;
    QLineEdit *lineEditJmenoUcitel;

    void setupUi(QDialog *PlusUcitelVypujcka)
    {
        if (PlusUcitelVypujcka->objectName().isEmpty())
            PlusUcitelVypujcka->setObjectName(QStringLiteral("PlusUcitelVypujcka"));
        PlusUcitelVypujcka->resize(509, 234);
        PlusUcitelVypujcka->setStyleSheet(QLatin1String("#PlusUcitelVypujcka {\n"
"background: rgb(204,229,250);\n"
"}\n"
"\n"
"#lineEditJmenoUcitel{\n"
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
"border-radius : 15px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonDatumVypujcky{\n"
"background: rgb(235,235,235);\n"
"border-radius : 15px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonLhuta{\n"
"background: rgb(235,235,235);\n"
"border-radius : 15px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#spinBoxIdKnihy{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#spinBoxIdUcitel{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#checkBox{\n"
"background: rgb(204,229,250);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(PlusUcitelVypujcka);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonDatumVypujcky = new QPushButton(PlusUcitelVypujcka);
        pushButtonDatumVypujcky->setObjectName(QStringLiteral("pushButtonDatumVypujcky"));
        pushButtonDatumVypujcky->setMinimumSize(QSize(130, 30));
        pushButtonDatumVypujcky->setMaximumSize(QSize(130, 30));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButtonDatumVypujcky->setFont(font);
        pushButtonDatumVypujcky->setStyleSheet(QLatin1String("#pushButtonDatumVypujcky{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonDatumVypujcky, 4, 0, 1, 1);

        lineEditPoznamka = new QLineEdit(PlusUcitelVypujcka);
        lineEditPoznamka->setObjectName(QStringLiteral("lineEditPoznamka"));
        QFont font1;
        font1.setPointSize(9);
        lineEditPoznamka->setFont(font1);

        gridLayout->addWidget(lineEditPoznamka, 3, 3, 1, 1);

        label = new QLabel(PlusUcitelVypujcka);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        checkBox = new QCheckBox(PlusUcitelVypujcka);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 3, 1, 1, 1);

        label_2 = new QLabel(PlusUcitelVypujcka);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PlusUcitelVypujcka);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 3, 1, 1);

        labelDatum = new QLabel(PlusUcitelVypujcka);
        labelDatum->setObjectName(QStringLiteral("labelDatum"));
        labelDatum->setFont(font);
        labelDatum->setStyleSheet(QLatin1String("#labelDatum{\n"
"color: rgb(0,67,134)\n"
"}"));
        labelDatum->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDatum, 4, 3, 1, 1);

        label_3 = new QLabel(PlusUcitelVypujcka);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        pushButtonLhuta = new QPushButton(PlusUcitelVypujcka);
        pushButtonLhuta->setObjectName(QStringLiteral("pushButtonLhuta"));
        pushButtonLhuta->setMinimumSize(QSize(130, 30));
        pushButtonLhuta->setMaximumSize(QSize(130, 30));
        pushButtonLhuta->setFont(font);
        pushButtonLhuta->setStyleSheet(QLatin1String("#pushButtonLhuta\n"
"{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonLhuta, 4, 1, 1, 1);

        pushButtonDatumVraceni = new QPushButton(PlusUcitelVypujcka);
        pushButtonDatumVraceni->setObjectName(QStringLiteral("pushButtonDatumVraceni"));
        pushButtonDatumVraceni->setMinimumSize(QSize(130, 30));
        pushButtonDatumVraceni->setMaximumSize(QSize(130, 30));
        pushButtonDatumVraceni->setFont(font);
        pushButtonDatumVraceni->setStyleSheet(QLatin1String("#pushButtonDatumVraceni\n"
"{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonDatumVraceni, 5, 0, 1, 1);

        spinBoxIdKnihy = new QSpinBox(PlusUcitelVypujcka);
        spinBoxIdKnihy->setObjectName(QStringLiteral("spinBoxIdKnihy"));
        spinBoxIdKnihy->setFont(font1);
        spinBoxIdKnihy->setMaximum(999999999);

        gridLayout->addWidget(spinBoxIdKnihy, 0, 1, 1, 1);

        lineEditNazevKnihy = new QLineEdit(PlusUcitelVypujcka);
        lineEditNazevKnihy->setObjectName(QStringLiteral("lineEditNazevKnihy"));
        lineEditNazevKnihy->setFont(font1);

        gridLayout->addWidget(lineEditNazevKnihy, 0, 3, 1, 1);

        spinBoxIdUcitel = new QSpinBox(PlusUcitelVypujcka);
        spinBoxIdUcitel->setObjectName(QStringLiteral("spinBoxIdUcitel"));
        spinBoxIdUcitel->setFont(font1);
        spinBoxIdUcitel->setMaximum(999999999);

        gridLayout->addWidget(spinBoxIdUcitel, 2, 1, 1, 1);

        lineEditJmenoUcitel = new QLineEdit(PlusUcitelVypujcka);
        lineEditJmenoUcitel->setObjectName(QStringLiteral("lineEditJmenoUcitel"));
        lineEditJmenoUcitel->setFont(font1);

        gridLayout->addWidget(lineEditJmenoUcitel, 2, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(PlusUcitelVypujcka);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlusUcitelVypujcka, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlusUcitelVypujcka, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlusUcitelVypujcka);
    } // setupUi

    void retranslateUi(QDialog *PlusUcitelVypujcka)
    {
        PlusUcitelVypujcka->setWindowTitle(QApplication::translate("PlusUcitelVypujcka", "P\305\231idat v\303\275p\305\257j\304\215ku", Q_NULLPTR));
        pushButtonDatumVypujcky->setText(QApplication::translate("PlusUcitelVypujcka", "Datum v\303\275p\305\257j\304\215ky", Q_NULLPTR));
        label->setText(QApplication::translate("PlusUcitelVypujcka", "\304\214\303\255slo vyu\304\215uj\303\255c\303\255", Q_NULLPTR));
        checkBox->setText(QString());
        label_2->setText(QApplication::translate("PlusUcitelVypujcka", "Vr\303\241ceno", Q_NULLPTR));
        labelDatum->setText(QApplication::translate("PlusUcitelVypujcka", "Dneska je ", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlusUcitelVypujcka", "\304\214\303\255slo knihy", Q_NULLPTR));
        pushButtonLhuta->setText(QApplication::translate("PlusUcitelVypujcka", "Lh\305\257ta v\303\275p\305\257j\304\215ky", Q_NULLPTR));
        pushButtonDatumVraceni->setText(QApplication::translate("PlusUcitelVypujcka", "Datum vr\303\241cen\303\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlusUcitelVypujcka: public Ui_PlusUcitelVypujcka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSUCITELVYPUJCKA_H
