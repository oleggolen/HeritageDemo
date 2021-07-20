#include "Square.h"
Square::Square(unsigned int a) : Rectangle(a,a) {

}

Square::Square() : Rectangle() {

}

void Square::print(ostream &stream) const
{
    stream << "Square: " << getA();
}

ostream& operator<<(ostream& stream,const Square& square)
{
    square.print(stream);
    return stream;
}
