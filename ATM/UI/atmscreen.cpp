#include "atmscreen.h"

ATMScreen::ATMScreen(QWidget *parent) : QWidget(parent)
{
    setFixedSize(400, 300);

    QPalette Pal(palette());

    Pal.setColor(QPalette::Background, Qt::darkGreen);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    this->show();
}
