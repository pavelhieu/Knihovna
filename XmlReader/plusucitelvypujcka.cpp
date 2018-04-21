#include "plusucitelvypujcka.h"
#include "ui_plusucitelvypujcka.h"

#include <QDate>
#include <QInputDialog>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QCompleter>
#include <QTime>

PlusUcitelVypujcka::PlusUcitelVypujcka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlusUcitelVypujcka)
{
    ui->setupUi(this);


    ui->pushButtonDatumVraceni->hide();
    ui->lineEditPoznamka->setText("Nevráceno");
    ui->labelDatum->setText("Dneska je "+QDate::currentDate().toString("yyyy.MM.dd"));

    connect(ui->checkBox,SIGNAL(released()),this,SLOT(lineEditVraceno()));
    connect(ui->spinBoxIdKnihy,SIGNAL(valueChanged(int)),this,SLOT(knihy()));
    connect(ui->spinBoxIdUcitel,SIGNAL(valueChanged(int)),this,SLOT(ucitele()));
    connect(ui->lineEditJmenoUcitel,SIGNAL(textChanged(QString)),this,SLOT(id_ucitele()));
    connect(ui->lineEditNazevKnihy,SIGNAL(textChanged(QString)),this,SLOT(id_knihy()));
    naseptavac();
    naseptavac_knihy();

}

PlusUcitelVypujcka::~PlusUcitelVypujcka()
{
    delete ui;
}

void PlusUcitelVypujcka::lineEditVraceno()
{
    ui->lineEditPoznamka->setText("Vráceno");
    ui->pushButtonDatumVraceni->show();
    if (!ui->checkBox->isChecked()) {
        ui->lineEditPoznamka->setText("Nevráceno");
        ui->pushButtonDatumVraceni->hide();
    }
}

void PlusUcitelVypujcka::knihy()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Kniha");
    model_ucitel_vypujcka->select();
    QString select = "SELECT nazev FROM Kniha where id_kniha IN (" ;
    select.append(QString::number(ui->spinBoxIdKnihy->value()));
    select.append(")");
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->lineEditNazevKnihy->setText(record.value(i).toString());
        }
    }
}

void PlusUcitelVypujcka::ucitele()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Ucitel");
    model_ucitel_vypujcka->select();
    QString select = "SELECT jmeno FROM Ucitel where id_ucitel IN (" ;
    select.append(QString::number(ui->spinBoxIdUcitel->value()));
    select.append(")");
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->lineEditJmenoUcitel->setText(record.value(i).toString());
        }
    }
}

void PlusUcitelVypujcka::id_ucitele()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Ucitel");
    model_ucitel_vypujcka->select();
    QString select = "SELECT id_ucitel FROM Ucitel where jmeno like '" ;
    select.append(QString(ui->lineEditJmenoUcitel->text()));
    select.append("'");
//    qDebug() << select;
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->spinBoxIdUcitel->setValue(record.value(i).toInt());
        }
    }
}

void PlusUcitelVypujcka::id_knihy()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Kniha");
    model_ucitel_vypujcka->select();
    QString select = "SELECT id_kniha FROM Kniha WHERE nazev like '" ;
    select.append(ui->lineEditNazevKnihy->text());
    select.append("'");
//    qDebug() << select;
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->spinBoxIdKnihy->setValue(record.value(i).toInt());
        }
    }
}


void PlusUcitelVypujcka::naseptavac()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Ucitel");
    model_ucitel_vypujcka->select();
    QSqlQuery query("SELECT jmeno FROM Ucitel");
    QVector<QStringList> list;
     QStringList tmp;
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            tmp << record.value(i).toString();
        }
        list.append(tmp);
    }
    QCompleter *completer = new QCompleter(tmp, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEditJmenoUcitel->setCompleter(completer);
}

void PlusUcitelVypujcka::naseptavac_knihy()
{
    model_ucitel_vypujcka = new QSqlTableModel(this);
    model_ucitel_vypujcka->setTable("Kniha");
    model_ucitel_vypujcka->select();
    QSqlQuery query("SELECT nazev FROM Kniha");
    QVector<QStringList> list;
     QStringList tmp;
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            tmp << record.value(i).toString();
        }
        list.append(tmp);
    }
    QCompleter *completer = new QCompleter(tmp, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEditNazevKnihy->setCompleter(completer);
}

void PlusUcitelVypujcka::on_pushButtonDatumVypujcky_clicked()
{
    datum=QInputDialog::getText(this,"Datum výpůjčky","Datum výpůjčky \nnapř. 2001.12.24",
                                QLineEdit::Normal,QDate::currentDate().toString("yyyy.MM.dd"));


}

void PlusUcitelVypujcka::on_pushButtonDatumVraceni_clicked()
{
    datum_vracenii=QInputDialog::getText(this,"Datum vrácení","Datum vrácení \nnapř. 2001.12.24",
                                         QLineEdit::Normal,QDate::currentDate().toString("yyyy.MM.dd"));
}
int PlusUcitelVypujcka::id_ucitel()
{
    return ui->spinBoxIdUcitel->value();
}

QString PlusUcitelVypujcka::jmeno_ucitel()
{
     return ui->lineEditJmenoUcitel->text();
}

int PlusUcitelVypujcka::id_kniha()
{
    return ui->spinBoxIdKnihy->value();
}

QString PlusUcitelVypujcka::nazev_kniha()
{
    return ui->lineEditNazevKnihy->text();
}

QString PlusUcitelVypujcka::datum_vypujcky()
{
    return datum;
}

QString PlusUcitelVypujcka::datum_vraceni()
{
    return datum_vracenii;
}

QString PlusUcitelVypujcka::datum_varovani()
{
    return datum_varovanii;
}

QString PlusUcitelVypujcka::poznamka()
{
    return ui->lineEditPoznamka->text();
}

void PlusUcitelVypujcka::on_pushButtonLhuta_clicked()
{
    QStringList lhuta;
    lhuta << tr("4 týdny") << tr("5 týdnů") << tr("6 týdnů");
    bool ok;
   QString vyber= QInputDialog::getItem(this,"Doba výpůjčky", "Vyberte dobu trvání výpůjčky.",lhuta,0, false, &ok);
   if (vyber =="4 týdny") {
        datum_varovanii=QDate::currentDate().addDays(28).toString("yyyy.MM.dd");
   }
   else if (vyber == "5 týdnů") {
       datum_varovanii=QDate::currentDate().addDays(35).toString("yyyy.MM.dd");
   }
   else {
       datum_varovanii=QDate::currentDate().addDays(42).toString("yyyy.MM.dd");
   }
}
