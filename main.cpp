#include <QApplication>
#include "main_window.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("Color");
    window.setFixedSize(150, 150);
    window.show();

    return app.exec();
}
