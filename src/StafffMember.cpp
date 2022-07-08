#include "StafffMember.h"


int StafffMember::id = 0;
void StafffMember::setInfo() {
    m_id = ++id;
    cin.ignore();
    cout<<"Enter Name : ";
    getline(cin, name);
    cout<<"Enter Phone: ";
    cin>>phone;
    cout<<"Enter Email: ";
    cin>>email;
}


void StafffMember::print(){
    cout<<"Id Is   : "<<m_id<<endl
        <<"Name Is : "<<name<<endl
        <<"Phone Is: "<<phone<<endl
        <<"Email Is: "<<email<<endl
        <<"-----------"<<endl;
    department->printDepartment();
    cout<<"------------------------------------------------------------------"<<endl;
}

bool StafffMember::linkDepartment(Department arr[], int t_size,int id) {
    for(int i=0; i<t_size; i++) {
        if(id == arr[i].getId()) {
            department = &arr[i];
            return true;
        }
    }
    cout<<"Department ID Is Not Found :(\n";
    return false;
}

int StafffMember::getId() {
    return id;
}

string StafffMember::getName() {
    return name;
}

/// ***************************

