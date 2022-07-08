#ifndef SALARY_H
#define SALARY_H

#include<Employee.h>

class Salary : public Employee {
public:
    double salary;
    Salary();
    void setInfo();
    double pay();
    void print();
};

#endif // SALARY_H
