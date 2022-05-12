//
// Created by Cao Jian on 2022/5/11.
//

#ifndef DIVOPENCV_QTLEARNCOLORUI_H
#define DIVOPENCV_QTLEARNCOLORUI_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class QtLearnColorUi; }
QT_END_NAMESPACE

class QtLearnColorUi : public QWidget {
Q_OBJECT

public:
    explicit QtLearnColorUi(QWidget *parent = 0);

    ~QtLearnColorUi() override;

private:
    Ui::QtLearnColorUi *ui;
};


#endif //DIVOPENCV_QTLEARNCOLORUI_H
