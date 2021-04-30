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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNovo
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTamanhoX;
    QLineEdit *lineEditX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTamanhoY;
    QLineEdit *lineEditY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTamanhoZ;
    QLineEdit *lineEditZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogNovo)
    {
        if (DialogNovo->objectName().isEmpty())
            DialogNovo->setObjectName(QString::fromUtf8("DialogNovo"));
        DialogNovo->resize(402, 150);
        widget = new QWidget(DialogNovo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 361, 101));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTamanhoX = new QLabel(widget);
        labelTamanhoX->setObjectName(QString::fromUtf8("labelTamanhoX"));

        horizontalLayout->addWidget(labelTamanhoX);

        lineEditX = new QLineEdit(widget);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));

        horizontalLayout->addWidget(lineEditX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTamanhoY = new QLabel(widget);
        labelTamanhoY->setObjectName(QString::fromUtf8("labelTamanhoY"));

        horizontalLayout_2->addWidget(labelTamanhoY);

        lineEditY = new QLineEdit(widget);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));

        horizontalLayout_2->addWidget(lineEditY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelTamanhoZ = new QLabel(widget);
        labelTamanhoZ->setObjectName(QString::fromUtf8("labelTamanhoZ"));

        horizontalLayout_3->addWidget(labelTamanhoZ);

        lineEditZ = new QLineEdit(widget);
        lineEditZ->setObjectName(QString::fromUtf8("lineEditZ"));

        horizontalLayout_3->addWidget(lineEditZ);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(widget);
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
