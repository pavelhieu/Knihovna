#ifndef PRIDATKNIHU_H
#define PRIDATKNIHU_H

#include <QDialog>
#include <QSqlDatabase>
#include "mainwindow.h"
#include <QSqlTableModel>

namespace Ui {
class PridatKnihu;
}

class PridatKnihu : public QDialog
{
    Q_OBJECT

public:
    explicit PridatKnihu(QWidget *parent = 0);
    ~PridatKnihu();
    int Id_kniha();
    QString NazevKnihy();
    QString Autor1();
    QString Autor2();
    QString MistoVydani();
    int RokVydani();
    QString Tematika();
    QString Cena();
    int PocetStran();


private slots:

    void on_radioButtonKniha_clicked();

    void on_radioButtonCD_clicked();
    void existujiciID();

private:
    Ui::PridatKnihu *ui;
    QSqlTableModel *model;
};

#endif // PRIDATKNIHU_H
