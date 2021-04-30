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
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddVoxel
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *LabelSetCorG;
    QSlider *horizontalSliderSetCorG;
    QLCDNumber *lcdNumberSetCorG;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LabelSetCorB;
    QSlider *horizontalSliderSetCorB;
    QLCDNumber *lcdNumberSetCorB;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *LabelSetCorAlpha;
    QSlider *horizontalSliderSetCorAlpha;
    QLCDNumber *lcdNumberSetCorAlpha;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelSetCorR;
    QSlider *horizontalSliderSetCorR;
    QLCDNumber *lcdNumberSetCorR;

    void setupUi(QDialog *DialogAddVoxel)
    {
        if (DialogAddVoxel->objectName().isEmpty())
            DialogAddVoxel->setObjectName(QString::fromUtf8("DialogAddVoxel"));
        DialogAddVoxel->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogAddVoxel);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(DialogAddVoxel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 241, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
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

        layoutWidget_2 = new QWidget(DialogAddVoxel);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 80, 241, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        LabelSetCorB = new QLabel(layoutWidget_2);
        LabelSetCorB->setObjectName(QString::fromUtf8("LabelSetCorB"));

        horizontalLayout_5->addWidget(LabelSetCorB);

        horizontalSliderSetCorB = new QSlider(layoutWidget_2);
        horizontalSliderSetCorB->setObjectName(QString::fromUtf8("horizontalSliderSetCorB"));
        horizontalSliderSetCorB->setMaximum(255);
        horizontalSliderSetCorB->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderSetCorB);

        lcdNumberSetCorB = new QLCDNumber(layoutWidget_2);
        lcdNumberSetCorB->setObjectName(QString::fromUtf8("lcdNumberSetCorB"));
        lcdNumberSetCorB->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumberSetCorB);

        layoutWidget_3 = new QWidget(DialogAddVoxel);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 110, 241, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        LabelSetCorAlpha = new QLabel(layoutWidget_3);
        LabelSetCorAlpha->setObjectName(QString::fromUtf8("LabelSetCorAlpha"));

        horizontalLayout_6->addWidget(LabelSetCorAlpha);

        horizontalSliderSetCorAlpha = new QSlider(layoutWidget_3);
        horizontalSliderSetCorAlpha->setObjectName(QString::fromUtf8("horizontalSliderSetCorAlpha"));
        horizontalSliderSetCorAlpha->setMaximum(100);
        horizontalSliderSetCorAlpha->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderSetCorAlpha);

        lcdNumberSetCorAlpha = new QLCDNumber(layoutWidget_3);
        lcdNumberSetCorAlpha->setObjectName(QString::fromUtf8("lcdNumberSetCorAlpha"));
        lcdNumberSetCorAlpha->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumberSetCorAlpha);

        widget = new QWidget(DialogAddVoxel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(31, 20, 241, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LabelSetCorR = new QLabel(widget);
        LabelSetCorR->setObjectName(QString::fromUtf8("LabelSetCorR"));

        horizontalLayout->addWidget(LabelSetCorR);

        horizontalSliderSetCorR = new QSlider(widget);
        horizontalSliderSetCorR->setObjectName(QString::fromUtf8("horizontalSliderSetCorR"));
        horizontalSliderSetCorR->setMaximum(255);
        horizontalSliderSetCorR->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderSetCorR);

        lcdNumberSetCorR = new QLCDNumber(widget);
        lcdNumberSetCorR->setObjectName(QString::fromUtf8("lcdNumberSetCorR"));
        lcdNumberSetCorR->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberSetCorR);


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
        LabelSetCorG->setText(QCoreApplication::translate("DialogAddVoxel", "G:", nullptr));
        LabelSetCorB->setText(QCoreApplication::translate("DialogAddVoxel", "B:", nullptr));
        LabelSetCorAlpha->setText(QCoreApplication::translate("DialogAddVoxel", "Alpha:", nullptr));
        LabelSetCorR->setText(QCoreApplication::translate("DialogAddVoxel", "R:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddVoxel: public Ui_DialogAddVoxel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDVOXEL_H
