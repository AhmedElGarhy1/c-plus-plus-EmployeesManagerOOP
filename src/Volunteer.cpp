#include "Volunteer.h"

Volunteer::Volunteer() : amount(0){
}

void Volunteer::setInfo() {
    StafffMember::setInfo();
    cout<<"Enter Volunteered Amount: ";
    cin>>amount;
}

void Volunteer::print() {

    cout<<"\nType Is : Volunteer \n";
    StafffMember::print();
    cout<<"Volunteered Amount Is : "<<pay()<<endl;
}


double Volunteer::pay() {
    return amount;
}
