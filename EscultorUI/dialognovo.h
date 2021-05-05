#ifndef DIALOGNOVO_H
#define DIALOGNOVO_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogNovo;
}

class DialogNovo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNovo(QWidget *parent = nullptr);
    ~DialogNovo();
    int getX();
    int getY();
    int getZ();
private:
    Ui::DialogNovo *ui;
};

#endif // DIALOGNOVO_H
