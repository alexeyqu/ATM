#include "UI/atmmainwindow.h"

ATM_MainWindow::ATM_MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setFixedSize(540, 600);

    screen = new ATM_Screen(this);
    screen->setGeometry(60, 60, 400, 300);

    button1 = new QPushButton("1", this);
    button1->setGeometry(465, 100, 50, 40);

    button2 = new QPushButton("2", this);
    button2->setGeometry(465, 160, 50, 40);

    button3 = new QPushButton("3", this);
    button3->setGeometry(465, 220, 50, 40);

    button4 = new QPushButton("4", this);
    button4->setGeometry(465, 280, 50, 40);

    keyboard = new ATM_Keyboard(this);
    keyboard->setGeometry(110, 390, 300, 160);
}
