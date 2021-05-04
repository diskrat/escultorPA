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
    return ui->lineEditPosVoxX->text();
}

QString DialogAddVoxel::getTextY()
{
    return ui->lineEditlPosVoxY->text();
}

QString DialogAddVoxel::getTextZ()
{
    return ui->lineEditlPosVoxZ->text();
}

float DialogAddVoxel::valorR()
{
    return ui->horizontalSliderSetCorR->value()/255.0;
}
float DialogAddVoxel::valorG()
{
    return ui->horizontalSliderSetCorG->value()/255.0;
}
float DialogAddVoxel::valorB()
{
    return ui->horizontalSliderSetCorB->value()/255.0;
}
float DialogAddVoxel::valorAlpha()
{
    return ui->horizontalSliderSetCorAlpha->value()/100.0;
}
