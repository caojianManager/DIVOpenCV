/********************************************************************************
** Form generated from reading UI file 'QtLearnColorUi.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLEARNCOLORUI_H
#define UI_QTLEARNCOLORUI_H

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

class Ui_QtLearnColorUi
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_9;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QWidget *QtLearnColorUi)
    {
        if (QtLearnColorUi->objectName().isEmpty())
            QtLearnColorUi->setObjectName(QString::fromUtf8("QtLearnColorUi"));
        QtLearnColorUi->resize(516, 377);
        horizontalLayout_4 = new QHBoxLayout(QtLearnColorUi);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(QtLearnColorUi);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        checkBox_2 = new QCheckBox(QtLearnColorUi);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        checkBox_3 = new QCheckBox(QtLearnColorUi);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton = new QRadioButton(QtLearnColorUi);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        radioButton_2 = new QRadioButton(QtLearnColorUi);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        radioButton_3 = new QRadioButton(QtLearnColorUi);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_2->addWidget(radioButton_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(QtLearnColorUi);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        pushButton = new QPushButton(QtLearnColorUi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_2 = new QPushButton(QtLearnColorUi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(QtLearnColorUi);

        QMetaObject::connectSlotsByName(QtLearnColorUi);
    } // setupUi

    void retranslateUi(QWidget *QtLearnColorUi)
    {
        QtLearnColorUi->setWindowTitle(QCoreApplication::translate("QtLearnColorUi", "QtLearnColorUi", nullptr));
        checkBox->setText(QCoreApplication::translate("QtLearnColorUi", "Underfine", nullptr));
        checkBox_2->setText(QCoreApplication::translate("QtLearnColorUi", "Cliat", nullptr));
        checkBox_3->setText(QCoreApplication::translate("QtLearnColorUi", "CheckBox", nullptr));
        radioButton->setText(QCoreApplication::translate("QtLearnColorUi", "\351\273\221\350\211\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QtLearnColorUi", "\347\272\242\350\211\262", nullptr));
        radioButton_3->setText(QCoreApplication::translate("QtLearnColorUi", "\350\223\235\350\211\262", nullptr));
        pushButton->setText(QCoreApplication::translate("QtLearnColorUi", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QtLearnColorUi", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLearnColorUi: public Ui_QtLearnColorUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLEARNCOLORUI_H
