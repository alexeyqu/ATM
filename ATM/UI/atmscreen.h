#ifndef ATMSCREEN_H
#define ATMSCREEN_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>

class ATM_Screen : public QWidget
{
    Q_OBJECT
public:
    explicit ATM_Screen(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);

signals:

public slots:

private:
    const QColor backgroundColor = QColor(102, 153, 102); // a really good color
};

#endif // ATMSCREEN_H
