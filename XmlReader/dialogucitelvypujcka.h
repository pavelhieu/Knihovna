#ifndef DIALOGUCITELVYPUJCKA_H
#define DIALOGUCITELVYPUJCKA_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class DialogUcitelVypujcka;
}

class DialogUcitelVypujcka : public QDialog
{
    Q_OBJECT

public:
    explicit DialogUcitelVypujcka(QWidget *parent = 0);
    ~DialogUcitelVypujcka();
    QString jmeno;
public slots:
    void hledatUcitel();
    void defaultniTableUcitel();
    void setLineEditUcitel(int id_ucitel,QString text);
    void loader();
    void icon();

    void obarvitRadek();

private slots:
    void on_pushButtonNova_clicked();

    void on_pushButtonHledat_clicked();

    void on_pushButtonVraceno_clicked();

    void on_pushButtonSmazat_clicked();

    void on_pushButtonVsechny_clicked();

    void on_radioButtonNevraceneKnihy_clicked();

    void on_radioButtonVraceneKnihy_clicked();

    void on_pushButtonTisk_clicked();

private:
    Ui::DialogUcitelVypujcka *ui;
    QSqlTableModel *model_ucitel_vypujcka;
    QSqlDatabase db;
};

#endif // DIALOGUCITELVYPUJCKA_H
