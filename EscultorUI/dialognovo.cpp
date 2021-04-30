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

QString DialogNovo::getTextX()
{
    return ui->lineEditX->text();
}

QString DialogNovo::getTextY()
{
    return ui->lineEditY->text();
}

QString DialogNovo::getTextZ()
{
    return ui->lineEditZ->text();
}
