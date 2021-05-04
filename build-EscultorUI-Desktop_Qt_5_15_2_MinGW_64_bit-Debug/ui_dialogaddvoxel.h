/********************************************************************************
** Form generated from reading UI file 'dialogaddvoxel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDVOXEL_H
#define UI_DIALOGADDVOXEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddVoxel
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelSetCorR;
    QSlider *horizontalSliderSetCorR;
    QLCDNumber *lcdNumberSetCorR;
    QHBoxLayout *horizontalLayout_4;
    QLabel *LabelSetCorG;
    QSlider *horizontalSliderSetCorG;
    QLCDNumber *lcdNumberSetCorG;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LabelSetCorB;
    QSlider *horizontalSliderSetCorB;
    QLCDNumber *lcdNumberSetCorB;
    QHBoxLayout *horizontalLayout_6;
    QLabel *LabelSetCorAlpha;
    QSlider *horizontalSliderSetCorAlpha;
    QLCDNumber *lcdNumberSetCorAlpha;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelPosVoxX;
    QLineEdit *lineEditPosVoxX;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labellPosVoxY;
    QLineEdit *lineEditlPosVoxY;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labellPosVoxZ;
    QLineEdit *lineEditlPosVoxZ;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAddVoxel)
    {
        if (DialogAddVoxel->objectName().isEmpty())
            DialogAddVoxel->setObjectName(QString::fromUtf8("DialogAddVoxel"));
        DialogAddVoxel->resize(400, 300);
        layoutWidget = new QWidget(DialogAddVoxel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 341, 214));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LabelSetCorR = new QLabel(layoutWidget);
        LabelSetCorR->setObjectName(QString::fromUtf8("LabelSetCorR"));

        horizontalLayout->addWidget(LabelSetCorR);

        horizontalSliderSetCorR = new QSlider(layoutWidget);
        horizontalSliderSetCorR->setObjectName(QString::fromUtf8("horizontalSliderSetCorR"));
        horizontalSliderSetCorR->setMaximum(255);
        horizontalSliderSetCorR->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderSetCorR);

        lcdNumberSetCorR = new QLCDNumber(layoutWidget);
        lcdNumberSetCorR->setObjectName(QString::fromUtf8("lcdNumberSetCorR"));
        lcdNumberSetCorR->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberSetCorR);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        LabelSetCorG = new QLabel(layoutWidget);
        LabelSetCorG->setObjectName(QString::fromUtf8("LabelSetCorG"));

        horizontalLayout_4->addWidget(LabelSetCorG);

        horizontalSliderSetCorG = new QSlider(layoutWidget);
        horizontalSliderSetCorG->setObjectName(QString::fromUtf8("horizontalSliderSetCorG"));
        horizontalSliderSetCorG->setMaximum(255);
        horizontalSliderSetCorG->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderSetCorG);

        lcdNumberSetCorG = new QLCDNumber(layoutWidget);
        lcdNumberSetCorG->setObjectName(QString::fromUtf8("lcdNumberSetCorG"));
        lcdNumberSetCorG->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumberSetCorG);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        LabelSetCorB = new QLabel(layoutWidget);
        LabelSetCorB->setObjectName(QString::fromUtf8("LabelSetCorB"));

        horizontalLayout_5->addWidget(LabelSetCorB);

        horizontalSliderSetCorB = new QSlider(layoutWidget);
        horizontalSliderSetCorB->setObjectName(QString::fromUtf8("horizontalSliderSetCorB"));
        horizontalSliderSetCorB->setMaximum(255);
        horizontalSliderSetCorB->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderSetCorB);

        lcdNumberSetCorB = new QLCDNumber(layoutWidget);
        lcdNumberSetCorB->setObjectName(QString::fromUtf8("lcdNumberSetCorB"));
        lcdNumberSetCorB->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumberSetCorB);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        LabelSetCorAlpha = new QLabel(layoutWidget);
        LabelSetCorAlpha->setObjectName(QString::fromUtf8("LabelSetCorAlpha"));

        horizontalLayout_6->addWidget(LabelSetCorAlpha);

        horizontalSliderSetCorAlpha = new QSlider(layoutWidget);
        horizontalSliderSetCorAlpha->setObjectName(QString::fromUtf8("horizontalSliderSetCorAlpha"));
        horizontalSliderSetCorAlpha->setMaximum(100);
        horizontalSliderSetCorAlpha->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderSetCorAlpha);

        lcdNumberSetCorAlpha = new QLCDNumber(layoutWidget);
        lcdNumberSetCorAlpha->setObjectName(QString::fromUtf8("lcdNumberSetCorAlpha"));
        lcdNumberSetCorAlpha->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumberSetCorAlpha);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelPosVoxX = new QLabel(layoutWidget);
        labelPosVoxX->setObjectName(QString::fromUtf8("labelPosVoxX"));

        horizontalLayout_7->addWidget(labelPosVoxX);

        lineEditPosVoxX = new QLineEdit(layoutWidget);
        lineEditPosVoxX->setObjectName(QString::fromUtf8("lineEditPosVoxX"));

        horizontalLayout_7->addWidget(lineEditPosVoxX);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labellPosVoxY = new QLabel(layoutWidget);
        labellPosVoxY->setObjectName(QString::fromUtf8("labellPosVoxY"));

        horizontalLayout_8->addWidget(labellPosVoxY);

        lineEditlPosVoxY = new QLineEdit(layoutWidget);
        lineEditlPosVoxY->setObjectName(QString::fromUtf8("lineEditlPosVoxY"));

        horizontalLayout_8->addWidget(lineEditlPosVoxY);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        labellPosVoxZ = new QLabel(layoutWidget);
        labellPosVoxZ->setObjectName(QString::fromUtf8("labellPosVoxZ"));

        horizontalLayout_9->addWidget(labellPosVoxZ);

        lineEditlPosVoxZ = new QLineEdit(layoutWidget);
        lineEditlPosVoxZ->setObjectName(QString::fromUtf8("lineEditlPosVoxZ"));

        horizontalLayout_9->addWidget(lineEditlPosVoxZ);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_10->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_10->addWidget(buttonBox);


        retranslateUi(DialogAddVoxel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAddVoxel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAddVoxel, SLOT(reject()));
        QObject::connect(horizontalSliderSetCorR, SIGNAL(valueChanged(int)), lcdNumberSetCorR, SLOT(display(int)));
        QObject::connect(horizontalSliderSetCorG, SIGNAL(valueChanged(int)), lcdNumberSetCorG, SLOT(display(int)));
        QObject::connect(horizontalSliderSetCorB, SIGNAL(valueChanged(int)), lcdNumberSetCorB, SLOT(display(int)));
        QObject::connect(horizontalSliderSetCorAlpha, SIGNAL(valueChanged(int)), lcdNumberSetCorAlpha, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DialogAddVoxel);
    } // setupUi

    void retranslateUi(QDialog *DialogAddVoxel)
    {
        DialogAddVoxel->setWindowTitle(QCoreApplication::translate("DialogAddVoxel", "Dialog", nullptr));
        LabelSetCorR->setText(QCoreApplication::translate("DialogAddVoxel", "R:", nullptr));
        LabelSetCorG->setText(QCoreApplication::translate("DialogAddVoxel", "G:", nullptr));
        LabelSetCorB->setText(QCoreApplication::translate("DialogAddVoxel", "B:", nullptr));
        LabelSetCorAlpha->setText(QCoreApplication::translate("DialogAddVoxel", "Alpha:", nullptr));
        labelPosVoxX->setText(QCoreApplication::translate("DialogAddVoxel", "x:", nullptr));
        labellPosVoxY->setText(QCoreApplication::translate("DialogAddVoxel", "y:", nullptr));
        labellPosVoxZ->setText(QCoreApplication::translate("DialogAddVoxel", "z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddVoxel: public Ui_DialogAddVoxel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDVOXEL_H
