#ifndef DIALOGVYPUJCKA_H
#define DIALOGVYPUJCKA_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlDatabase>


namespace Ui {
class DialogVypujcka;
}

class DialogVypujcka : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVypujcka(QWidget *parent = 0);
    ~DialogVypujcka();
    QString jmeno;
public slots:

    void setLineEditText(int id_zak,QString text);
    void setLineEditTextKniha(int id_kniha, QString text);
    void defaultniTableView();
    void hledat();
    void hledatKniha();
    void icon();
    void showRadio();

private slots:
    void on_pushButtonNovaVypujcka_clicked();

    void on_pushButtonHledat_clicked();

    void on_pushButtonSmazat_clicked();

    void on_pushButtonupravit_clicked();

    void on_pushButtonVsechny_clicked();

    void on_pushButtonTisk_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

private:
    Ui::DialogVypujcka *ui;
    QSqlTableModel *model_vypujcka;
    QSqlDatabase db;
};

#endif // DIALOGVYPUJCKA_H
