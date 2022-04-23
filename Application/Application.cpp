//
// Created by Cao Jian on 2022/4/23.
//

#include "Application.h"


int Application::mainApp(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}