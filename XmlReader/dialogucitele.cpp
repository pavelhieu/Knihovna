#include "dialogucitele.h"
#include "ui_dialogucitele.h"
#include "mainwindow.h"
#include "plusucitel.h"
#include "dialogvypujcka.h"
#include "dialogucitelvypujcka.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QInputDialog>
#include <QDebug>
#include <QSqlQuery>
#include <QDialog>
#include <QMessageBox>
#include <QItemSelectionModel>

DialogUcitele::DialogUcitele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogUcitele)
{
    ui->setupUi(this);
    model_ucitele = new QSqlTableModel(this);
    model_ucitele->setTable("Ucitel");
     ui->tableView->setModel(model_ucitele);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_ucitele->select();
    icon();
    defaultniView();
}

DialogUcitele::~DialogUcitele()
{
    delete ui;
}

void DialogUcitele::defaultniView()
{
//    model_ucitele->setTable("Ucitel");
    ui->tableView->setModel(model_ucitele);
    model_ucitele->setHeaderData( 0, Qt::Horizontal, QObject::tr("Číslo učitele"));
    model_ucitele->setHeaderData( 1, Qt::Horizontal, QObject::tr("Jméno učitele"));
    model_ucitele->select();
}

void DialogUcitele::on_pushButtonHledat_clicked()
{
    QString ucitel = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte jméno vyučujícího "));
    qDebug() << ucitel;
    model_ucitele->setFilter(QString("jmeno like '%").append(ucitel).append("%'"));
    model_ucitele->select();
    ui->tableView->setModel(model_ucitele);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniView();
}

void DialogUcitele::on_pushButtonVsechny_clicked()
{
    model_ucitele->setTable("Ucitel");
    model_ucitele->select();
    ui->tableView->setModel(model_ucitele);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_ucitele->select();
    defaultniView();
}

void DialogUcitele::on_pushButtonPridatVyucujici_clicked()
{
    PlusUcitel dialog;
    if (dialog.exec() == QDialog::Accepted) {
        QSqlQuery dotaz;
        if (dialog.JmenoUcitel().length()==0) {
            QMessageBox::warning(this,"Chyba","Chybi text!");
            return;
        }
        dotaz.prepare("INSERT INTO Ucitel VALUES(:NULL,"
                      ":jmeno)");
        dotaz.bindValue(":jmeno", dialog.JmenoUcitel());
        dotaz.exec();
        defaultniView();
        model_ucitele->select();

    }
}

void DialogUcitele::on_pushButtonSmazatVyucujici_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
        QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte vyučujícího.");
        return;
    }
    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Smazat", "Opravdu to chcete smazat?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {
            qDebug() << "souhlasil";
            QString sql = QString("DELETE FROM Ucitel WHERE id_ucitel IN(");
            if (selected->selectedRows().count() == 0) {
                return;
            }
            for (int i = 0; i < selected->selectedRows().count(); ++i) {
                QModelIndex index = selected->selectedRows()[i];
                int id = model_ucitele->data(index).toInt();
                sql += QString::number(id);
                if (i!=selected->selectedRows().count()-1) {
                    sql +=", ";
                }
                QString sql1 = QString("DELETE FROM Vypujcka WHERE id_ucitel IN(");
                sql1 +=QString::number(id);
                sql1 +=")";
                QSqlQuery dotaz1;
                dotaz1.prepare(sql1);
                dotaz1.exec();
            }
            sql += ")";
            QSqlQuery dotaz;
            dotaz.prepare(sql);
            dotaz.exec();
            defaultniView();
            model_ucitele->select();
    }
    else {
        qDebug() << "Nesouhlasil";
    }

}

void DialogUcitele::on_pushButtonUpravit_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
       QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte vyučujícího.");
       return;
    }
    else {
        QString sql = QString("SELECT id_ucitel,jmeno FROM Ucitel WHERE id_ucitel IN(");

        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_ucitele->data(index).toInt();
            sql += QString::number(id);
        }
        sql += ")";
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        while (dotaz.next()) {
            jmeno = dotaz.value(1).toString();
            id_ucitel = dotaz.value(0).toInt();
            qDebug() << jmeno;
            ui->label->setText(jmeno);
        }
        DialogUcitelVypujcka dialog;
        dialog.setLineEditUcitel(id_ucitel,jmeno);
        dialog.defaultniTableUcitel();
        dialog.exec();
    }


}

void DialogUcitele::icon()
{
    ui->pushButtonVsechny->setIcon(QIcon("./icon/user/all.png"));
    ui->pushButtonVsechny->setIconSize(QSize(40,30));

    ui->pushButtonPridatVyucujici->setIcon(QIcon("./icon/user/add.png"));
    ui->pushButtonPridatVyucujici->setIconSize(QSize(40,30));

    ui->pushButtonHledat->setIcon(QIcon("./icon/user/search.png"));
    ui->pushButtonHledat->setIconSize(QSize(40,30));

    ui->pushButtonSmazatVyucujici->setIcon(QIcon("./icon/user/delete.png"));
    ui->pushButtonSmazatVyucujici->setIconSize(QSize(40,30));

    ui->pushButtonUpravit->setIcon(QIcon("./icon/book/lend.png"));
    ui->pushButtonUpravit->setIconSize(QSize(40,30));

}
