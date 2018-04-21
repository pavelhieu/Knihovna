#include "pluskniha.h"
#include "ui_pluskniha.h"

PlusKniha::PlusKniha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlusKniha)
{
    ui->setupUi(this);
}

PlusKniha::~PlusKniha()
{
    delete ui;
}
