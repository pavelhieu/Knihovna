#include "plusvypujcka.h"
#include "ui_plusvypujcka.h"
#include "dialogknihy.h"
#include "dialogzaci.h"

#include <QCompleter>
#include <QDebug>
#include <QInputDialog>
#include <QSqlRecord>
#include <QDate>
#include <QMessageBox>


PlusVypujcka::PlusVypujcka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlusVypujcka)
{
    ui->setupUi(this);
    naseptavac();
    naseptavac_knihy();

    ui->pushButtonDatumVraceni->hide();
    ui->lineEditPoznamka->setText("Nevráceno");
    ui->labelAktualniDatum->setText("Dneska je "+QDate::currentDate().toString("yyyy.MM.dd"));

    connect(ui->checkBoxVraceno,SIGNAL(released()),this,SLOT(lineEditVraceno()));
    connect(ui->spinBoxIdKnihy,SIGNAL(valueChanged(int)),this,SLOT(knihy()));
    connect(ui->spinBoxIdZaka,SIGNAL(valueChanged(int)),this,SLOT(zaci()));
    connect(ui->lineEditJmenoZaka,SIGNAL(textChanged(QString)),this,SLOT(id_zaci()));
    connect(ui->lineEditNazevKnihy,SIGNAL(textChanged(QString)),this,SLOT(id_knihy()));
}

PlusVypujcka::~PlusVypujcka()
{
    delete ui;
}



void PlusVypujcka::on_buttonBox_accepted()
{

//    qDebug() << ui->lineEditJmenoZaka->text();
//    qDebug() << ui->lineEditNazevKnihy->text();

//    QDate datum = ui->calendarWidget->selectedDate();
//    qDebug() << datum.addDays(5); // pridani 5 dnu
//    qDebug() << datum.toString();
}

void PlusVypujcka::lineEditVraceno()
{
    ui->lineEditPoznamka->setText("Vráceno");
    ui->pushButtonDatumVraceni->show();
    if (!ui->checkBoxVraceno->isChecked()) {
        ui->lineEditPoznamka->setText("Nevráceno");
        ui->pushButtonDatumVraceni->hide();
    }
}

void PlusVypujcka::knihy()
{
    model = new QSqlTableModel(this);
    model->setTable("Kniha");
    model->select();
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

void PlusVypujcka::zaci()
{
    model = new QSqlTableModel(this);
    model->setTable("Zak");
    model->select();
    QString select = "SELECT jmeno FROM Zak where id_zak IN (" ;
    select.append(QString::number(ui->spinBoxIdZaka->value()));
    select.append(")");
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->lineEditJmenoZaka->setText(record.value(i).toString());
        }
    }
}
void PlusVypujcka::id_zaci()
{
    model = new QSqlTableModel(this);
    model->setTable("Zak");
    model->select();
    QString select = "SELECT id_zak FROM Zak where jmeno like '" ;
    select.append(QString(ui->lineEditJmenoZaka->text()));
    select.append("'");
    qDebug() << select;
    QSqlQuery query(select);
    while (query.next())
    {
        QSqlRecord record = query.record();

        for(int i=0; i < record.count(); i++)
        {
            ui->spinBoxIdZaka->setValue(record.value(i).toInt());
        }
    }
}

void PlusVypujcka::id_knihy()
{
    model = new QSqlTableModel(this);
    model->setTable("Kniha");
    model->select();
    QString select = "SELECT id_kniha FROM Kniha WHERE nazev like '" ;
    select.append(ui->lineEditNazevKnihy->text());
    select.append("'");
    qDebug() << select;
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

void PlusVypujcka::naseptavac()
{
    model = new QSqlTableModel(this);
    model->setTable("Zak");
    model->select();
    QSqlQuery query("SELECT jmeno FROM Zak");
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
    ui->lineEditJmenoZaka->setCompleter(completer);
}

void PlusVypujcka::naseptavac_knihy()
{
    model = new QSqlTableModel(this);
    model->setTable("Kniha");
    model->select();
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

void PlusVypujcka::dobaLhuta()
{


}

void PlusVypujcka::on_pushButtonDatumVypujcky_clicked()
{
    datum=QInputDialog::getText(this,"Datum výpůjčky","Datum výpůjčky \nnapř. 2001.12.24",QLineEdit::Normal,
                                QDate::currentDate().toString("yyyy.MM.dd"));

}

void PlusVypujcka::on_pushButtonDatumVraceni_clicked()
{
    datum_vracenii=QInputDialog::getText(this,"Datum výpůjčky","Datum výpůjčky \nnapř. 2001.24.12",
                                         QLineEdit::Normal,QDate::currentDate().toString("yyyy.MM.dd"));
}
int PlusVypujcka::id_zak()
{
    return ui->spinBoxIdZaka->value();

}

QString PlusVypujcka::jmeno_zak()
{
    return ui->lineEditJmenoZaka->text();
}

int PlusVypujcka::id_kniha()
{
    return ui->spinBoxIdKnihy->value();
}

QString PlusVypujcka::nazev_kniha()
{
    return ui->lineEditNazevKnihy->text();
}

QString PlusVypujcka::datum_vypujcky()
{
    return datum;
}

QString PlusVypujcka::datum_vraceni()
{
    return datum_vracenii;
}

QString PlusVypujcka::datum_varovani()
{
    return datum_varovanii;
}

QString PlusVypujcka::poznamka()
{
    return ui->lineEditPoznamka->text();
}

void PlusVypujcka::on_pushButtonLhuta_clicked()
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
