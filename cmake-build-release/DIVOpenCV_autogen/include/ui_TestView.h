/********************************************************************************
** Form generated from reading UI file 'TestView.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTVIEW_H
#define UI_TESTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestView
{
public:

    void setupUi(QWidget *TestView)
    {
        if (TestView->objectName().isEmpty())
            TestView->setObjectName(QString::fromUtf8("TestView"));
        TestView->resize(400, 300);

        retranslateUi(TestView);

        QMetaObject::connectSlotsByName(TestView);
    } // setupUi

    void retranslateUi(QWidget *TestView)
    {
        TestView->setWindowTitle(QCoreApplication::translate("TestView", "TestView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestView: public Ui_TestView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTVIEW_H
