#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QDomElement>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDialog>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QString type;
    QString cislo;
    QString nazev;
    QString autor_1_prijmeni;
    QString autor_1_jmeno;
    QString autor_2_prijmeni;
    QString autor_2_jmeno;
    QString misto_vydani;
    int rok_vydani;
    QString tematicka_zkratka;
    QString tematicka_nazev;
    QString cena;
    int pocet_stran;
    int pocet;

    QDomElement e;
    QSqlTableModel *model_knihy;

    QSqlDatabase db;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void readerXML();
    void vypisDebug();
    void attributy();
    void pridaniDoDatabazi();
    void setIcon();
    void upozorneni();
    void upozorneni2();

private slots:


    void on_pushButtonKnihy_clicked();

    void on_pushButtonZaci_clicked();

    void on_pushButtonUcitel_clicked();

    void on_pushButton_5_clicked();

    void on_pushButtonVypujckaUcitel_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
