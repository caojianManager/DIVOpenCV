/********************************************************************************
** Form generated from reading UI file 'TestTES.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTTES_H
#define UI_TESTTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestTES
{
public:
    QLabel *label;

    void setupUi(QWidget *TestTES)
    {
        if (TestTES->objectName().isEmpty())
            TestTES->setObjectName(QString::fromUtf8("TestTES"));
        TestTES->resize(1148, 927);
        label = new QLabel(TestTES);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 80, 60, 16));

        retranslateUi(TestTES);

        QMetaObject::connectSlotsByName(TestTES);
    } // setupUi

    void retranslateUi(QWidget *TestTES)
    {
        TestTES->setWindowTitle(QCoreApplication::translate("TestTES", "TestTES", nullptr));
        label->setText(QCoreApplication::translate("TestTES", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestTES: public Ui_TestTES {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTTES_H
