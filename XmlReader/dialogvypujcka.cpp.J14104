#include "dialogvypujcka.h"
#include "ui_dialogvypujcka.h"
#include "dialogzaci.h"
#include "plusvypujcka.h"

#include <QInputDialog>
#include <QDebug>
#include <QItemSelectionModel>
#include <QDate>
#include <QMessageBox>
#include <QPrinter>
#include <QPainter>
#include <QFont>
#include <QPrintDialog>

DialogVypujcka::DialogVypujcka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogVypujcka)
{
    ui->setupUi(this);
    model_vypujcka= new QSqlTableModel(this);
    model_vypujcka->setTable("Vypujcka");
    ui->tableView->setModel(model_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setColumnHidden(5,true);
    defaultniTableView();
    ui->textBrowser->hide();
    model_vypujcka->select();
    icon();
}

DialogVypujcka::~DialogVypujcka()
{
    delete ui;
}

void DialogVypujcka::setLineEditText(int id_zak, QString text)
{
    ui->label->setText(QString::number(id_zak));
    ui->label_2->setText(text);
    hledat();
}

void DialogVypujcka::setLineEditTextKniha(int id_kniha, QString text)
{
    ui->label->setText(QString::number(id_kniha));
    ui->label_2->setText(text);
    hledatKniha();
}

void DialogVypujcka::defaultniTableView()
{
//    model_vypujcka->setTable("Vypujcka");
    ui->tableView->setModel(model_vypujcka);
    model_vypujcka->setHeaderData( 0, Qt::Horizontal, QObject::tr("Číslo výpůjčky") );
    model_vypujcka->setHeaderData( 1, Qt::Horizontal, QObject::tr("Datum výpůjčky") );
    model_vypujcka->setHeaderData( 2, Qt::Horizontal, QObject::tr("Datum vracení"));
    model_vypujcka->setHeaderData( 3, Qt::Horizontal, QObject::tr("Číslo knihy") );
    model_vypujcka->setHeaderData( 4, Qt::Horizontal, QObject::tr("Název knihy") );
    model_vypujcka->setHeaderData( 5, Qt::Horizontal, QObject::tr("Číslo žáka") );
    model_vypujcka->setHeaderData( 6, Qt::Horizontal, QObject::tr("Jméno žáka") );
    model_vypujcka->setHeaderData( 7, Qt::Horizontal, QObject::tr("Poznámka") );
    model_vypujcka->setHeaderData(8, Qt::Horizontal, QObject::tr("Termín vrácení"));
//    ui->tableView->setColumnHidden(8,true);   //termin vraceni
    ui->tableView->setColumnHidden(0, true);
//    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_vypujcka->select();
}

void DialogVypujcka::hledat()
{
    model_vypujcka= new QSqlTableModel(this);
    model_vypujcka->setTable("Vypujcka");

    QString autor = ui->label_2->text();
//    qDebug() << autor << "toto je jmeno";
    model_vypujcka->setFilter(QString("jmeno_zak like '%").append(autor).append("%'"));

    model_vypujcka->select();
    ui->tableView->setModel(model_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniTableView();

}

void DialogVypujcka::hledatKniha()
{

    model_vypujcka= new QSqlTableModel(this);
    model_vypujcka->setTable("Vypujcka");

    int kniha = ui->label->text().toInt();
    model_vypujcka->setFilter(("id_kniha = ")+QString::number(kniha));

    model_vypujcka->select();
    ui->tableView->setModel(model_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniTableView();
//    ui->radioButton->hide();
//    ui->radioButton_2->hide();
}

void DialogVypujcka::icon()
{
    ui->pushButtonVsechny->setIcon(QIcon("./icon/vypujcka/all.png"));
    ui->pushButtonVsechny->setIconSize(QSize(40,30));

    ui->pushButtonNovaVypujcka->setIcon(QIcon("./icon/vypujcka/add.png"));
    ui->pushButtonNovaVypujcka->setIconSize(QSize(40,30));

    ui->pushButtonHledat->setIcon(QIcon("./icon/user/search.png"));
    ui->pushButtonHledat->setIconSize(QSize(40,30));

    ui->pushButtonSmazat->setIcon(QIcon("./icon/vypujcka/delete.png"));
    ui->pushButtonSmazat->setIconSize(QSize(40,30));

    ui->pushButtonupravit->setIcon(QIcon("./icon/book/return.png"));
    ui->pushButtonupravit->setIconSize(QSize(40,30));

    ui->pushButtonTisk->setIcon(QIcon("./icon/print.png"));
    ui->pushButtonTisk->setIconSize(QSize(40,30));

}

void DialogVypujcka::showRadio()
{
    ui->radioButton->show();
    ui->radioButton_2->show();
}

void DialogVypujcka::on_pushButtonNovaVypujcka_clicked()
{
    PlusVypujcka dialog;
    if (dialog.exec() == QDialog::Accepted) {
        if (dialog.datum_vypujcky().isEmpty() || dialog.datum_varovani().isNull()
                || dialog.jmeno_zak().isNull()) {
            QMessageBox::information(this,"Pozor!", "Zadejte všechny potřebné informace.");
            return;
        }
        QSqlQuery dotaz;
        dotaz.prepare("INSERT INTO Vypujcka VALUES(:NULL,"
                      ":datum_vypujcky, :datum_vraceni, :id_kniha, :nazev_kniha, :id_zak, :jmeno_zak, :poznamka, :datum_varovani)");
        dotaz.bindValue(":datum_vypujcky", dialog.datum_vypujcky());
        dotaz.bindValue(":datum_vraceni", dialog.datum_vraceni());
        dotaz.bindValue(":id_kniha", dialog.id_kniha());
        dotaz.bindValue(":nazev_kniha", dialog.nazev_kniha());
        dotaz.bindValue(":id_zak", dialog.id_zak());
        dotaz.bindValue(":jmeno_zak", dialog.jmeno_zak());
        dotaz.bindValue(":poznamka", dialog.poznamka());
        dotaz.bindValue(":datum_varovani", dialog.datum_varovani());
        dotaz.exec();
        defaultniTableView();
        model_vypujcka->select();
//        ui->radioButton->hide();
//        ui->radioButton_2->hide();

    }

}

void DialogVypujcka::on_pushButtonHledat_clicked()
{
    QStringList vybery;
    vybery << tr("Evid. čísla knihy") << tr("Názvů knihy") << tr("Jména žáka");
//    setStyleSheet( "QDialog{background-color: yellow;};"
//                   "QInputDialog {background-color: yellow;};");

    bool ok;
    QString vyber = QInputDialog::getItem(this, tr("Hledat "), tr("Najít výpůjčku podle..."), vybery, 0, false, &ok);
    if (vyber == "Evid. čísla knihy") {
        int id_kniha = QInputDialog::getInt(this,tr("Hledat"), tr("Zadejte evidenční číslo knihy:"),0,0,9999999999999,1,&ok);
        model_vypujcka->setFilter("id_kniha =" + QString::number(id_kniha));
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();
    }
    else if (vyber == "Názvů knihy") {
        QString nazev = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte název knihy:"));
        model_vypujcka->setFilter(QString("nazev_kniha like '%").append(nazev).append("%'"));
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();
    }
    else if (vyber == "Jména žáka") {
        jmeno = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte název knihy:"));
        model_vypujcka->setFilter(QString("jmeno_zak like '%").append(jmeno).append("%'"));
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();

    }
    else {
        qDebug() << "konec";
    }
}

void DialogVypujcka::on_pushButtonSmazat_clicked()
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if (selected->selectedRows().count() == 0) {
        QMessageBox::warning(this,"Pozor","Nevybral jste žádnou výpůjčku z seznamu.\nProsím, vyberte výpůjčku.");
        return;
    }
    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Smazat", "Opravdu to chcete smazat?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {
        QString sql = QString("DELETE FROM Vypujcka WHERE id_vypujcka IN(");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_vypujcka->data(index).toInt();
            sql += QString::number(id);
            if (i!=selected->selectedRows().count()-1) {
                sql +=", ";
            }
        }
        sql += ")";
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        model_vypujcka->select();
        defaultniTableView();
    }
}

void DialogVypujcka::on_pushButtonupravit_clicked()//upravi no Vráceno
{
    QItemSelectionModel *selected = ui->tableView->selectionModel();
    if (selected->selectedRows().count() == 0) {
        QMessageBox::warning(this,"Pozor","Nevybral jste žádnou výpůjčku z seznamu.\nProsím, vyberte výpůjčku.");
        return;
    }
    QMessageBox::StandardButton otazka;
    otazka = QMessageBox::question(this, "Vráceno", "Opravdu chcete změnit na 'Vráceno'?",
                                   QMessageBox::Yes|QMessageBox::No);
    if (otazka == QMessageBox::Yes) {

        QMessageBox::information(this,"Upozornění","Změnili jste stav na 'Vráceno'");
        QString datum=QDate::currentDate().toString("yyyy.MM.dd");

        QString sql = QString("UPDATE Vypujcka SET datum_vraceni ='"+ datum+"',"
                              " poznamka = 'Vráceno' where id_vypujcka = ");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_vypujcka->data(index).toInt();
            sql += QString::number(id);
//            qDebug() << id;
            if (i!=selected->selectedRows().count()-1) {
            }
        }
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        model_vypujcka->select();
        defaultniTableView();
//        ui->radioButton->hide();
//        ui->radioButton_2->hide();
    }

}

void DialogVypujcka::on_pushButtonVsechny_clicked()
{

    model_vypujcka= new QSqlTableModel(this);
    model_vypujcka->setTable("Vypujcka");
    ui->tableView->setModel(model_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniTableView();
    model_vypujcka->select();
    //    ui->radioButton->hide();
    //    ui->radioButton_2->hide();
}


void DialogVypujcka::on_radioButton_2_clicked()//vrácené knihy
{
    ui->textBrowser->clear();
    jmeno = QInputDialog::getText(this,"Zadejte jméno","Zadejte žáka pro tisk.");
    //pokud QString neni prazdne
    if (!jmeno.isEmpty()) {
        qDebug() << "ok";

        model_vypujcka= new QSqlTableModel(this);
        model_vypujcka->setTable("Vypujcka");
        model_vypujcka->setFilter("poznamka LIKE 'Vráceno' AND jmeno_zak LIKE '%"+jmeno+"%'");
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();


        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_zak,datum_vypujcky,nazev_kniha,datum_varovani,poznamka, datum_vraceni FROM Vypujcka "
                      "WHERE jmeno_zak LIKE '%"+jmeno+"%' AND poznamka LIKE 'Vráceno'");
        dotaz.exec();
        QStringList proTisk1;
        int cislo =1;
        while (dotaz.next()) {
            proTisk1.append(dotaz.value(0).toString() + "\nKnížka:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: " + dotaz.value(4).toString()+ " dne " + dotaz.value(5).toString() + "\n");
            cislo++;
        }
        while (!proTisk1.isEmpty()) {
            ui->textBrowser->append(proTisk1.takeFirst());
        }
    }
    //pokud QString je prazdne
    else {
        QMessageBox::information(this,"Informace","Žadné jméno nebylo doplněno, vypíšu všechny vrácené výpůjčky.");
        model_vypujcka->setFilter("poznamka LIKE 'Vráceno' ORDER BY jmeno_zak");
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();

        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_zak,datum_vypujcky,nazev_kniha,datum_varovani,poznamka, datum_vraceni FROM Vypujcka "
                      "WHERE poznamka LIKE 'Vráceno' ORDER BY jmeno_zak");
        dotaz.exec();
        QStringList proTisk2;
        int cislo =1;
        while (dotaz.next()) {
            proTisk2.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: "+dotaz.value(4).toString() +" dne "+ dotaz.value(5).toString()+ "\n");
            cislo++;
        }
        while (!proTisk2.isEmpty()) {
            ui->textBrowser->append(proTisk2.takeFirst());
        }
    }

}

void DialogVypujcka::on_radioButton_clicked()//nevracene knihy
{
    ui->textBrowser->clear();
    jmeno = QInputDialog::getText(this,"Zadejte jméno","Zadejte žáka pro tisk.");
    //pokud QString neni prazdne
    if (!jmeno.isEmpty()) {
        qDebug() << "ok";

        model_vypujcka= new QSqlTableModel(this);
        model_vypujcka->setTable("Vypujcka");
        model_vypujcka->setFilter("poznamka like 'Nevráceno' and jmeno_zak like '%"+jmeno+"%'");
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();


        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("select jmeno_zak,datum_vypujcky,nazev_kniha,datum_varovani,poznamka from Vypujcka "
                      "where jmeno_zak like '%"+jmeno+"%' and poznamka like 'Nevráceno'");
        dotaz.exec();
        QStringList proTisk3;
        int cislo =1;
        while (dotaz.next()) {
            proTisk3.append(dotaz.value(0).toString() + "\nKnížka:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: " + dotaz.value(4).toString() + "\n" );
            cislo++;
        }
        while (!proTisk3.isEmpty()) {
            ui->textBrowser->append(proTisk3.takeFirst());
        }
    }
    //pokud QString je prazdne
    else {
        QMessageBox::information(this,"Informace","Žadné jméno nebylo doplněno, vypíšu všechny vrácené výpůjčky.");
        model_vypujcka->setFilter("poznamka LIKE 'Nevráceno' ORDER BY jmeno_zak");
        model_vypujcka->select();
        ui->tableView->setModel(model_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableView();

        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_zak,datum_vypujcky,nazev_kniha,datum_varovani,poznamka, datum_vraceni FROM Vypujcka "
                      "WHERE poznamka LIKE 'Nevráceno' ORDER BY jmeno_zak");
        dotaz.exec();
        QStringList proTisk4;
        int cislo =1;
        while (dotaz.next()) {
            proTisk4.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: "+dotaz.value(4).toString() + "\n");
            cislo++;
        }
        while (!proTisk4.isEmpty()) {
            ui->textBrowser->append(proTisk4.takeFirst());
        }
    }
}
void DialogVypujcka::on_pushButtonTisk_clicked()
{
    if (!ui->radioButton->isChecked() && !ui->radioButton_2->isChecked()) {
    QMessageBox::warning(this,"Pozor","Vyberte ze dvou možností 'Vrácené' a 'Nevrácené'");
    return;
    }
    QString text=ui->textBrowser->toPlainText();
    QString line;

    QStringList listRadku =text.split("\n");
                int max =0;
                int n = listRadku.length();
                for (int i = 0; i <n ; ++i) {
                    if (listRadku[i].length() <max) {
                        listRadku[i].append(" ");
                    }
                    line =listRadku[i];
                    qDebug() << line;

                }
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageMargins(20,20,20,20, QPrinter::Millimeter);//ohraniceni
    QPrintDialog dialog(&printer,this);

    if (dialog.exec() == QDialog::Accepted) {
         ui->textBrowser->print(&printer);
    }
    else {
        return;
    }
}





