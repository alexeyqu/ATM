#include <QApplication>

#include "UI/atmmainwindow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    ATM_MainWindow window;
    window.show();

    return app.exec();
}
