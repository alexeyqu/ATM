#include "atmkeyboard.h"

ATMKeyboard::ATMKeyboard(QWidget *parent) : QWidget(parent)
{
    setFixedSize(300, 160);

    QPalette Pal(palette());

    Pal.setColor(QPalette::Background, Qt::gray);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            numpad[i][j] = new QPushButton(QString("%1").arg(i*3 + j), this);
            numpad[i][j]->setGeometry(i * 63, j * 40, 63, 40);
        }
    }

    for(int i = 0; i < 4; i++)
    {
        controls[i] = new QPushButton(QString("B"), this);
        controls[i]->setGeometry(210, i * 40, 90, 40);
    }
}
