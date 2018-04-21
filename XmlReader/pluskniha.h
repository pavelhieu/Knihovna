#ifndef PLUSKNIHA_H
#define PLUSKNIHA_H

#include <QDialog>

namespace Ui {
class PlusKniha;
}

class PlusKniha : public QDialog
{
    Q_OBJECT

public:
    explicit PlusKniha(QWidget *parent = 0);
    ~PlusKniha();

private:
    Ui::PlusKniha *ui;
};

#endif // PLUSKNIHA_H
