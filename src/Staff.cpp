#include "Staff.h"

Staff::Staff()
{
    counter = 0;
    StafffMember** temp = new StafffMember* [25];
    staff_list = temp;
}

Staff::Staff(int m_size)
{
    counter = 0;
    StafffMember** temp = new StafffMember* [m_size];
    staff_list = temp;
}

Staff::~Staff()
{
    for(int i=0; i<counter ; i++) {
        delete staff_list[i];
    }
    delete [] staff_list;
}

void Staff::addMember(Department arr[], int d_size) {
    int var = 0;
    bool flag = true;
    cout<<"select Employee Type (1- Salary, 2- Executive, 3- Hourly, 4- Commission, 5- Volunteer)\nEnter Your Choice: ";
    cin>>var;
    switch(var) {
    case 1:
        staff_list[counter] = new Salary;
        break;
    case 2:
        staff_list[counter] = new Executive;
        break;
    case 3:
        staff_list[counter] = new Hourly;
        break;
    case 4:
        staff_list[counter] = new Commission;
        break;
    case 5:
        staff_list[counter] = new Volunteer;
        break;
    default:
        flag = false;
    }
    if(flag) {
        staff_list[counter]->setInfo();
        bool bo;
        do {
            cout<<"return without saving choice (0) or Enter Department ID: ";
            int temp;
            cin>>temp;
            bo = staff_list[counter]->linkDepartment(arr, d_size, temp);
            if(temp == 0)
                return ;
        } while(!bo);
        counter++;
    }
}

void Staff::calcPayroll() {
    double total = 0;
    for(int i=0; i<counter; i++) {
        total += staff_list[i]->pay();
    }
    cout<<"Total Payroll Is: "<<total<<endl;
}

bool Staff::delMember(int _id) {
    for(int i=0; i<counter; i++) {
        int temp = staff_list[i]->getId();
        if(temp == _id) {
            cout<<"Successfully Deleted :)\n";
            for(int j=i; j<counter-1; j++) {
                staff_list[j] = staff_list[j+1];
            }
            counter--;
            return true;
        }
    }
    cout<<"Try Again Enter Valid ID/n";
    return false;
}


void Staff::showAll() {
    for(int i=0; i<counter; i++) {
        staff_list[i]->print();
        cout<<"-------\n";
    }
}









