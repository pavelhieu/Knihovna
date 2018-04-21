/********************************************************************************
** Form generated from reading UI file 'dialogzaci.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGZACI_H
#define UI_DIALOGZACI_H

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

class Ui_DialogZaci
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonUpravit;
    QTableView *tableView;
    QPushButton *pushButtonSmazatZak;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonVsechny;
    QPushButton *pushButtonHledat;
    QPushButton *pushButtonPridatZak;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogZaci)
    {
        if (DialogZaci->objectName().isEmpty())
            DialogZaci->setObjectName(QStringLiteral("DialogZaci"));
        DialogZaci->resize(1029, 629);
        DialogZaci->setStyleSheet(QLatin1String("#DialogZaci {\n"
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
"#pushButtonPridatZak{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonSmazatZak{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonUpravit{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        gridLayout = new QGridLayout(DialogZaci);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonUpravit = new QPushButton(DialogZaci);
        pushButtonUpravit->setObjectName(QStringLiteral("pushButtonUpravit"));
        pushButtonUpravit->setMinimumSize(QSize(350, 40));
        pushButtonUpravit->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButtonUpravit->setFont(font);
        pushButtonUpravit->setStyleSheet(QLatin1String("#pushButtonUpravit{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonUpravit, 4, 2, 1, 1);

        tableView = new QTableView(DialogZaci);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 6, 0, 1, 6);

        pushButtonSmazatZak = new QPushButton(DialogZaci);
        pushButtonSmazatZak->setObjectName(QStringLiteral("pushButtonSmazatZak"));
        pushButtonSmazatZak->setMinimumSize(QSize(350, 40));
        pushButtonSmazatZak->setMaximumSize(QSize(350, 40));
        pushButtonSmazatZak->setFont(font);
        pushButtonSmazatZak->setStyleSheet(QLatin1String("#pushButtonSmazatZak{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonSmazatZak, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButtonVsechny = new QPushButton(DialogZaci);
        pushButtonVsechny->setObjectName(QStringLiteral("pushButtonVsechny"));
        pushButtonVsechny->setMinimumSize(QSize(350, 40));
        pushButtonVsechny->setMaximumSize(QSize(350, 40));
        pushButtonVsechny->setFont(font);
        pushButtonVsechny->setStyleSheet(QLatin1String("#pushButtonVsechny{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVsechny, 1, 1, 1, 1);

        pushButtonHledat = new QPushButton(DialogZaci);
        pushButtonHledat->setObjectName(QStringLiteral("pushButtonHledat"));
        pushButtonHledat->setMinimumSize(QSize(350, 40));
        pushButtonHledat->setMaximumSize(QSize(350, 40));
        pushButtonHledat->setFont(font);
        pushButtonHledat->setStyleSheet(QLatin1String("#pushButtonHledat{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonHledat, 1, 2, 1, 1);

        pushButtonPridatZak = new QPushButton(DialogZaci);
        pushButtonPridatZak->setObjectName(QStringLiteral("pushButtonPridatZak"));
        pushButtonPridatZak->setMinimumSize(QSize(350, 40));
        pushButtonPridatZak->setMaximumSize(QSize(350, 40));
        pushButtonPridatZak->setFont(font);
        pushButtonPridatZak->setStyleSheet(QLatin1String("#pushButtonPridatZak{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonPridatZak, 2, 1, 1, 1);

        label = new QLabel(DialogZaci);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


        retranslateUi(DialogZaci);

        QMetaObject::connectSlotsByName(DialogZaci);
    } // setupUi

    void retranslateUi(QDialog *DialogZaci)
    {
        DialogZaci->setWindowTitle(QApplication::translate("DialogZaci", "Zaci", Q_NULLPTR));
        pushButtonUpravit->setText(QApplication::translate("DialogZaci", "         V\303\275p\305\257j\304\215ka                  ", Q_NULLPTR));
        pushButtonSmazatZak->setText(QApplication::translate("DialogZaci", "        Smazat \305\276\303\241ka               ", Q_NULLPTR));
        pushButtonVsechny->setText(QApplication::translate("DialogZaci", "  V\303\275pis v\305\241ech \305\276\303\241k\305\257", Q_NULLPTR));
        pushButtonHledat->setText(QApplication::translate("DialogZaci", "Hledat \305\276\303\241ka podle p\305\231\303\255jmen\303\255", Q_NULLPTR));
        pushButtonPridatZak->setText(QApplication::translate("DialogZaci", "      P\305\231idat \305\276\303\241ka   ", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogZaci: public Ui_DialogZaci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGZACI_H
