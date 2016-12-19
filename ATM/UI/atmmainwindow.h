#ifndef ATMMAINWINDOW_H
#define ATMMAINWINDOW_H

#include <QMainWindow>

#include "atmscreen.h"
#include "atmkeyboard.h"

class ATM_MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ATM_MainWindow(QWidget *parent = 0);

signals:

public slots:

private:
    ATM_Screen *screen;

    ATM_Keyboard *keyboard;

    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
};

#endif // ATMMAINWINDOW_H
