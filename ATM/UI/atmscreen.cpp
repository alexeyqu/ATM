#include "atmscreen.h"

ATM_Screen::ATM_Screen(QWidget *parent) : QWidget(parent)
{
    setFixedSize(400, 300);

    QPalette Pal(palette());

    Pal.setColor(QPalette::Background, QColor(102, 153, 102));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
}

void ATM_Screen::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::gray);

    QRectF target(20, 20, 100, 100);
    QRectF source(0, 0, 100, 100);
    QPixmap input("/home/aq/workspace/ATM/ATM/RESOURCES/BankLogo.png");

    QImage image(input.size(), QImage::Format_ARGB32_Premultiplied);
    image.fill(Qt::transparent);
    QPainter p(&image);
    p.setOpacity(0.2);
    p.drawPixmap(0, 0, input);
    p.end();

    QPixmap bankLogo = QPixmap::fromImage(image);

    painter.drawPixmap(target, bankLogo, source);

    QRect rect = QRect(200, 20, 150, 40);
    painter.setPen(Qt::black);
    painter.drawRect(rect);
    painter.fillRect(rect, Qt::gray);
    painter.drawText(rect, Qt::AlignCenter, "Some text on screen");
}
