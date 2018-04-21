#include "dialogzaci.h"
#include "ui_dialogzaci.h"
#include "ui_dialogvypujcka.h"
#include "mainwindow.h"
#include "pluszak.h"
#include "dialogvypujcka.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QInputDialog>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QCompleter>
#include <QKeyEvent>
#include <QMessageBox>
#include <QIcon>
#include <QSize>

DialogZaci::DialogZaci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogZaci)
{
    ui->setupUi(this);
    model_zaci = new QSqlTableModel(this);
    model_zaci->setTable("Zak");
    ui->tableView->setModel(model_zaci);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_zaci->select();

    defaultniView();
    icon();

}

DialogZaci::~DialogZaci()
{
    delete ui;
}

void DialogZaci::on_pushButtonHledat_clicked()
{
    QString zak = QInputDialog::getText(this,tr("Hledat"), tr("Zadej jméno žáka "));
    qDebug() << zak;
    model_zaci->setFilter(QString("jmeno like '%").append(zak).append("%'"));
    model_zaci->select();
    ui->tableView->setModel(model_zaci);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniView();
}

void DialogZaci::on_pushButtonVsechny_clicked()
{
    model_zaci->setTable("Zak");
    model_zaci->select();
    ui->tableView->setModel(model_zaci);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_zaci->select();
    defaultniView();
}

void DialogZaci::on_pushButtonPridatZak_clicked()
{
    PlusZak dialog;
    if (dialog.exec() == QDialog::Accepted) {
        qDebug() << dialog.JmenoZak();

        QSqlQuery dotaz;
        dotaz.prepare("INSERT INTO Zak VALUES(:NULL,"
                      ":jmeno, :trida, :rok_nastup)");
        dotaz.bindValue(":jmeno", dialog.JmenoZak());
        dotaz.bindValue(":trida", dialog.TridaZak());
        dotaz.bindValue(":rok_nastup", dialog.RokNastup());
        dotaz.exec();
        model_zaci->select();
        defaultniView();
    }
}

void DialogZaci::on_pushButtonSmazatZak_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
        QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte žáka.");
        return;
    }
    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Smazat", "Opravdu to chcete smazat?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {

        QString sql = QString("DELETE FROM Zak WHERE id_zak IN(");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_zaci->data(index).toInt();
            sql += QString::number(id);
            qDebug() << id;
            if (i!=selected->selectedRows().count()-1) {
                sql +=", ";
            }
            QString sql1 = QString("DELETE FROM Vypujcka WHERE id_zak IN(");
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
        qDebug() << "toto je konec";
        defaultniView();
        model_zaci->select();
    }

    else {
        qDebug() << "Nesouhlasil";
    }

}
void DialogZaci::keyPressEvent(QKeyEvent *event)
{
//    qDebug() << event->key() << "\t" << Qt::Key_Enter << "\t" << QKeyEvent::Enter;
            if( event->key() == 16777220){
//              naseptavac();
            }
            else{
               qDebug() << "sorry no";
            }
}

void DialogZaci::on_pushButtonUpravit_clicked()
{

    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
       QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte žáka.");
       return;
    }
    else {
        QString sql = QString("SELECT id_zak,jmeno FROM Zak WHERE id_zak IN(");

        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_zaci->data(index).toInt();
            sql += QString::number(id);
            //        qDebug() << id;
        }
        sql += ")";
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        while (dotaz.next()) {
             jmeno = dotaz.value(1).toString();
             id_zaka = dotaz.value(0).toInt();
             qDebug() << id_zaka;
            //         int salary = dotaz.value(1).toInt();
            ui->label->setText(jmeno);
        }
       DialogVypujcka dialog;
       dialog.setLineEditText(id_zaka,jmeno);
       dialog.defaultniTableView();
       dialog.exec();
    }
}

void DialogZaci::icon()
{
    ui->pushButtonVsechny->setIcon(QIcon("./icon/student/students.png"));
    ui->pushButtonVsechny->setIconSize(QSize(40,30));

    ui->pushButtonPridatZak->setIcon(QIcon("./icon/student/add.png"));
    ui->pushButtonPridatZak->setIconSize(QSize(40,30));

    ui->pushButtonHledat->setIcon(QIcon("./icon/student/search.png"));
    ui->pushButtonHledat->setIconSize(QSize(40,30));

    ui->pushButtonSmazatZak->setIcon(QIcon("./icon/student/delete.png"));
    ui->pushButtonSmazatZak->setIconSize(QSize(40,30));

    ui->pushButtonUpravit->setIcon(QIcon("./icon/book/lend.png"));
    ui->pushButtonUpravit->setIconSize(QSize(40,30));
}

void DialogZaci::defaultniView()
{
//    model_zaci->setTable("Zak");
    ui->tableView->setModel(model_zaci);
    model_zaci->setHeaderData( 0, Qt::Horizontal, QObject::tr("Číslo žáka") );
    model_zaci->setHeaderData( 1, Qt::Horizontal, QObject::tr("Jméno") );
    model_zaci->setHeaderData( 2, Qt::Horizontal, QObject::tr("Třída"));
    model_zaci->setHeaderData(3, Qt::Horizontal,QObject::tr("Rok nástupu"));
//    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_zaci->select();
}
