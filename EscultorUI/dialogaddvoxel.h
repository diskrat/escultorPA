#ifndef DIALOGADDVOXEL_H
#define DIALOGADDVOXEL_H

#include <QDialog>

namespace Ui {
class DialogAddVoxel;
}

class DialogAddVoxel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddVoxel(QWidget *parent = nullptr);
    ~DialogAddVoxel();
    QString getTextX();
    QString getTextY();
    QString getTextZ();

private:
    Ui::DialogAddVoxel *ui;
};

#endif // DIALOGADDVOXEL_H
