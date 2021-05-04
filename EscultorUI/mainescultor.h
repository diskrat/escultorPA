#ifndef MAINESCULTOR_H
#define MAINESCULTOR_H
#include "sculptor.hpp"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainEscultor; }
QT_END_NAMESPACE

class MainEscultor : public QMainWindow
{
    Q_OBJECT

public:
    MainEscultor(QWidget *parent = nullptr);
    ~MainEscultor();
    Sculptor fig;

public slots:
    void quitEscultor();
    void abreDialogNovo();
    void abreDialogAddVoxel();
    void DisableButtons();
    void EnableButtons();


private:
    Ui::MainEscultor *ui;
    ;
};
#endif // MAINESCULTOR_H
