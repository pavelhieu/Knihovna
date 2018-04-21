/********************************************************************************
** Form generated from reading UI file 'plusucitel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSUCITEL_H
#define UI_PLUSUCITEL_H

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

QT_BEGIN_NAMESPACE

class Ui_PlusUcitel
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditJmenoUcitel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlusUcitel)
    {
        if (PlusUcitel->objectName().isEmpty())
            PlusUcitel->setObjectName(QStringLiteral("PlusUcitel"));
        PlusUcitel->resize(400, 200);
        PlusUcitel->setMinimumSize(QSize(400, 200));
        PlusUcitel->setMaximumSize(QSize(406, 200));
        PlusUcitel->setStyleSheet(QLatin1String("#PlusUcitel {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#lineEditJmenoUcitel{\n"
"background: rgb(235,235,235);\n"
"}\n"
"#lineEditPrijmeniUcitel{\n"
"background: rgb(235,235,235);\n"
"}"));
        gridLayout = new QGridLayout(PlusUcitel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PlusUcitel);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditJmenoUcitel = new QLineEdit(PlusUcitel);
        lineEditJmenoUcitel->setObjectName(QStringLiteral("lineEditJmenoUcitel"));
        lineEditJmenoUcitel->setMinimumSize(QSize(250, 25));
        lineEditJmenoUcitel->setMaximumSize(QSize(250, 25));
        QFont font1;
        font1.setPointSize(9);
        lineEditJmenoUcitel->setFont(font1);

        gridLayout->addWidget(lineEditJmenoUcitel, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PlusUcitel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QFont font2;
        font2.setPointSize(8);
        buttonBox->setFont(font2);
        buttonBox->setStyleSheet(QLatin1String("#buttonBox{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(PlusUcitel);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlusUcitel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlusUcitel, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlusUcitel);
    } // setupUi

    void retranslateUi(QDialog *PlusUcitel)
    {
        PlusUcitel->setWindowTitle(QApplication::translate("PlusUcitel", "P\305\231idat vyu\304\215uj\303\255c\303\255", Q_NULLPTR));
        label->setText(QApplication::translate("PlusUcitel", "Jm\303\251no a p\305\231\303\255jmen\303\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlusUcitel: public Ui_PlusUcitel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSUCITEL_H
