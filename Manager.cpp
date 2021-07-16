#include "Manager.h"
Manager::Manager(const char *firstName, const char *familyName, char middleInitial, unsigned short department, unsigned short int level) : Employee(firstName,familyName,middleInitial,department), _level(level)
{
}
void Manager::print(ostream &stream) const  {
    stream << "Name: " << getFirstName() << " " << getMiddleInitial() << ". " << getFamilyName() << endl;
    stream << "Department: " << getDepartment() << endl;
    stream << "Level: " << getLevel();
}
unsigned short Manager::getLevel() const {
    return _level;
}
void Manager::setLevel(unsigned short level) {
    _level = level;
}
ostream &operator<<(ostream &os, const Manager &manager) {
    manager.print(os);
    return os;
}