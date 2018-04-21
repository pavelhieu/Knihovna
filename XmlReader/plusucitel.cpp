#include "plusucitel.h"
#include "ui_plusucitel.h"
#include "dialogucitele.h"

#include <QDebug>
#include <QMessageBox>

PlusUcitel::PlusUcitel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlusUcitel)
{
    ui->setupUi(this);
}

QString PlusUcitel::JmenoUcitel()
{
        return ui->lineEditJmenoUcitel->text();
}
PlusUcitel::~PlusUcitel()
{
    delete ui;
}
