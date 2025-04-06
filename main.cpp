#include "ABC.h"
#include "DBC.h"
#include <QPaintEvent>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    widget.show();
    QObject object;
    //QPaintDevice paintDevice;
    ABC abc;
    abc.show();

    DBC dbc;
    dbc.show();

    //QPaintEvent event;
   // dbc.paintEvent(&event);
    return a.exec();
}
