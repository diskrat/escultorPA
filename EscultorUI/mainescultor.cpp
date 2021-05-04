#include "mainescultor.h"
#include "ui_mainescultor.h"
#include <cstdlib>
#include "dialognovo.h"
#include <QToolBar>
#include <QAction>
MainEscultor::MainEscultor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainEscultor)
{
    ui->setupUi(this);
    DisableButtons();
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
        EnableButtons();
    }

}

void MainEscultor::DisableButtons()
{
    ui->actionSalvar->setDisabled(true);
    ui->actionAdd_Voxel->setDisabled(true);
    ui->actionAdd_Caixa->setDisabled(true);
    ui->actionAdd_Esfera->setDisabled(true);
    ui->actionAdd_Elipsoide->setDisabled(true);
    ui->actionCorta_Voxel->setDisabled(true);
    ui->actionCorta_Caixa->setDisabled(true);
    ui->actionCorta_Esfera->setDisabled(true);
    ui->actionCorta_Elipsoide->setDisabled(true);
    ui->widgetrRGB->setDisabled(true);
    ui->spinBoxR->setDisabled(true);
    ui->spinBoxG->setDisabled(true);
    ui->spinBoxB->setDisabled(true);
    ui->spinBoxAlpha->setDisabled(true);
    ui->horizontalSliderR->setDisabled(true);
    ui->horizontalSliderG->setDisabled(true);
    ui->horizontalSliderB->setDisabled(true);
    ui->horizontalSliderAlpha->setDisabled(true);
}

void MainEscultor::EnableButtons()
{
    ui->actionSalvar->setEnabled(true);
    ui->actionAdd_Voxel->setEnabled(true);
    ui->actionAdd_Caixa->setEnabled(true);
    ui->actionAdd_Esfera->setEnabled(true);
    ui->actionAdd_Elipsoide->setEnabled(true);
    ui->actionCorta_Voxel->setEnabled(true);
    ui->actionCorta_Caixa->setEnabled(true);
    ui->actionCorta_Esfera->setEnabled(true);
    ui->actionCorta_Elipsoide->setEnabled(true);
    ui->widgetrRGB->setEnabled(true);
    ui->spinBoxR->setEnabled(true);
    ui->spinBoxG->setEnabled(true);
    ui->spinBoxB->setEnabled(true);
    ui->spinBoxAlpha->setEnabled(true);
    ui->horizontalSliderR->setEnabled(true);
    ui->horizontalSliderG->setEnabled(true);
    ui->horizontalSliderB->setEnabled(true);
    ui->horizontalSliderAlpha->setEnabled(true);
}

