#ifndef PLUSZAK_H
#define PLUSZAK_H

#include <QDialog>

namespace Ui {
class PlusZak;
}

class PlusZak : public QDialog
{
    Q_OBJECT

public:
    explicit PlusZak(QWidget *parent = 0);
    QString JmenoZak();
    QString TridaZak();
    int RokNastup();
    ~PlusZak();

private:
    Ui::PlusZak *ui;
};

#endif // PLUSZAK_H
