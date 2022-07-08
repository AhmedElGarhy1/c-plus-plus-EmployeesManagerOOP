#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<string>
#include<iostream>

using namespace std;
class Department
{
    public:
        void setDepartment();
        void printDepartment();
        int getId();
    private:
        int department_id;
        string department_name;
};

#endif // DEPARTMENT_H
