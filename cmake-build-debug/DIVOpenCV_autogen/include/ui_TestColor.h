/********************************************************************************
** Form generated from reading UI file 'TestColor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCOLOR_H
#define UI_TESTCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestColor
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *TestColor)
    {
        if (TestColor->objectName().isEmpty())
            TestColor->setObjectName(QString::fromUtf8("TestColor"));
        TestColor->resize(400, 300);
        centralWidget = new QWidget(TestColor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TestColor->setCentralWidget(centralWidget);

        retranslateUi(TestColor);

        QMetaObject::connectSlotsByName(TestColor);
    } // setupUi

    void retranslateUi(QMainWindow *TestColor)
    {
        TestColor->setWindowTitle(QCoreApplication::translate("TestColor", "TestColor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestColor: public Ui_TestColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCOLOR_H
