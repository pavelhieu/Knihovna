#include "dialogucitelvypujcka.h"
#include "ui_dialogucitelvypujcka.h"
#include "plusucitelvypujcka.h"
#include "dialogucitele.h"
#include "dialogknihy.h"

#include <QInputDialog>
#include <QDebug>
#include <QItemSelectionModel>
#include <QDate>
#include <QMessageBox>
#include <QMovie>
#include <QSqlRecord>
#include <QPrinter>
#include <QPainter>
#include <QFont>
#include <QPrintDialog>

DialogUcitelVypujcka::DialogUcitelVypujcka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogUcitelVypujcka)
{
    ui->setupUi(this);
    model_ucitel_vypujcka= new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("VypujckaUcitel");
    ui->tableView->setModel(model_ucitel_vypujcka);
    ui->tableView->setColumnHidden(9,true);
    ui->tableView->setColumnHidden(5,true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model_ucitel_vypujcka->select();
//    ui->radioButtonNevraceneKnihy->hide();
//    ui->radioButtonVraceneKnihy->hide();
    ui->textBrowser->hide();
    defaultniTableUcitel();
    icon();

}

DialogUcitelVypujcka::~DialogUcitelVypujcka()
{
    delete ui;
}

void DialogUcitelVypujcka::hledatUcitel()
{
    model_ucitel_vypujcka= new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("VypujckaUcitel");

    QString ucitel = ui->label_2->text();
    model_ucitel_vypujcka->setFilter(QString("jmeno_ucitel like '%").append(ucitel).append("%'"));

    model_ucitel_vypujcka->select();
    ui->tableView->setModel(model_ucitel_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniTableUcitel();
}

void DialogUcitelVypujcka::defaultniTableUcitel()
{
//    model_ucitel_vypujcka->setTable("VypujckaUcitel");
    ui->tableView->setModel(model_ucitel_vypujcka);
    model_ucitel_vypujcka->setHeaderData( 0, Qt::Horizontal, QObject::tr("Číslo výpůjčky") );
    model_ucitel_vypujcka->setHeaderData( 1, Qt::Horizontal, QObject::tr("Datum výpůjčky") );
    model_ucitel_vypujcka->setHeaderData( 2, Qt::Horizontal, QObject::tr("Datum vracení"));
    model_ucitel_vypujcka->setHeaderData( 3, Qt::Horizontal, QObject::tr("Číslo knihy") );
    model_ucitel_vypujcka->setHeaderData( 4, Qt::Horizontal, QObject::tr("Název knihy") );
    model_ucitel_vypujcka->setHeaderData( 5, Qt::Horizontal, QObject::tr("Číslo vyučující") );
    model_ucitel_vypujcka->setHeaderData( 6, Qt::Horizontal, QObject::tr("Jméno vyučující") );
    model_ucitel_vypujcka->setHeaderData( 7, Qt::Horizontal, QObject::tr("Poznámka") );
    model_ucitel_vypujcka->setHeaderData(8,Qt::Horizontal, QObject::tr("Termín vrácení"));
//    ui->tableView->setColumnHidden(8,true);   //termin vraceni
    ui->tableView->setColumnHidden(0,true);     //cislo vypujcky
    model_ucitel_vypujcka->select();
}

void DialogUcitelVypujcka::setLineEditUcitel(int id_ucitel, QString text)
{

    ui->label->setText(QString::number(id_ucitel));
    ui->label_2->setText(text);
    hledatUcitel();
    defaultniTableUcitel();

}

void DialogUcitelVypujcka::loader()
{
    QMovie *movie = new QMovie("./gif/giftik.gif");
    ui->labelLoad->setMovie(movie);
    movie->start();

}

void DialogUcitelVypujcka::icon()
{
    ui->pushButtonVsechny->setIcon(QIcon("./icon/vypujcka/all.png"));
    ui->pushButtonVsechny->setIconSize(QSize(40,30));

    ui->pushButtonNova->setIcon(QIcon("./icon/vypujcka/add.png"));
    ui->pushButtonNova->setIconSize(QSize(40,30));

    ui->pushButtonHledat->setIcon(QIcon("./icon/user/search.png"));
    ui->pushButtonHledat->setIconSize(QSize(40,30));

    ui->pushButtonSmazat->setIcon(QIcon("./icon/vypujcka/delete.png"));
    ui->pushButtonSmazat->setIconSize(QSize(40,30));

    ui->pushButtonVraceno->setIcon(QIcon("./icon/book/return.png"));
    ui->pushButtonVraceno->setIconSize(QSize(40,30));

    ui->pushButtonTisk->setIcon(QIcon("./icon/print.png"));
    ui->pushButtonTisk->setIconSize(QSize(40,30));

}

void DialogUcitelVypujcka::obarvitRadek()
{
    //upozorneni na vyprseni datum lhuty
//    QSqlQuery dotaz;
//    dotaz.prepare("select * from VypujckaUcitel where datum_varovani <='"+ QDate::currentDate().toString("dd.MM.yyyy") +
//                  "' and poznamka like 'Nevráceno'");
//    dotaz.exec();
//    QStringList dejsi;
//    int cislo =1;
//    while (dotaz.next()) {
//        dejsi.append(QString::number(cislo)+". "+dotaz.value(6).toString() +"  "+ dotaz.value(1).toString()+ "  "+ dotaz.value(4).toString());
//        cislo++;
//        ui->tableView->setModel(model_ucitel_vypujcka);
//    }
//    while (!dejsi.isEmpty()) {
//     ui->textBrowser->append(dejsi.takeFirst());
//    }
}

void DialogUcitelVypujcka::on_pushButtonNova_clicked()
{
//    ui->radioButtonNevraceneKnihy->hide();
//    ui->radioButtonVraceneKnihy->hide();
    PlusUcitelVypujcka dialog;
    if (dialog.exec() == QDialog::Accepted) {
        if (dialog.datum_vypujcky().isEmpty() || dialog.datum_varovani().isNull()) {
            QMessageBox::information(this,"Pozor!", "Zadejte všechny potřebné informace.");
            return;
        }
        QSqlQuery dotaz;
        dotaz.prepare("INSERT INTO VypujckaUcitel VALUES(:NULL,"
                      ":datum_vypujcky, :datum_vraceni, :id_kniha, :nazev_kniha, :id_ucitel, :jmeno_ucitel, :poznamka, :datum_varovani)");
        dotaz.bindValue(":datum_vypujcky", dialog.datum_vypujcky());
        dotaz.bindValue(":datum_vraceni", dialog.datum_vraceni());
        dotaz.bindValue(":id_kniha", dialog.id_kniha());
        dotaz.bindValue(":nazev_kniha", dialog.nazev_kniha());
        dotaz.bindValue(":id_ucitel", dialog.id_ucitel());
        dotaz.bindValue(":jmeno_ucitel", dialog.jmeno_ucitel());
        dotaz.bindValue(":poznamka", dialog.poznamka());
        dotaz.bindValue(":datum_varovani",dialog.datum_varovani());
        dotaz.exec();
        defaultniTableUcitel();
        model_ucitel_vypujcka->select();
    }

}

void DialogUcitelVypujcka::on_pushButtonHledat_clicked()
{
    QStringList vybery;
    vybery << tr("Evid. čísla knihy") << tr("Názvů knihy") << tr("Jména vyučujících");

    bool ok;
    QString vyber = QInputDialog::getItem(this, tr("Hledat "), tr("Najít výpůjčku podle..."), vybery, 0, false, &ok);
    if (vyber == "Evid. čísla knihy") {
        int id_kniha = QInputDialog::getInt(this,tr("Hledat"), tr("Zadejte evidenční číslo knihy:"),0,0,9999999999999,1,&ok);
        model_ucitel_vypujcka->setFilter("id_kniha =" + QString::number(id_kniha));
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();
    }
    else if (vyber == "Názvů knihy") {
        QString nazev = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte název knihy:"));
        model_ucitel_vypujcka->setFilter(QString("nazev_kniha like '%").append(nazev).append("%'"));
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();
    }

    else if (vyber == "Jména vyučujících") {
        jmeno = QInputDialog::getText(this,tr("Hledat"), tr("Zadejte jméno:"));
        model_ucitel_vypujcka->setFilter(QString("jmeno_ucitel like '%").append(jmeno).append("%'"));

        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
//        ui->radioButtonNevraceneKnihy->show();
//        ui->radioButtonVraceneKnihy->show();
        defaultniTableUcitel();
    }
    else {
//        qDebug() << "konec";
    }

}

void DialogUcitelVypujcka::on_pushButtonVraceno_clicked()
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
        QString sql = QString("UPDATE VypujckaUcitel SET datum_vraceni ='"+ datum+"',"
                              " poznamka = 'Vráceno' where id_vypujcka = ");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_ucitel_vypujcka->data(index).toInt();
            sql += QString::number(id);
            qDebug() << id;
            if (i!=selected->selectedRows().count()-1) {
            }
        }
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        defaultniTableUcitel();
        model_ucitel_vypujcka->select();
    }


}

void DialogUcitelVypujcka::on_pushButtonSmazat_clicked()
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
        QString sql = QString("DELETE FROM VypujckaUcitel WHERE id_vypujcka IN(");
        if (selected->selectedRows().count() == 0) {
            return;
        }
        for (int i = 0; i < selected->selectedRows().count(); ++i) {
            QModelIndex index = selected->selectedRows()[i];
            int id = model_ucitel_vypujcka->data(index).toInt();
            sql += QString::number(id);
            if (i!=selected->selectedRows().count()-1) {
                sql +=", ";
            }
        }
        sql += ")";
        QSqlQuery dotaz;
        dotaz.prepare(sql);
        dotaz.exec();
        defaultniTableUcitel();
//        qDebug() << "toto je konec";
        model_ucitel_vypujcka->select();
    }
    else {
        qDebug() << "nesouhlasil";
    }
//    ui->radioButtonNevraceneKnihy->hide();
//    ui->radioButtonVraceneKnihy->hide();
}

void DialogUcitelVypujcka::on_pushButtonVsechny_clicked()
{
//    ui->radioButtonNevraceneKnihy->hide();
//    ui->radioButtonVraceneKnihy->hide();

    model_ucitel_vypujcka= new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("VypujckaUcitel");
    ui->tableView->setModel(model_ucitel_vypujcka);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    defaultniTableUcitel();
    model_ucitel_vypujcka->select();
}


void DialogUcitelVypujcka::on_radioButtonNevraceneKnihy_clicked()
{
    ui->textBrowser->clear();
    jmeno = QInputDialog::getText(this,"Zadejte jméno","Zadejte vyučujícho pro tisk.");
    if (!jmeno.isEmpty()) {
        qDebug() << "ok";

        model_ucitel_vypujcka= new QSqlTableModel(this);
        model_ucitel_vypujcka->setTable("VypujckaUcitel");
        model_ucitel_vypujcka->setFilter("poznamka like 'Nevráceno' and jmeno_ucitel like '%"+jmeno+"%'");
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();

        ui->textBrowser->clear();
        //upozorneni na vyprseni datum lhuty
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_ucitel,datum_vypujcky,nazev_kniha,datum_varovani,poznamka FROM VypujckaUcitel "
                      "WHERE jmeno_ucitel LIKE '%"+jmeno+"%' AND poznamka LIKE 'Nevráceno' ORDER BY jmeno_ucitel");
        dotaz.exec();
        QStringList proTisk1;
        int cislo =1;
        while (dotaz.next()) {
            proTisk1.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: "+dotaz.value(4).toString() +"\n");
            cislo++;
        }
        while (!proTisk1.isEmpty()) {
            ui->textBrowser->append(proTisk1.takeFirst());
        }
    }
    else {
        QMessageBox::information(this,"Informace","Žadné jméno nebylo doplněno, vypíšu všechny nevrácené výpůjčky.");
        model_ucitel_vypujcka->setFilter("poznamka like 'Nevráceno' order by jmeno_ucitel");
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();

        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_ucitel,datum_vypujcky,nazev_kniha,datum_varovani,poznamka FROM VypujckaUcitel "
                      "WHERE poznamka LIKE 'Nevráceno' ORDER BY jmeno_ucitel");
        dotaz.exec();
        QStringList proTisk2;
        int cislo =1;
        while (dotaz.next()) {
            proTisk2.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: "+dotaz.value(4).toString() +"\n");
            cislo++;
        }
        while (!proTisk2.isEmpty()) {
            ui->textBrowser->append(proTisk2.takeFirst());
        }

    }

}

void DialogUcitelVypujcka::on_radioButtonVraceneKnihy_clicked()
{
    ui->textBrowser->clear();
    jmeno = QInputDialog::getText(this,"Zadejte jméno","Zadejte vyučujícho pro tisk.");
    //pokud QString neni prazdne
    if (!jmeno.isEmpty()) {
        qDebug() << "ok";

        model_ucitel_vypujcka= new QSqlTableModel(this);
        model_ucitel_vypujcka->setTable("VypujckaUcitel");
        model_ucitel_vypujcka->setFilter("poznamka like 'Vráceno' and jmeno_ucitel like '%"+jmeno+"%'");
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();
        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_ucitel,datum_vypujcky,nazev_kniha,datum_varovani,poznamka, datum_vraceni FROM VypujckaUcitel "
                      "WHERE jmeno_ucitel LIKE '%"+jmeno+"%' AND poznamka LIKE 'Vráceno' ORDER BY jmeno_ucitel");
        dotaz.exec();
        QStringList proTisk3;
        int cislo =1;
        while (dotaz.next()) {
            proTisk3.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: " + dotaz.value(4).toString() +" dne "+ dotaz.value(5).toString()+  "\n" );
            cislo++;
        }
        while (!proTisk3.isEmpty()) {
            ui->textBrowser->append(proTisk3.takeFirst());
        }
    }
    //pokud QString je prazdne
    else {
        QMessageBox::information(this,"Informace","Žadné jméno nebylo doplněno, vypíšu všechny vrácené výpůjčky.");
        model_ucitel_vypujcka->setFilter("poznamka like 'Vráceno' order by jmeno_ucitel");
        model_ucitel_vypujcka->select();
        ui->tableView->setModel(model_ucitel_vypujcka);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        defaultniTableUcitel();

        ui->textBrowser->clear();
        QSqlQuery dotaz;
        dotaz.prepare("SELECT jmeno_ucitel,datum_vypujcky,nazev_kniha,datum_varovani,poznamka,datum_vraceni FROM VypujckaUcitel "
                      "WHERE poznamka LIKE 'Vráceno' ORDER BY jmeno_ucitel");
        dotaz.exec();
        QStringList proTisk4;
        int cislo =1;
        while (dotaz.next()) {
            proTisk4.append(dotaz.value(0).toString() + "\nKniha:  "+ dotaz.value(2).toString()+"\nPůjčeno dne: "+ dotaz.value(1).toString()+
                           "\nTermín vrácení:"+dotaz.value(3).toString() +"\nStav: "+dotaz.value(4).toString() +" dne "+ dotaz.value(5).toString()+ "\n");
            cislo++;
        }
        while (!proTisk4.isEmpty()) {
            ui->textBrowser->append(proTisk4.takeFirst());
        }
    }
}

void DialogUcitelVypujcka::on_pushButtonTisk_clicked()
{
    if (!ui->radioButtonVraceneKnihy->isChecked() && !ui->radioButtonNevraceneKnihy->isChecked()) {
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
//    qDebug().noquote() << ui->textBrowser->toPlainText();


    QPrinter printer(QPrinter::HighResolution);
    printer.setPageMargins(20,20,20,20, QPrinter::Millimeter);//ohraniceni
    QPrintDialog dialog(&printer,this);

    if (dialog.exec() == QDialog::Accepted) {
         ui->textBrowser->print(&printer);
//        QPainter painter(&printer);
//        painter.setFont(QFont("Tahoma",13));//font
//        painter.drawText(0,0,line);//co tisknout
//        painter.end();

    }
    else {
        return;
    }

}
