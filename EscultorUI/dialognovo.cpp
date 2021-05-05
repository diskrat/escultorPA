#include "dialognovo.h"
#include "ui_dialognovo.h"

DialogNovo::DialogNovo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNovo)
{
    ui->setupUi(this);
}

DialogNovo::~DialogNovo()
{
    delete ui;
}

int DialogNovo::getX()
{
    return ui->spinBoxX->value();
}

int DialogNovo::getY()
{
    return ui->spinBoxY->value();
}

int DialogNovo::getZ()
{
    return ui->spinBoxZ->value();
}

