#include "mainescultor.h"
#include "ui_mainescultor.h"
#include <cstdlib>
#include "dialognovo.h"
#include "dialogaddvoxel.h"

MainEscultor::MainEscultor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainEscultor)
{
    ui->setupUi(this);
    connect(ui->actionSair,
            SIGNAL(triggered(bool)),
            this,
            SLOT(quitEscultor()));
    connect(ui->actionNovo,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abreDialogNovo()));
    connect(ui->actionAdd_Voxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(abreDialogAddVoxel()));
}

MainEscultor::~MainEscultor()
{
    delete ui;
}

void MainEscultor::quitEscultor()
{
    exit(0);
}

void MainEscultor::abreDialogNovo()
{
    DialogNovo d;
    if(d.exec() == QDialog::Accepted)
    {
        bool ok;
        Sculptor fig(d.getTextX().toInt(&ok),d.getTextY().toInt(&ok),d.getTextZ().toInt(&ok));
    }

}

void MainEscultor::abreDialogAddVoxel()
{
    DialogAddVoxel d;
    if(d.exec() == QDialog::Accepted)
    {
        bool ok;
        Sculptor fig.putVoxel();
    }
}

