#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <StafffMember.h>

class Employee : public StafffMember
{
public:
    virtual void setInfo();
    virtual void print();
protected:
    string socialSecurityNumber;
};

#endif // EMPLOYEE_H
