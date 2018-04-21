#ifndef PLUSVYPUJCKA_H
#define PLUSVYPUJCKA_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class PlusVypujcka;
}

class PlusVypujcka : public QDialog
{
    Q_OBJECT

public:
    explicit PlusVypujcka(QWidget *parent = 0);
    ~PlusVypujcka();

    int id_zak();
    QString jmeno_zak();
    int id_kniha();
    QString nazev_kniha();
    QString datum_vypujcky();
    QString datum_vraceni();
    QString datum_varovani();
    QString poznamka();

private slots:
    void on_buttonBox_accepted();
    void lineEditVraceno();

    void id_knihy();
    void knihy();

    void zaci();
    void id_zaci();

    void naseptavac();
    void naseptavac_knihy();
    void dobaLhuta();

    void on_pushButtonDatumVypujcky_clicked();

    void on_pushButtonDatumVraceni_clicked();


    void on_pushButtonLhuta_clicked();

private:
    QString datum;
    QString datum_vracenii;
    QString datum_varovanii;
    Ui::PlusVypujcka *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
};

#endif // PLUSVYPUJCKA_H
