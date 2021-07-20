#ifndef HERITAGE_DEMO_RECTANGLE_H
#define HERITAGE_DEMO_RECTANGLE_H
#include <ostream>
using namespace std;
class Rectangle {
    unsigned int _a;
    unsigned int _b;
public:
    unsigned int getA() const;
    void setA(unsigned int a);
    unsigned int getB() const;
    void setB(unsigned int b);
    Rectangle(unsigned int a, unsigned int b);
    Rectangle();
    unsigned long long int perimeter() const;
    unsigned long long int area() const;
    virtual void print(ostream& stream) const;

};
ostream& operator<<(ostream& stream, const Rectangle& rectangle);

#endif
