/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonZaci;
    QLabel *labelLogo;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButtonKnihy;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUcitel;
    QLabel *label_2;
    QPushButton *pushButtonVypujckaUcitel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(650, 750);
        MainWindow->setMinimumSize(QSize(650, 750));
        MainWindow->setMaximumSize(QSize(650, 750));
        MainWindow->setStyleSheet(QLatin1String("#MainWindow {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#centralWidget {\n"
"background: rgb(204,229,250);\n"
"}\n"
"#label_2{\n"
"background: rgb(204,229,250);\n"
"}\n"
"#pushButtonKnihy{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButton{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"color: rgb(0,76,153);\n"
"}\n"
"#pushButtonZaci{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonUcitel{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButton_5{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#pushButtonVypujckaUcitel\n"
"{\n"
"background: rgb(235,235,235);\n"
"border-radius : 20px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"#textBrowser{\n"
"background: rgb(242,242,242);\n"
"border"
                        "-radius : 10px;\n"
"border : 3px solid rgb( 0,76,153);\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("#textBrowser{\n"
"color: rgb(153,0,0);\n"
"}"));

        gridLayout->addWidget(textBrowser, 11, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 9, 1, 1);

        pushButtonZaci = new QPushButton(centralWidget);
        pushButtonZaci->setObjectName(QStringLiteral("pushButtonZaci"));
        pushButtonZaci->setMinimumSize(QSize(350, 40));
        pushButtonZaci->setMaximumSize(QSize(350, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButtonZaci->setFont(font);
        pushButtonZaci->setStyleSheet(QLatin1String("#pushButtonZaci{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonZaci, 4, 2, 1, 1);

        labelLogo = new QLabel(centralWidget);
        labelLogo->setObjectName(QStringLiteral("labelLogo"));

        gridLayout->addWidget(labelLogo, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(150, 100));
        label->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell Extra Bold"));
        font1.setPointSize(37);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("#label{\n"
"color: rgb(0,76,153);\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(350, 40));
        pushButton_5->setMaximumSize(QSize(350, 40));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButton_5, 5, 2, 1, 1);

        pushButtonKnihy = new QPushButton(centralWidget);
        pushButtonKnihy->setObjectName(QStringLiteral("pushButtonKnihy"));
        pushButtonKnihy->setMinimumSize(QSize(350, 40));
        pushButtonKnihy->setMaximumSize(QSize(350, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButtonKnihy->setFont(font2);
        pushButtonKnihy->setLayoutDirection(Qt::LeftToRight);
        pushButtonKnihy->setStyleSheet(QLatin1String("#pushButtonKnihy{\n"
"color: rgb(0,67,134)\n"
"}"));
        pushButtonKnihy->setFlat(true);

        gridLayout->addWidget(pushButtonKnihy, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButtonUcitel = new QPushButton(centralWidget);
        pushButtonUcitel->setObjectName(QStringLiteral("pushButtonUcitel"));
        pushButtonUcitel->setMinimumSize(QSize(350, 40));
        pushButtonUcitel->setMaximumSize(QSize(350, 40));
        pushButtonUcitel->setFont(font);
        pushButtonUcitel->setStyleSheet(QLatin1String("#pushButtonUcitel{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonUcitel, 7, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 35));
        label_2->setMaximumSize(QSize(40, 35));

        gridLayout->addWidget(label_2, 10, 2, 1, 1);

        pushButtonVypujckaUcitel = new QPushButton(centralWidget);
        pushButtonVypujckaUcitel->setObjectName(QStringLiteral("pushButtonVypujckaUcitel"));
        pushButtonVypujckaUcitel->setMinimumSize(QSize(350, 40));
        pushButtonVypujckaUcitel->setMaximumSize(QSize(350, 40));
        pushButtonVypujckaUcitel->setFont(font);
        pushButtonVypujckaUcitel->setStyleSheet(QLatin1String("#pushButtonVypujckaUcitel{\n"
"color: rgb(0,67,134)\n"
"}"));

        gridLayout->addWidget(pushButtonVypujckaUcitel, 8, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Knihovna", Q_NULLPTR));
        pushButtonZaci->setText(QApplication::translate("MainWindow", "          Studenti             ", Q_NULLPTR));
        labelLogo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Knihovna", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "      V\303\275p\305\257j\304\215ka student\305\257", Q_NULLPTR));
        pushButtonKnihy->setText(QApplication::translate("MainWindow", "            Knihy                ", Q_NULLPTR));
        pushButtonUcitel->setText(QApplication::translate("MainWindow", "           U\304\215itel\303\251               ", Q_NULLPTR));
        label_2->setText(QString());
        pushButtonVypujckaUcitel->setText(QApplication::translate("MainWindow", "      V\303\275p\305\257j\304\215ka vyu\304\215uj\303\255c\303\255 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
