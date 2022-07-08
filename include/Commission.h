#ifndef COMMISSION_H
#define COMMISSION_H

#include<Employee.h>

class Commission : public Employee
{
    public:
        double target;
        Commission();
        void setInfo();
        double pay();
        void print();
};

#endif // COMMISSION_H
