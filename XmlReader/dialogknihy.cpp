#include "dialogknihy.h"
#include "ui_dialogknihy.h"
#include "mainwindow.h"
#include "pridatknihu.h"
#include "dialogvypujcka.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QInputDialog>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QIcon>
#include <QSize>

DialogKnihy::DialogKnihy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogKnihy)
{
    ui->setupUi(this);
    model_knihy = new QSqlTableModel(this);
    model_knihy->setTable("Kniha");
    ui->tableView->setModel(model_knihy);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_knihy->select();
    icon();
    defautlniTabulka();
}

DialogKnihy::~DialogKnihy()
{
    delete ui;
}

void DialogKnihy::defautlniTabulka()
{
//    model_knihy->setTable("Kniha");
    ui->tableView->setModel(model_knihy);
    model_knihy->setHeaderData( 0, Qt::Horizontal, QObject::tr("Číslo knihy") );
    model_knihy->setHeaderData( 1, Qt::Horizontal, QObject::tr("Název knihy") );
    model_knihy->setHeaderData( 2, Qt::Horizontal, QObject::tr("Autor"));
    model_knihy->setHeaderData( 3, Qt::Horizontal, QObject::tr("Autor") );
    model_knihy->setHeaderData( 4, Qt::Horizontal, QObject::tr("Nakladatelství") );
    model_knihy->setHeaderData( 5, Qt::Horizontal, QObject::tr("Rok vydání") );
    model_knihy->setHeaderData( 6, Qt::Horizontal, QObject::tr("Tématika") );
//    ui->tableView->setColumnHidden(7,true);//cena
//    ui->tableView->setColumnHidden(8,true);//pocet stran
//    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_knihy->select();
}

void DialogKnihy::icon()//nastaveni ikonku
{
    ui->pushButtonVsechny->setIcon(QIcon("./icon/book/all.png"));
    ui->pushButtonVsechny->setIconSize(QSize(40,30));

    ui->pushButtonPridatKnihu->setIcon(QIcon("./icon/book/add.png"));
    ui->pushButtonPridatKnihu->setIconSize(QSize(40,30));

    ui->pushButtonHledat->setIcon(QIcon("./icon/book/search.png"));
    ui->pushButtonHledat->setIconSize(QSize(40,30));

    ui->pushButtonSmazatKnihu->setIcon(QIcon("./icon/book/delete.png"));
    ui->pushButtonSmazatKnihu->setIconSize(QSize(40,30));

    ui->pushButtonVypujcka->setIcon(QIcon("./icon/book/lend.png"));
    ui->pushButtonVypujcka->setIconSize(QSize(40,30));

    ui->pushButtonPridatNKrat->setIcon(QIcon("./icon/book/add.png"));
    ui->pushButtonPridatNKrat->setIconSize(QSize(40,30));
}
void DialogKnihy::on_pushButtonVsechny_clicked()
{
    model_knihy->setTable("Kniha");
    model_knihy->select();
    ui->tableView->setModel(model_knihy);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defautlniTabulka();
    model_knihy->select();

}

void DialogKnihy::on_pushButtonHledat_clicked()
{
    bool ok;

    QStringList vybery;
    vybery << tr("Názvů") << tr("Evid. čísla") << tr("Autora");
    QString vyber = QInputDialog::getItem(this, tr("Hledat "), tr("Najít knihu podle..."), vybery, 0, false, &ok);

    if (vyber == "Autora") {
        QString autor = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte autora:"));
        qDebug() << autor;
        model_knihy->setFilter(QString("autor1 like '%").append(autor).append("%'"));
        model_knihy->select();
        ui->tableView->setModel(model_knihy);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defautlniTabulka();
    }
    else if (vyber == "Evid. čísla") {
        bool ok;
        int cislo = QInputDialog::getInt(this, tr("Hledat"), tr("Zadejte evidenční číslo:"), 27, 0, 999999999, 1, &ok);
        model_knihy->setFilter("id_kniha="+QString::number(cislo));
        model_knihy->select();
        ui->tableView->setModel(model_knihy);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defautlniTabulka();
    }
    else if (vyber == "Názvů") {
        QString nazev = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte název knihy:"));
        model_knihy->setFilter(QString("nazev like '%").append(nazev).append("%'"));
        model_knihy->select();
        ui->tableView->setModel(model_knihy);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defautlniTabulka();
    }
    else {
        qDebug() << "konec";
    }
}

void DialogKnihy::on_pushButtonPridatKnihu_clicked()
{
    PridatKnihu dialog;
    if (dialog.exec() == QDialog::Accepted) {
        int id = dialog.Id_kniha();
        qDebug() << id ;
       QSqlQuery existujiciID;
       existujiciID.prepare("SELECT id_kniha FROM Kniha WHERE id_kniha IN (" +
                           QString::number(id) + ")");
       existujiciID.exec();
       if (existujiciID.next()) {
           qDebug() << "Bohuzel program nemuze pridat";
           QMessageBox::information(this,"Chyba!!!", "Bohužel nové evidenční číslo iž existuje"
                                                "\nZadejte prosím jiné číslo.");
           return;
       }
       else {
           qDebug() << "nic nenasel";
           QSqlQuery dotaz;
           dotaz.prepare("INSERT INTO Kniha VALUES(:id_kniha, :nazev, :autor1, :autor,"
                         ":misto_vydani,:rok_vydani,:tematika,:cena, :pocet_stran)");
           dotaz.bindValue(":id_kniha", dialog.Id_kniha());
           dotaz.bindValue(":nazev", dialog.NazevKnihy());
           dotaz.bindValue(":autor1", dialog.Autor1());
           dotaz.bindValue(":autor2", dialog.Autor2());
           dotaz.bindValue(":misto_vydani", dialog.MistoVydani());
           dotaz.bindValue(":rok_vydani", dialog.RokVydani());
           dotaz.bindValue(":tematika", dialog.Tematika());
           dotaz.bindValue(":cena", dialog.Cena());
           dotaz.bindValue(":pocet_stran", dialog.PocetStran());
           dotaz.exec();
           defautlniTabulka();
       }
        model_knihy->select();
    }

}
void DialogKnihy::on_pushButtonSmazatKnihu_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
        QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte knihu.");
        return;
    }

    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Smazat", "Opravdu to chcete smazat?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {
        qDebug() << "souhlasil";

        QString sql = QString("DELETE FROM Kniha WHERE id_kniha IN(");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_knihy->data(index).toInt();
          sql += QString::number(id);
          if (i!=selected->selectedRows().count()-1) {
              sql +=", ";
          }
          QString sql1 = QString("DELETE FROM Vypujcka WHERE id_kniha IN(");
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
      defautlniTabulka();
      model_knihy->select();
    } else {
//      qDebug() << "neshouhlasil";
    }
}

void DialogKnihy::on_pushButtonVypujcka_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if(selected->selectedRows().count() == 0){
       QMessageBox::warning(this,"Pozor","Nastala se chyba. \nVyberte knihu.");
       return;
    }
    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Smazat", "Opravdu checete přejít na výpůjčku?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {
        QString sql = QString("SELECT id_kniha,nazev FROM Kniha WHERE id_kniha IN(");

        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_knihy->data(index).toInt();
            sql += QString::number(id);
        }
        sql += ")";
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        while (dotaz.next()) {
             nazev = dotaz.value(1).toString();
             id_kniha = dotaz.value(0).toInt();
            ui->label->setText(nazev);
        }
       DialogVypujcka dialog;
       dialog.setLineEditTextKniha(id_kniha,nazev);
       dialog.defaultniTableView();
       dialog.exec();
    }
}

void DialogKnihy::on_pushButtonPridatNKrat_clicked()
{
    PridatKnihu dialog;
    int pocet= QInputDialog::getInt(this,"Pridat knihy.","Zadejte počet knih k přidání",0,0,50);

    if (pocet == 0) {
        return;
    }
    else {
        if (dialog.exec()==QDialog::Accepted) {
            int id = dialog.Id_kniha();
            QString nazev = dialog.NazevKnihy();
            QString autor1 = dialog.Autor1();
            QString autor2 = dialog.Autor2();
            QString misto = dialog.MistoVydani();
            int rok = dialog.RokVydani();
            QString tema = dialog.Tematika();
            QString cena = dialog.Cena();
            int strany = dialog.PocetStran();

            for (int i = 0; i < pocet; ++i) {
                QSqlQuery dotaz;
                dotaz.prepare("INSERT INTO Kniha VALUES(:id_kniha, :nazev, :autor1, :autor,"
                                             ":misto_vydani,:rok_vydani,:tematika,:cena, :pocet_stran)");
                dotaz.bindValue(":id_kniha",id);
                dotaz.bindValue(":nazev", nazev);
                dotaz.bindValue(":autor1", autor1);
                dotaz.bindValue(":autor", autor2);
                dotaz.bindValue(":misto_vydani", misto);
                dotaz.bindValue(":rok_vydani", rok);
                dotaz.bindValue(":tematika", tema);
                dotaz.bindValue(":cena", cena);
                dotaz.bindValue(":pocet_stran", strany);
                dotaz.exec();
                id++;
            }
             model_knihy->select();
        }
    }
}
