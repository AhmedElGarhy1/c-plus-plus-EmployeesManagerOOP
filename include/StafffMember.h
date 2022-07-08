#ifndef STAFFFMEMBER_H
#define STAFFFMEMBER_H

#include<Department.h>

class StafffMember
{
public:
    virtual void setInfo();
    virtual void print();
    virtual double pay() = 0;
    bool linkDepartment(Department*, int ,int);
    int getId();
    string getName();
    static int id;
protected:
    int m_id;
    string name;
    string phone;
    string email;
    Department* department;
};

#endif // STAFFFMEMBER_H
