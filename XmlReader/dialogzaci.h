#ifndef DIALOGZACI_H
#define DIALOGZACI_H
#include "mainwindow.h"
#include "dialogvypujcka.h"

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>


namespace Ui {
class DialogZaci;
}

class DialogZaci : public QDialog
{
    Q_OBJECT

public:
    explicit DialogZaci(QWidget *parent = 0);
    ~DialogZaci();

     QString jmeno;
     int id_zaka;
private slots:
    void on_pushButtonHledat_clicked();
    void on_pushButtonVsechny_clicked();
    void on_pushButtonPridatZak_clicked();
    void on_pushButtonSmazatZak_clicked();
     void keyPressEvent(QKeyEvent *event);
    void on_pushButtonUpravit_clicked();
    void icon();
    void defaultniView();
protected:

private:
    Ui::DialogZaci *ui;
    QSqlTableModel *model_zaci;
    QSqlDatabase db;
};

#endif // DIALOGZACI_H
