#include "pluszak.h"
#include "ui_pluszak.h"
#include <QDebug>

PlusZak::PlusZak(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlusZak)
{
    ui->setupUi(this);
}

QString PlusZak::JmenoZak()
{
    return ui->lineEditJmenoZak->text();
}

QString PlusZak::TridaZak()
{
    return ui->lineEditTridaZak->text();
}

int PlusZak::RokNastup()
{
    return ui->spinBox->value();
}

PlusZak::~PlusZak()
{
    delete ui;
}
