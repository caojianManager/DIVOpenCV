
#include "QApplication"
#include "Login/LoginWindow.h"
#include <QTextCodec>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec); //解决汉字乱码问题
    LoginWindow w;
    w.setWindowTitle("登陆窗口");
    w.show();
    return a.exec();
}
