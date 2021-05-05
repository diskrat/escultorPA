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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorrgb.h"
#include "plotter.h"

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
    Plotter *widgetDraw;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutR;
    QLabel *labelR;
    QSpinBox *spinBoxR;
    QSlider *horizontalSliderR;
    QHBoxLayout *horizontalLayoutG;
    QLabel *labelG;
    QSpinBox *spinBoxG;
    QSlider *horizontalSliderG;
    QHBoxLayout *horizontalLayoutB;
    QLabel *labelB;
    QSpinBox *spinBoxB;
    QSlider *horizontalSliderB;
    QHBoxLayout *horizontalLayoutAlpha;
    QLabel *labelAlpha;
    QSpinBox *spinBoxAlpha;
    QSlider *horizontalSliderAlpha;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    colorRGB *widgetRGB;
    QSpacerItem *verticalSpacer;
    QSlider *verticalSliderPosZ;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelMousePosX;
    QLCDNumber *lcdMousePosX;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelMousePosY;
    QLCDNumber *lcdMousePosY;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMousePosZ;
    QLCDNumber *lcdMousePosZ;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBarAdd;
    QToolBar *toolBarCorta;

    void setupUi(QMainWindow *MainEscultor)
    {
        if (MainEscultor->objectName().isEmpty())
            MainEscultor->setObjectName(QString::fromUtf8("MainEscultor"));
        MainEscultor->resize(443, 562);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainEscultor->sizePolicy().hasHeightForWidth());
        MainEscultor->setSizePolicy(sizePolicy);
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
        widgetDraw = new Plotter(centralwidget);
        widgetDraw->setObjectName(QString::fromUtf8("widgetDraw"));
        widgetDraw->setEnabled(false);
        widgetDraw->setGeometry(QRect(11, 154, 300, 300));
        widgetDraw->setMinimumSize(QSize(300, 300));
        widgetDraw->setBaseSize(QSize(100, 100));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 0, 226, 136));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutR = new QHBoxLayout();
        horizontalLayoutR->setObjectName(QString::fromUtf8("horizontalLayoutR"));
        labelR = new QLabel(layoutWidget);
        labelR->setObjectName(QString::fromUtf8("labelR"));

        horizontalLayoutR->addWidget(labelR);

        spinBoxR = new QSpinBox(layoutWidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxR->sizePolicy().hasHeightForWidth());
        spinBoxR->setSizePolicy(sizePolicy1);
        spinBoxR->setMaximum(255);
        spinBoxR->setSingleStep(10);
        spinBoxR->setValue(255);

        horizontalLayoutR->addWidget(spinBoxR);

        horizontalSliderR = new QSlider(layoutWidget);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setValue(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        horizontalLayoutR->addWidget(horizontalSliderR);


        verticalLayout->addLayout(horizontalLayoutR);

        horizontalLayoutG = new QHBoxLayout();
        horizontalLayoutG->setObjectName(QString::fromUtf8("horizontalLayoutG"));
        labelG = new QLabel(layoutWidget);
        labelG->setObjectName(QString::fromUtf8("labelG"));

        horizontalLayoutG->addWidget(labelG);

        spinBoxG = new QSpinBox(layoutWidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        sizePolicy1.setHeightForWidth(spinBoxG->sizePolicy().hasHeightForWidth());
        spinBoxG->setSizePolicy(sizePolicy1);
        spinBoxG->setMaximum(255);
        spinBoxG->setSingleStep(10);
        spinBoxG->setValue(255);

        horizontalLayoutG->addWidget(spinBoxG);

        horizontalSliderG = new QSlider(layoutWidget);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setValue(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        horizontalLayoutG->addWidget(horizontalSliderG);


        verticalLayout->addLayout(horizontalLayoutG);

        horizontalLayoutB = new QHBoxLayout();
        horizontalLayoutB->setObjectName(QString::fromUtf8("horizontalLayoutB"));
        labelB = new QLabel(layoutWidget);
        labelB->setObjectName(QString::fromUtf8("labelB"));

        horizontalLayoutB->addWidget(labelB);

        spinBoxB = new QSpinBox(layoutWidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        sizePolicy1.setHeightForWidth(spinBoxB->sizePolicy().hasHeightForWidth());
        spinBoxB->setSizePolicy(sizePolicy1);
        spinBoxB->setMaximum(255);
        spinBoxB->setSingleStep(10);
        spinBoxB->setValue(255);

        horizontalLayoutB->addWidget(spinBoxB);

        horizontalSliderB = new QSlider(layoutWidget);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setValue(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        horizontalLayoutB->addWidget(horizontalSliderB);


        verticalLayout->addLayout(horizontalLayoutB);

        horizontalLayoutAlpha = new QHBoxLayout();
        horizontalLayoutAlpha->setObjectName(QString::fromUtf8("horizontalLayoutAlpha"));
        labelAlpha = new QLabel(layoutWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));

        horizontalLayoutAlpha->addWidget(labelAlpha);

        spinBoxAlpha = new QSpinBox(layoutWidget);
        spinBoxAlpha->setObjectName(QString::fromUtf8("spinBoxAlpha"));
        sizePolicy1.setHeightForWidth(spinBoxAlpha->sizePolicy().hasHeightForWidth());
        spinBoxAlpha->setSizePolicy(sizePolicy1);
        spinBoxAlpha->setMaximum(100);
        spinBoxAlpha->setSingleStep(10);
        spinBoxAlpha->setValue(100);

        horizontalLayoutAlpha->addWidget(spinBoxAlpha);

        horizontalSliderAlpha = new QSlider(layoutWidget);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setMaximum(100);
        horizontalSliderAlpha->setValue(100);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        horizontalLayoutAlpha->addWidget(horizontalSliderAlpha);


        verticalLayout->addLayout(horizontalLayoutAlpha);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widgetRGB = new colorRGB(layoutWidget);
        widgetRGB->setObjectName(QString::fromUtf8("widgetRGB"));
        widgetRGB->setMinimumSize(QSize(40, 40));

        verticalLayout_2->addWidget(widgetRGB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalSliderPosZ = new QSlider(centralwidget);
        verticalSliderPosZ->setObjectName(QString::fromUtf8("verticalSliderPosZ"));
        verticalSliderPosZ->setGeometry(QRect(330, 240, 16, 160));
        verticalSliderPosZ->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 20, 84, 89));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelMousePosX = new QLabel(layoutWidget1);
        labelMousePosX->setObjectName(QString::fromUtf8("labelMousePosX"));

        horizontalLayout_4->addWidget(labelMousePosX);

        lcdMousePosX = new QLCDNumber(layoutWidget1);
        lcdMousePosX->setObjectName(QString::fromUtf8("lcdMousePosX"));

        horizontalLayout_4->addWidget(lcdMousePosX);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelMousePosY = new QLabel(layoutWidget1);
        labelMousePosY->setObjectName(QString::fromUtf8("labelMousePosY"));

        horizontalLayout_3->addWidget(labelMousePosY);

        lcdMousePosY = new QLCDNumber(layoutWidget1);
        lcdMousePosY->setObjectName(QString::fromUtf8("lcdMousePosY"));

        horizontalLayout_3->addWidget(lcdMousePosY);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelMousePosZ = new QLabel(layoutWidget1);
        labelMousePosZ->setObjectName(QString::fromUtf8("labelMousePosZ"));

        horizontalLayout_2->addWidget(labelMousePosZ);

        lcdMousePosZ = new QLCDNumber(layoutWidget1);
        lcdMousePosZ->setObjectName(QString::fromUtf8("lcdMousePosZ"));

        horizontalLayout_2->addWidget(lcdMousePosZ);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainEscultor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainEscultor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 443, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainEscultor->setMenuBar(menubar);
        statusbar = new QStatusBar(MainEscultor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainEscultor->setStatusBar(statusbar);
        toolBar = new QToolBar(MainEscultor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBarAdd = new QToolBar(MainEscultor);
        toolBarAdd->setObjectName(QString::fromUtf8("toolBarAdd"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBarAdd);
        toolBarCorta = new QToolBar(MainEscultor);
        toolBarCorta->setObjectName(QString::fromUtf8("toolBarCorta"));
        MainEscultor->addToolBar(Qt::TopToolBarArea, toolBarCorta);
        MainEscultor->insertToolBarBreak(toolBarCorta);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSalvar);
        menuFile->addAction(actionSair);
        toolBar->addAction(actionNovo);
        toolBarAdd->addAction(actionAdd_Voxel);
        toolBarAdd->addAction(actionAdd_Caixa);
        toolBarAdd->addAction(actionAdd_Esfera);
        toolBarAdd->addAction(actionAdd_Elipsoide);
        toolBarCorta->addAction(actionCorta_Voxel);
        toolBarCorta->addAction(actionCorta_Caixa);
        toolBarCorta->addAction(actionCorta_Esfera);
        toolBarCorta->addAction(actionCorta_Elipsoide);

        retranslateUi(MainEscultor);
        QObject::connect(spinBoxR, SIGNAL(valueChanged(int)), horizontalSliderR, SLOT(setValue(int)));
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), spinBoxR, SLOT(setValue(int)));
        QObject::connect(spinBoxG, SIGNAL(valueChanged(int)), horizontalSliderG, SLOT(setValue(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), spinBoxG, SLOT(setValue(int)));
        QObject::connect(spinBoxB, SIGNAL(valueChanged(int)), horizontalSliderB, SLOT(setValue(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), spinBoxB, SLOT(setValue(int)));
        QObject::connect(spinBoxAlpha, SIGNAL(valueChanged(int)), horizontalSliderAlpha, SLOT(setValue(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), spinBoxAlpha, SLOT(setValue(int)));
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), widgetRGB, SLOT(setR(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), widgetRGB, SLOT(setG(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), widgetRGB, SLOT(setB(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), widgetRGB, SLOT(setAlpha(int)));
        QObject::connect(verticalSliderPosZ, SIGNAL(valueChanged(int)), lcdMousePosZ, SLOT(display(int)));
        QObject::connect(widgetDraw, SIGNAL(signalMousePosX(int)), lcdMousePosX, SLOT(display(int)));
        QObject::connect(widgetDraw, SIGNAL(signalMousePosY(int)), lcdMousePosY, SLOT(display(int)));

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
        labelR->setText(QCoreApplication::translate("MainEscultor", "R:", nullptr));
        labelG->setText(QCoreApplication::translate("MainEscultor", "G:", nullptr));
        labelB->setText(QCoreApplication::translate("MainEscultor", "B:", nullptr));
        labelAlpha->setText(QCoreApplication::translate("MainEscultor", "Alpha:", nullptr));
        labelMousePosX->setText(QCoreApplication::translate("MainEscultor", "X:", nullptr));
        labelMousePosY->setText(QCoreApplication::translate("MainEscultor", "Y:", nullptr));
        labelMousePosZ->setText(QCoreApplication::translate("MainEscultor", "Z:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainEscultor", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar", nullptr));
        toolBarAdd->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar_2", nullptr));
        toolBarCorta->setWindowTitle(QCoreApplication::translate("MainEscultor", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainEscultor: public Ui_MainEscultor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINESCULTOR_H
