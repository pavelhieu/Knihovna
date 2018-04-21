/********************************************************************************
** Form generated from reading UI file 'pluszak.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSZAK_H
#define UI_PLUSZAK_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PlusZak
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEditJmenoZak;
    QLineEdit *lineEditTridaZak;
    QSpinBox *spinBox;

    void setupUi(QDialog *PlusZak)
    {
        if (PlusZak->objectName().isEmpty())
            PlusZak->setObjectName(QStringLiteral("PlusZak"));
        PlusZak->resize(400, 300);
        PlusZak->setMinimumSize(QSize(400, 300));
        PlusZak->setMaximumSize(QSize(400, 300));
        QFont font;
        font.setPointSize(8);
        PlusZak->setFont(font);
        PlusZak->setStyleSheet(QLatin1String("#PlusZak {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#lineEditJmenoZak{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditPrijemniZak{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditTridaZak{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditRokNastup{\n"
"background: rgb(235,235,235);\n"
"}"));
        gridLayout = new QGridLayout(PlusZak);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(PlusZak);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(PlusZak);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PlusZak);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);

        label = new QLabel(PlusZak);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditJmenoZak = new QLineEdit(PlusZak);
        lineEditJmenoZak->setObjectName(QStringLiteral("lineEditJmenoZak"));

        gridLayout->addWidget(lineEditJmenoZak, 0, 1, 1, 1);

        lineEditTridaZak = new QLineEdit(PlusZak);
        lineEditTridaZak->setObjectName(QStringLiteral("lineEditTridaZak"));

        gridLayout->addWidget(lineEditTridaZak, 1, 1, 1, 1);

        spinBox = new QSpinBox(PlusZak);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);


        retranslateUi(PlusZak);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlusZak, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlusZak, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlusZak);
    } // setupUi

    void retranslateUi(QDialog *PlusZak)
    {
        PlusZak->setWindowTitle(QApplication::translate("PlusZak", "P\305\231idat \305\276\303\241ka", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlusZak", "T\305\231\303\255da", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlusZak", "Jm\303\251no a p\305\231\303\255jmen\303\255", Q_NULLPTR));
        label->setText(QApplication::translate("PlusZak", "Rok n\303\241stupu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlusZak: public Ui_PlusZak {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSZAK_H
