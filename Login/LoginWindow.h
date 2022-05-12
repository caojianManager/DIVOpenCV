//
// Created by Cao Jian on 2022/5/12.
//

#ifndef DIVOPENCV_LOGINWINDOW_H
#define DIVOPENCV_LOGINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow {
Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);

    ~LoginWindow() override;
private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginWindow *ui;
};


#endif //DIVOPENCV_LOGINWINDOW_H
