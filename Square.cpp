#include "Square.h"
Square::Square(unsigned int a) : Rectangle(a,a) {

}

Square::Square() : Rectangle() {

}
ostream& operator<<(ostream& stream,const Square& square)
{
    return stream << "Square: " << square.getA();
}
