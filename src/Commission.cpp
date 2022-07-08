#include "Commission.h"

Commission::Commission() : target(0) {}

void Commission::setInfo() {
    Employee::setInfo();
    cout<<"Enter Targets Amount : ";
    cin>>target;
    target *= 0.05;
}

void Commission::print() {
    cout<<"\nType Is : Commission Employee\n";
    Employee::print();
    cout<<"Salary Is : "<<pay();
}

double Commission::pay() {
    return target;
}
