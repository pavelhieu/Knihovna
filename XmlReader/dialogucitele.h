#ifndef DIALOGUCITELE_H
#define DIALOGUCITELE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "mainwindow.h"


namespace Ui {
class DialogUcitele;
}

class DialogUcitele : public QDialog
{
    Q_OBJECT

public:
    explicit DialogUcitele(QWidget *parent = 0);
    ~DialogUcitele();
    QString jmeno;
    int id_ucitel;
    void defaultniView();

private slots:
    void on_pushButtonHledat_clicked();

    void on_pushButtonVsechny_clicked();

    void on_pushButtonPridatVyucujici_clicked();

    void on_pushButtonSmazatVyucujici_clicked();

    void on_pushButtonUpravit_clicked();
    void icon();

private:
    Ui::DialogUcitele *ui;
    QSqlTableModel *model_ucitele;
    QSqlDatabase db;
};

#endif // DIALOGUCITELE_H
