/********************************************************************************
** Form generated from reading UI file 'mainescultor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINESCULTOR_H
#define UI_MAINESCULTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainEscultor
{
public:
    QAction *actionSair;
    QAction *actionAdd_Voxel;
    QAction *actionCorta_Voxel;
    QAction *actionAdd_Caixa;
    QAction *actionCorta_Caixa;
    QAction *actionAdd_Esfera;
    QAction *actionCorta_Esfera;
    QAction *actionAdd_Elipsoide;
    QAction *actionCorta_Elipsoide;
    QAction *actionSalvar;
    QAction *actionNovo;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainEscultor)
    {
        if (MainEscultor->objectName().isEmpty())
            MainEscultor->setObjectName(QString::fromUtf8("MainEscultor"));
        MainEscultor->resize(606, 332);
        actionSair = new QAction(MainEscultor);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionAdd_Voxel = new QAction(MainEscultor);
        actionAdd_Voxel->setObjectName(QString::fromUtf8("actionAdd_Voxel"));
        actionCorta_Voxel = new QAction(MainEscultor);
        actionCorta_Voxel->setObjectName(QString::fromUtf8("actionCorta_Voxel"));
        actionAdd_Caixa = new QAction(MainEscultor);
        actionAdd_Caixa->setObjectName(QString::fromUtf8("actionAdd_Caixa"));
        actionCorta_Caixa = new QAction(MainEscultor);
        actionCorta_Caixa->setObjectName(QString::fromUtf8("actionCorta_Caixa"));
        actionAdd_Esfera = new QAction(MainEscultor);
        actionAdd_Esfera->setObjectName(QString::fromUtf8("actionAdd_Esfera"));
        actionCorta_Esfera = new QAction(MainEscultor);
        actionCorta_Esfera->setObjectName(QString::fromUtf8("actionCorta_Esfera"));
        actionAdd_Elipsoide = new QAction(MainEscultor);
        actionAdd_Elipsoide->setObjectName(QString::fromUtf8("actionAdd_Elipsoide"));
        actionCorta_Elipsoide = new QAction(MainEscultor);
        actionCorta_Elipsoide->setObjectName(QString::fromUtf8("actionCorta_Elipsoide"));
        actionSalvar = new QAction(MainEscultor);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionNovo = new QAction(MainEscultor);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        centralwidget = new QWidget(MainEscultor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainEscultor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainEscultor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 606, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainEscultor->setMenuBar(menubar);
        statusbar = new QStatusBar(MainEscultor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainEscultor->setStatusBar(statusbar);
        toolBar = new QToolBar(MainEscultor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainEscultor);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainEscultor);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSalvar);
        menuFile->addAction(actionSair);
        toolBar->addAction(actionNovo);
        toolBar_2->addAction(actionAdd_Voxel);
        toolBar_2->addAction(actionAdd_Caixa);
        toolBar_2->addAction(actionAdd_Esfera);
        toolBar_2->addAction(actionAdd_Elipsoide);
        toolBar_3->addAction(actionCorta_Voxel);
        toolBar_3->addAction(actionCorta_Caixa);
        toolBar_3->addAction(actionCorta_Esfera);
        toolBar_3->addAction(actionCorta_Elipsoide);

        retranslateUi(MainEscultor);

        QMetaObject::connectSlotsByName(MainEscultor);
    } // setupUi

    void retranslateUi(QMainWindow *MainEscultor)
    {
        MainEscultor->setWindowTitle(QCoreApplication::translate("MainEscultor", "MainEscultor", nullptr));
        actionSair->setText(QCoreApplication::translate("MainEscultor", "Sair", nullptr));
        actionAdd_Voxel->setText(QCoreApplication::translate("MainEscultor", "Add Voxel", nullptr));
        actionCorta_Voxel->setText(QCoreApplication::translate("MainEscultor", "Corta Voxel", nullptr));
        actionAdd_Caixa->setText(QCoreApplication::translate("MainEscultor", "Add Caixa", nullptr));
        actionCorta_Caixa->setText(QCoreApplication::translate("MainEscultor", "Corta Caixa", nullptr));
        actionAdd_Esfera->setText(QCoreApplication::translate("MainEscultor", "Add Esfera", nullptr));
        actionCorta_Esfera->setText(QCoreApplication::translate("MainEscultor", "Corta Esfera", nullptr));
        actionAdd_Elipsoide->setText(QCoreApplication::translate("MainEscultor", "Add Elipsoide", nullptr));
        actionCorta_Elipsoide->setText(QCoreApplication::translate("MainEscultor", "Corta Elipsoide", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainEscultor", "Salvar", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainEscultor", "Novo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainEscultor", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainEscultor: public Ui_MainEscultor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINESCULTOR_H
