#ifndef ATMKEYBOARD_H
#define ATMKEYBOARD_H

#include <QWidget>
#include <QPushButton>

class ATM_Keyboard : public QWidget
{
    Q_OBJECT
public:
    explicit ATM_Keyboard(QWidget *parent = 0);

signals:

public slots:

private:
    QPushButton *numpad[3][4];
    QPushButton *controls[4];
};

#endif // ATMKEYBOARD_H
