#ifndef HERITAGE_DEMO_EMPLOYEE_H
#define HERITAGE_DEMO_EMPLOYEE_H
#include <ostream>
using namespace std;
class Employee{

    char* _firstName;
    char* _familyName;
    char _middleInitial;
    unsigned short int _department;
public:
    explicit Employee(const char *firstName, const char *familyName, char middleInitial, unsigned short int department);
    inline const char *getFirstName() const;
    void setFirstName(const char *firstName);
    inline const char *getFamilyName() const;
    void setFamilyName(const char *familyName);
    inline char getMiddleInitial() const;
    void setMiddleInitial(char middleInitial);
    inline unsigned short getDepartment() const;
    void setDepartment(unsigned short department);
    ~Employee();
    virtual void print(ostream& stream) const;
};
ostream &operator<<(ostream &os, const Employee &employee);
#endif
