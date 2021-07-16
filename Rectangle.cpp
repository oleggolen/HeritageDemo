#include "Rectangle.h"
unsigned int Rectangle::getA() const
{
    return _a;
}

void Rectangle::setA(unsigned int a)
{
    _a = a;
}
unsigned int Rectangle::getB() const {
    return _b;
}
void Rectangle::setB(unsigned int b)
{
    _b = b;
}
Rectangle::Rectangle(unsigned int a, unsigned int b) : _a(a), _b(b)
{

}
Rectangle::Rectangle() : Rectangle(1,1)
{

}

unsigned long long int Rectangle::area() const
{
    return _a*_b;
}

unsigned long long int Rectangle::perimeter() const
{
    return 2*(_a+_b);
}
ostream& operator<<(ostream& stream, const Rectangle& rectangle)
{
    return stream << "Rectangle: " << rectangle.getA() << " " << rectangle.getB();
}
