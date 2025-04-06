#include "DBC.h"
#include <iostream>
using namespace std;
DBC::DBC()
{
    cout<<"DBC Constructor"<<endl;
}

DBC::~DBC()
{
    cout<<"DBC Destructor"<<endl;
}

void DBC::paintEvent(QPaintEvent *event)
{
    cout<<"DBC paintEvent function"<<endl;
    ABC::paintEvent(event);
}
