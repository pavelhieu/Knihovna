#ifndef PLUSUCITELVYPUJCKA_H
#define PLUSUCITELVYPUJCKA_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class PlusUcitelVypujcka;
}

class PlusUcitelVypujcka : public QDialog
{
    Q_OBJECT

public:
    explicit PlusUcitelVypujcka(QWidget *parent = 0);
    ~PlusUcitelVypujcka();

    int id_ucitel();
    QString jmeno_ucitel();
    int id_kniha();
    QString nazev_kniha();
    QString datum_vypujcky();
    QString datum_vraceni();
    QString datum_varovani();
    QString poznamka();

    void naseptavac();
    void naseptavac_knihy();

private slots:
    void lineEditVraceno();
    void knihy();
    void id_knihy();
    void ucitele();
    void id_ucitele();



    void on_pushButtonDatumVypujcky_clicked();

    void on_pushButtonDatumVraceni_clicked();

    void on_pushButtonLhuta_clicked();

private:
    Ui::PlusUcitelVypujcka *ui;
    QString datum;
    QString datum_vracenii;
    QString datum_varovanii;
    QSqlTableModel *model_ucitel_vypujcka;
    QSqlDatabase db;
};

#endif // PLUSUCITELVYPUJCKA_H
