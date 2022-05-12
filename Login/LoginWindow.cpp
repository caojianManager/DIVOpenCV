//
// Created by Cao Jian on 2022/5/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoginWindow.h" resolved

#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include "../MainWindow/MainWindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);
}

LoginWindow::~LoginWindow() {
    delete ui;
}

//Private slots
void LoginWindow::on_loginButton_clicked() {
    MainWindow *mainWindow = new MainWindow();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    mainWindow->setWindowTitle("主界面");
    mainWindow->show();
}
