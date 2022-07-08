#include "Salary.h"


Salary::Salary() : salary(0){
}

void Salary::setInfo() {
    Employee::setInfo();
    cout<<"Enter Employee Salary: ";
    cin>>salary;
}

void Salary::print() {
    cout<<"\nType Is : Salaried Employee\n";
    Employee::print();
    cout<<"Employee Salary Is: "<<pay()<<endl;
}

double Salary::pay() {

    return salary;
}
