#ifndef PROJECT_H
#define PROJECT_H

#include<iostream>
#include<Budget.h>
#include<Volunteer.h>
#include<StafffMember.h>
#include<Employee.h>
#include<Salary.h>
#include<Hourly.h>
#include<Commission.h>
#include<Executive.h>
#include<string>

class Project
{
    public:
        Project();
        void setProjectInfo();
        bool choiceManager(Department*, int);
        void addBudget(double);
        void increaseBudget();
        void getTotalBudget();
        void print();
        int getId();
        virtual ~Project();
        static int st_id;
    private:
        int id, count_id = 0;
        double total = 0;
        string location;
        Employee* manager;
        double current_cost; /// What Does it do ?!
        Budget* budget_list;
};

#endif // PROJECT_H
