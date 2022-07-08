#include "Executive.h"

Executive::Executive() : bonus(0){}

void Executive::setInfo() {
    Employee::setInfo();
    cout<<"Enter The Salary: ";
    cin>>salary;
    int temp;
    cout<<"Enter The Bonus : ";
    cin>>temp;
    bonus += temp;
}

void Executive::addBouns(double b) {
    bonus += b;
}

void Executive::print() {
    cout<<"\nType Is : Executive Employee\n";
    Employee::print();
    cout<<"The Payroll Is : "<< pay()<<endl;
}

double Executive::pay() {
    return bonus += salary;
}
