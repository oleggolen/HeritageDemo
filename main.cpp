#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;
void printEmployeeInfo(const Employee& employee)
{
    cout << employee;
}
int main()
{
    Employee employee("Donald","Trump",'J',1);
    Manager manager("Joseph","Biden",'R',1,2);
    cout << employee << endl;
    cout << manager << endl;
    printEmployeeInfo(manager);
    cout << endl << endl;
    Rectangle rectangle;
    Rectangle otherRectangle(1,2);
    Square square;
    Square otherSquare(4);
    cout << rectangle << endl;
    cout << "Rectangle square: " << rectangle.area() << endl;
    cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;
    cout << otherRectangle << endl;
    cout << "Rectangle square: " << otherRectangle.area() << endl;
    cout << "Rectangle perimeter: " << otherRectangle.perimeter() << endl;
    cout << square << endl;
    cout << "Rectangle square: " << square.area() << endl;
    cout << "Rectangle perimeter: " << square.perimeter() << endl;
    cout << otherSquare<< endl;
    cout << "Rectangle square: " << otherSquare.area() << endl;
    cout << "Rectangle perimeter: " << otherSquare.perimeter() << endl;
    return 0;
}
