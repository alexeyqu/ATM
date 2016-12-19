#include <QApplication>

#include "UI/atmmainwindow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    ATMMainWindow window;
    window.show();

    return app.exec();
}
