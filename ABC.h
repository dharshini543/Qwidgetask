#ifndef ABC_H
#define ABC_H

#include <QWidget>

class ABC : public QWidget
{
    Q_OBJECT

public:
    ABC(QWidget *parent = nullptr);
    ~ABC();

protected:
    void paintEvent(QPaintEvent *event);
};
#endif // ABC_H
