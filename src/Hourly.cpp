#include "Hourly.h"

Hourly::Hourly() : worked_hours(0), rate(1) {}

void Hourly::setInfo() {
    Employee::setInfo();
    cout<<"Enter Employee Rate: ";
    cin>>rate;
    cout<<"Enter Employee Worked Hours: ";
    cin>>worked_hours;
}

void Hourly::addHours(double hours) {
    worked_hours += hours;
}

void Hourly::print() {
    cout<<"\nType Is : Hourly Employee\n";
    Employee::print();
    cout<<"Employee Salary Is : "<<pay()<<endl;
}

double Hourly::pay() {

    return worked_hours * rate;
}
