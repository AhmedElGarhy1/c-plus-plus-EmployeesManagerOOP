#ifndef STAFF_H
#define STAFF_H

#include<StafffMember.h>
#include<Volunteer.h>
#include<Salary.h>
#include<Commission.h>
#include<Executive.h>
#include<Hourly.h>

class Staff
{
    public:
        Staff();
        Staff(int);
        virtual ~Staff();
        void addMember(Department*, int);
        void calcPayroll();
        bool delMember(int);
        void showAll();
    protected:
    private:
        int counter;
        StafffMember** staff_list;

};

#endif // STAFF_H
