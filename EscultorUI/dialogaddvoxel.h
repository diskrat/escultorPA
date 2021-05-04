#ifndef DIALOGADDVOXEL_H
#define DIALOGADDVOXEL_H

#include <QDialog>
#include <QString>
#include <QSlider>

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
    float valorR();
    float valorG();
    float valorB();
    float valorAlpha();


private:
    Ui::DialogAddVoxel *ui;
};

#endif // DIALOGADDVOXEL_H
