#ifndef HERITAGE_DEMO_SQUARE_H
#define HERITAGE_DEMO_SQUARE_H
#include"Rectangle.h"
#include<ostream>
using namespace std;
class Square : public Rectangle{
public:
    Square();
    Square(unsigned  int a);

};
ostream& operator<<(ostream& stream,const Square& square);
#endif
