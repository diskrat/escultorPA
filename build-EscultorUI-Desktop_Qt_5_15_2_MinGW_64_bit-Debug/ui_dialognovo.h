/********************************************************************************
** Form generated from reading UI file 'dialognovo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNOVO_H
#define UI_DIALOGNOVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNovo
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTamanhoX;
    QSpinBox *spinBoxX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTamanhoY;
    QSpinBox *spinBoxY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTamanhoZ;
    QSpinBox *spinBoxZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogNovo)
    {
        if (DialogNovo->objectName().isEmpty())
            DialogNovo->setObjectName(QString::fromUtf8("DialogNovo"));
        DialogNovo->resize(252, 150);
        layoutWidget = new QWidget(DialogNovo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 211, 101));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTamanhoX = new QLabel(layoutWidget);
        labelTamanhoX->setObjectName(QString::fromUtf8("labelTamanhoX"));

        horizontalLayout->addWidget(labelTamanhoX);

        spinBoxX = new QSpinBox(layoutWidget);
        spinBoxX->setObjectName(QString::fromUtf8("spinBoxX"));
        spinBoxX->setValue(10);

        horizontalLayout->addWidget(spinBoxX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTamanhoY = new QLabel(layoutWidget);
        labelTamanhoY->setObjectName(QString::fromUtf8("labelTamanhoY"));

        horizontalLayout_2->addWidget(labelTamanhoY);

        spinBoxY = new QSpinBox(layoutWidget);
        spinBoxY->setObjectName(QString::fromUtf8("spinBoxY"));
        spinBoxY->setValue(10);

        horizontalLayout_2->addWidget(spinBoxY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelTamanhoZ = new QLabel(layoutWidget);
        labelTamanhoZ->setObjectName(QString::fromUtf8("labelTamanhoZ"));

        horizontalLayout_3->addWidget(labelTamanhoZ);

        spinBoxZ = new QSpinBox(layoutWidget);
        spinBoxZ->setObjectName(QString::fromUtf8("spinBoxZ"));
        spinBoxZ->setValue(10);

        horizontalLayout_3->addWidget(spinBoxZ);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        retranslateUi(DialogNovo);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNovo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNovo, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNovo);
    } // setupUi

    void retranslateUi(QDialog *DialogNovo)
    {
        DialogNovo->setWindowTitle(QCoreApplication::translate("DialogNovo", "Dialog", nullptr));
        labelTamanhoX->setText(QCoreApplication::translate("DialogNovo", "x:", nullptr));
        labelTamanhoY->setText(QCoreApplication::translate("DialogNovo", "y:", nullptr));
        labelTamanhoZ->setText(QCoreApplication::translate("DialogNovo", "z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNovo: public Ui_DialogNovo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNOVO_H
