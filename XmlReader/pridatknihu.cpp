#include "pridatknihu.h"
#include "ui_pridatknihu.h"
#include "dialogknihy.h"
#include <QDebug>
#include <QMessageBox>

PridatKnihu::PridatKnihu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PridatKnihu)
{
    ui->setupUi(this);
    connect(ui->spinBoxEvidencniCislo,SIGNAL(valueChanged(int)),this,SLOT(existujiciID()));
}
int PridatKnihu::Id_kniha()
{
    return ui->spinBoxEvidencniCislo->value();
}

QString PridatKnihu::NazevKnihy()
{
    return ui->lineEditNazevKnihy->text();
}

QString PridatKnihu::Autor1()
{
    return ui->lineEditAutor1->text();
}

QString PridatKnihu::Autor2()
{
    return ui->lineEditAutor2->text();
}

QString PridatKnihu::MistoVydani()
{
    return ui->lineEditMisto->text();
}

int PridatKnihu::RokVydani()
{
    return ui->spinBoxRok->value();
}

QString PridatKnihu::Tematika()
{
    return ui->lineEditTematika->text();
}

QString PridatKnihu::Cena()
{
    return ui->lineEditCena->text();
}

int PridatKnihu::PocetStran()
{
    return ui->spinBoxStrana->value();
}

PridatKnihu::~PridatKnihu()
{
    delete ui;
}


void PridatKnihu::on_radioButtonKniha_clicked()
{
    ui->label_2->setText("Název knihy");
    ui->spinBoxStrana->show();
    ui->label_9->show();
    return  ui->spinBoxEvidencniCislo->setValue(0);
}

void PridatKnihu::on_radioButtonCD_clicked()
{
    ui->label_2->setText("Název CD");
    ui->spinBoxStrana->hide();
    ui->label_9->hide();
    return ui->spinBoxEvidencniCislo->setValue(999);
}

void PridatKnihu::existujiciID()
{
    model = new QSqlTableModel(this);
    model->setTable("Kniha");
    model->select();

    QSqlQuery dotaz;
    dotaz.prepare("SELECT id_kniha,nazev FROM Kniha WHERE id_kniha IN(" +
                  QString::number(ui->spinBoxEvidencniCislo->value()) + ")");
    dotaz.exec();
    if (dotaz.next()) {
        qDebug() << "Nasel zaznam" << dotaz.value(0).toString();
        QMessageBox::information(this,"Pozor!!!","Pod číslem " + QString::number(ui->spinBoxEvidencniCislo->value()) +
                                 " je uložena kniha \"" + dotaz.value(1).toString() + "\"."
                                 "\nZadejte prosím jiné číslo");
        return;
    }
    else {
        qDebug() << "Nenasel jsem zadny zaznam";
    }
}
