#ifndef PLUSUCITEL_H
#define PLUSUCITEL_H

#include <QDialog>

namespace Ui {
class PlusUcitel;
}

class PlusUcitel : public QDialog
{
    Q_OBJECT

public:
    explicit PlusUcitel(QWidget *parent = 0);
    ~PlusUcitel();
    QString JmenoUcitel();

private:
    Ui::PlusUcitel *ui;
};

#endif // PLUSUCITEL_H
