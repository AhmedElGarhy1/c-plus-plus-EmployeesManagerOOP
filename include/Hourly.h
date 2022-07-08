#ifndef HOURLY_H
#define HOURLY_H

#include<Employee.h>

class Hourly : public Employee
{
    public:
        Hourly();
        void setInfo();
        void addHours(double);
        void setRate(double);
        double pay();
        void print();
    private:
        double worked_hours;
        double rate;
};

#endif // HOURLY_H
