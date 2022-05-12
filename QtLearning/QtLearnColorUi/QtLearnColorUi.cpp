//
// Created by Cao Jian on 2022/5/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_QtLearnColorUi.h" resolved

#include "QtLearnColorUi.h"
#include "ui_QtLearnColorUi.h"


QtLearnColorUi::QtLearnColorUi(QWidget *parent) :
        QWidget(parent), ui(new Ui::QtLearnColorUi) {
    ui->setupUi(this);
}

QtLearnColorUi::~QtLearnColorUi() {
    delete ui;
}

