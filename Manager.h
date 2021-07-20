#ifndef HERITAGE_DEMO_MANAGER_H
#define HERITAGE_DEMO_MANAGER_H
#include<ostream>
#include "Employee.h"
using namespace std;
class Manager : public Employee  {
    unsigned short int _level;
public:
    explicit Manager(const char *firstName, const char *familyName, char middleInitial, unsigned short department, unsigned short int level);
    void print(ostream& stream) const override;
    inline unsigned short getLevel() const;
    void setLevel(unsigned short level);
};
ostream &operator<<(ostream &os, const Manager &manager);
#endif
