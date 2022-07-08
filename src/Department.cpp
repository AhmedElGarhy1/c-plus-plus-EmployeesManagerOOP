#include "Department.h"


void Department::setDepartment() {
    cout<<"Enter Department ID: ";
    cin>>department_id;
    cout<<"Enter Department Name: ";
    cin>>department_name;
}
int Department::getId() {
    return department_id;
}
void Department::printDepartment() {
    cout<<"Department ID Is  : "<<department_id<<endl
        <<"Department Name Is: "<<department_name<<endl
        <<"--------"<<endl;
}
