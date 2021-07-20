#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;
//static_cast<<тип>>(<объект> == (<тип>)
//dynamic_cast<<тип>>(<объект>) - приведение типов по иерархии наследования
//const_cast<<тип>>(<объект>) - снимает константность
//reinterpret_cast<<тип>>(<объект>) - преобразование типов указателей
void printEmployeeInfo(const Employee& employee)
{
    cout << employee << endl;

}
void printRectangleInfo(const Rectangle& rectangle)
{
    cout << rectangle << endl;
    cout << "Area: " << rectangle.area() << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl;
}
int main()
{
    Employee employee("Donald","Trump",'J',1);
    Manager manager("Joseph","Biden",'R',1,2);
    employee.print(cout);
    cout << endl;
    manager.print(cout);
    cout << endl << endl;
    Employee* pEmployee = &employee;
    Employee* pManager = &manager;
    pEmployee->print(cout);
    cout << endl;
    pManager->print(cout);
    cout << endl << endl;
    Employee& rEmployee = employee;
    Employee& rManager = manager;
    rEmployee.print(cout);
    cout << endl;
    rManager.print(cout);
    cout << endl << endl;
    cout << endl << endl;
    Rectangle rectangle;
    Rectangle otherRectangle(1,2);
    Square square;
    Square otherSquare(4);
    printRectangleInfo(rectangle);
    cout << endl;
    printRectangleInfo(otherRectangle);
    cout << endl;
    printRectangleInfo(square);
    cout << endl;
    printRectangleInfo(otherSquare);
    cout << endl;
    return 0;
}
