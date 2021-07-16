#include "Employee.h"
#include<cstring>
const char *Employee::getFirstName() const {
    return _firstName;
}
void Employee::setFirstName(const char *firstName) {
    _firstName = new char[strlen(firstName)+1];
    strcpy_s(_firstName,strlen(firstName)+1,firstName);
}
const char *Employee::getFamilyName() const {
    return _familyName;
}
void Employee::setFamilyName(const char *familyName) {
    _familyName = new char[strlen(familyName)+1];
    strcpy_s(_familyName,strlen(familyName)+1,familyName);
}
char Employee::getMiddleInitial() const {
    return _middleInitial;
}
void Employee::setMiddleInitial(char middleInitial) {
    _middleInitial = middleInitial;
}
unsigned short Employee::getDepartment() const {
    return _department;
}
void Employee::setDepartment(unsigned short department) {
    _department = department;
}
Employee::Employee(const char *firstName, const char *familyName, char middleInitial, unsigned short department) : _middleInitial(middleInitial), _department(department)
{
    setFamilyName(familyName);
    setFirstName(firstName);
}
Employee::~Employee()
{
    delete[] _firstName;
    delete[] _familyName;
}
void Employee::print(ostream &stream) const
{
    stream << "Name: " << getFirstName() << " " << getMiddleInitial() << ". " << getFamilyName() << endl;
    stream << "Department: " << getDepartment();
}

ostream &operator<<(ostream &os, const Employee &employee)
{
    employee.print(os);
    return os;
}