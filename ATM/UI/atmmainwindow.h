#ifndef ATMMAINWINDOW_H
#define ATMMAINWINDOW_H

#include <QMainWindow>

#include "atmscreen.h"
#include "atmkeyboard.h"

class ATMMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ATMMainWindow(QWidget *parent = 0);

signals:

public slots:

private:
    ATMScreen *screen;

    ATMKeyboard *keyboard;

    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
};

#endif // ATMMAINWINDOW_H
