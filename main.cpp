#include "window.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window w;
    w.resize(900, 900);
    w.show();
    return a.exec();
}
