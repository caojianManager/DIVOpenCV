/********************************************************************************
** Form generated from reading UI file 'OpTestColor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTESTCOLOR_H
#define UI_OPTESTCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpTestColor
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *OpTestColor)
    {
        if (OpTestColor->objectName().isEmpty())
            OpTestColor->setObjectName(QString::fromUtf8("OpTestColor"));
        OpTestColor->resize(344, 328);
        horizontalLayout_4 = new QHBoxLayout(OpTestColor);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_3 = new QCheckBox(OpTestColor);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_2->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(OpTestColor);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        checkBox = new QCheckBox(OpTestColor);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_3 = new QRadioButton(OpTestColor);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(OpTestColor);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(OpTestColor);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(OpTestColor);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(OpTestColor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(OpTestColor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        QWidget::setTabOrder(checkBox_3, checkBox_2);
        QWidget::setTabOrder(checkBox_2, checkBox);
        QWidget::setTabOrder(checkBox, radioButton_3);
        QWidget::setTabOrder(radioButton_3, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton);
        QWidget::setTabOrder(radioButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(OpTestColor);

        QMetaObject::connectSlotsByName(OpTestColor);
    } // setupUi

    void retranslateUi(QWidget *OpTestColor)
    {
        OpTestColor->setWindowTitle(QCoreApplication::translate("OpTestColor", "OpTestColor", nullptr));
        checkBox_3->setText(QCoreApplication::translate("OpTestColor", "Underline", nullptr));
        checkBox_2->setText(QCoreApplication::translate("OpTestColor", "Italic", nullptr));
        checkBox->setText(QCoreApplication::translate("OpTestColor", "Blod", nullptr));
        radioButton_3->setText(QCoreApplication::translate("OpTestColor", "\351\273\221\350\211\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("OpTestColor", "\347\272\242\350\211\262", nullptr));
        radioButton->setText(QCoreApplication::translate("OpTestColor", "\350\223\235\350\211\262", nullptr));
        pushButton->setText(QCoreApplication::translate("OpTestColor", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OpTestColor", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpTestColor: public Ui_OpTestColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTESTCOLOR_H
