/********************************************************************************
** Form generated from reading UI file 'dialogucitele.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUCITELE_H
#define UI_DIALOGUCITELE_H

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

class Ui_DialogUcitele
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonHledat;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSmazatVyucujici;
    QPushButton *pushButtonVsechny;
    QPushButton *pushButtonPridatVyucujici;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonUpravit;
    QLabel *label;

    void setupUi(QDialog *DialogUcitele)
    {
        if (DialogUcitele->objectName().isEmpty())
            DialogUcitele->setObjectName(QStringLiteral("DialogUcitele"));
        DialogUcitele->resize(843, 615);
        DialogUcitele->setStyleSheet(QLatin1String("#DialogUcitele{\n"
"background: rgb(204,229,250);\n"
"}\n"
"#pushButtonHledat{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVsechny{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonPridatVyucujici{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonSmazatVyucujici\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
"#pushButtonUpravit\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(DialogUcitele);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        pushButtonHledat = new QPushButton(DialogUcitele);
        pushButtonHledat->setObjectName(QStringLiteral("pushButtonHledat"));
        pushButtonHledat->setMinimumSize(QSize(350, 40));
        pushButtonHledat->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButtonHledat->setFont(font);
        pushButtonHledat->setStyleSheet(QLatin1String("#pushButtonHledat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonHledat, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButtonSmazatVyucujici = new QPushButton(DialogUcitele);
        pushButtonSmazatVyucujici->setObjectName(QStringLiteral("pushButtonSmazatVyucujici"));
        pushButtonSmazatVyucujici->setMinimumSize(QSize(350, 40));
        pushButtonSmazatVyucujici->setMaximumSize(QSize(350, 40));
        pushButtonSmazatVyucujici->setFont(font);
        pushButtonSmazatVyucujici->setStyleSheet(QLatin1String("#pushButtonSmazatVyucujici{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonSmazatVyucujici, 2, 2, 1, 1);

        pushButtonVsechny = new QPushButton(DialogUcitele);
        pushButtonVsechny->setObjectName(QStringLiteral("pushButtonVsechny"));
        pushButtonVsechny->setMinimumSize(QSize(350, 40));
        pushButtonVsechny->setMaximumSize(QSize(350, 40));
        pushButtonVsechny->setFont(font);
        pushButtonVsechny->setStyleSheet(QLatin1String("#pushButtonVsechny{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVsechny, 1, 1, 1, 1);

        pushButtonPridatVyucujici = new QPushButton(DialogUcitele);
        pushButtonPridatVyucujici->setObjectName(QStringLiteral("pushButtonPridatVyucujici"));
        pushButtonPridatVyucujici->setMinimumSize(QSize(350, 40));
        pushButtonPridatVyucujici->setMaximumSize(QSize(350, 40));
        pushButtonPridatVyucujici->setFont(font);
        pushButtonPridatVyucujici->setStyleSheet(QLatin1String("#pushButtonPridatVyucujici{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonPridatVyucujici, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        tableView = new QTableView(DialogUcitele);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 4, 0, 1, 6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 0, 1, 1);

        pushButtonUpravit = new QPushButton(DialogUcitele);
        pushButtonUpravit->setObjectName(QStringLiteral("pushButtonUpravit"));
        pushButtonUpravit->setMinimumSize(QSize(350, 40));
        pushButtonUpravit->setMaximumSize(QSize(350, 40));
        pushButtonUpravit->setFont(font);
        pushButtonUpravit->setStyleSheet(QLatin1String("\n"
"#pushButtonUpravit\n"
"{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonUpravit, 3, 2, 1, 1);

        label = new QLabel(DialogUcitele);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 1, 1, 1);


        retranslateUi(DialogUcitele);

        QMetaObject::connectSlotsByName(DialogUcitele);
    } // setupUi

    void retranslateUi(QDialog *DialogUcitele)
    {
        DialogUcitele->setWindowTitle(QApplication::translate("DialogUcitele", "Ucitele", Q_NULLPTR));
        pushButtonHledat->setText(QApplication::translate("DialogUcitele", " Hledat vyu\304\215ujc\303\255 podle p\305\231\303\255jmen\303\255", Q_NULLPTR));
        pushButtonSmazatVyucujici->setText(QApplication::translate("DialogUcitele", "              Smazat               ", Q_NULLPTR));
        pushButtonVsechny->setText(QApplication::translate("DialogUcitele", "  V\303\275pis v\305\241ech vyu\304\215uj\303\255c\303\255ch", Q_NULLPTR));
        pushButtonPridatVyucujici->setText(QApplication::translate("DialogUcitele", "       P\305\231idat vyu\304\215uj\303\255c\303\255       ", Q_NULLPTR));
        pushButtonUpravit->setText(QApplication::translate("DialogUcitele", "            V\303\275p\305\257j\304\215ka             ", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogUcitele: public Ui_DialogUcitele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUCITELE_H
