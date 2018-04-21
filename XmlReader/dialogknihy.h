#ifndef DIALOGKNIHY_H
#define DIALOGKNIHY_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "mainwindow.h"

namespace Ui {
class DialogKnihy;
}

class DialogKnihy : public QDialog
{
    Q_OBJECT

public:
    explicit DialogKnihy(QWidget *parent = 0);
    ~DialogKnihy();
    QString nazev;
    int id_kniha;
    void defautlniTabulka();
public slots:
   void icon();

private slots:

    void on_pushButtonVsechny_clicked();

    void on_pushButtonHledat_clicked();

    void on_pushButtonPridatKnihu_clicked();

    void on_pushButtonSmazatKnihu_clicked();

    void on_pushButtonVypujcka_clicked();

    void on_pushButtonPridatNKrat_clicked();

private:
    Ui::DialogKnihy *ui;
    QSqlTableModel *model_knihy;
    QSqlDatabase db;
};

#endif // DIALOGKNIHY_H
