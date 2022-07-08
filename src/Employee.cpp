#include "Employee.h"



void Employee::setInfo() {
    StafffMember::setInfo();
    cout<<"Enter Employee Social security Number: ";
    cin>>socialSecurityNumber;
}

void Employee::print() {
    StafffMember::print();
    cout<<"Social Security Number: "<<socialSecurityNumber<<endl;
}
