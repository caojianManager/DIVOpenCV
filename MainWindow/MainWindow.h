//
// Created by Cao Jian on 2022/4/23.
//

#ifndef DIVOPENCV_MAINWINDOW_H
#define DIVOPENCV_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow() override;

private slots:


private:
    Ui::MainWindow *ui;
};


#endif //DIVOPENCV_MAINWINDOW_H
