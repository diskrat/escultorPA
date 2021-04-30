#include "dialogaddvoxel.h"
#include "ui_dialogaddvoxel.h"

DialogAddVoxel::DialogAddVoxel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddVoxel)
{
    ui->setupUi(this);
}

DialogAddVoxel::~DialogAddVoxel()
{
    delete ui;
}
QString DialogAddVoxel::getTextX()
{
    return ui->lineEditX->text();
}

QString DialogAddVoxel::getTextY()
{
    return ui->lineEditY->text();
}

QString DialogAddVoxel::getTextZ()
{
    return ui->lineEditZ->text();
}
