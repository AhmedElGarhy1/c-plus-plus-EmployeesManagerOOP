#include <iostream>
#include<Volunteer.h>
#include<StafffMember.h>
#include<Employee.h>
#include<Salary.h>
#include<Hourly.h>
#include<Commission.h>
#include<Executive.h>
#include<Department.h>
#include<Project.h>
#include<Budget.h>
#include<Staff.h>
#include<windows.h>
using namespace std;

unsigned int depart_size = 20;
unsigned int depart_counter = 0;
unsigned int project_size = 20;
unsigned int project_counter = 0;

Project *projects = new Project [project_size];
Department* department = new Department [depart_size];
Staff project_staff;
void handleDepartments() {
    int var = 0;
    cout<<"\t\t1- Add New Department....\n"
        <<"\t\t2- Print All Departments....\n"
        <<"\t\t0- Return To Menu....\n";
    cout<<"Choice Number: ";
    cin>>var;
    Sleep(1500);
    switch(var) {
    case 1:

        department[depart_counter++].setDepartment();
        cout<<"Successfully Added :)\n";
        Sleep(800);
        system("cls");
        break;
    case 2:
        for(int i=0; i<depart_counter; i++) {
            department[i].printDepartment();
        }
        Sleep(800);
        break;
    case 0:
        Sleep(800);
        system("cls");
        return;
    default:
        cout<<"Invalid Number Try Again:)\n";
        Sleep(1500);
        system("cls");
    }
}


void handleStaff() {
    cout<<"\t\t1- Add New Member...\n"
        <<"\t\t2- Print All Members...\n"
        <<"\t\t3- Calculate Payroll...\n"
        <<"\t\t4- Delete Member...\n"
        <<"\t\t5- Return To Menu...\n"
        <<"Choice Number: ";
        int var;
        cin>>var;
        switch (var) {
        case 1:
            project_staff.addMember(department, depart_size);
            cout<<"Successfully Added :)\n";
            Sleep(1500);
            system("cls");
            break;
        case 2:
            Sleep(500);
            project_staff.showAll();
            Sleep(1000);
            break;

        case 3:
            Sleep(500);
            project_staff.calcPayroll();
            Sleep(1000);
            break;
        case 4:
            int temp;
            bool bo;
            do{
                Sleep(500);
                cout<<"Enter Employee Id You Want To Delete: ";
                cin>>temp;
                bo = project_staff.delMember(temp);
            } while(!bo);
            Sleep(1000);
            system("cls");
            break;
        case 5:
            return;
        default:
            cout<<"Invalid Choice :(\n";
        }
}


void handleProjects() {
    cout<<"\t\t1- Add New Project...\n"
        <<"\t\t2- Print All Projects...\n"
        <<"\t\t3- Add Budget To Existing Project...\n"
        <<"\t\t4- Increase Budget To Existing Project...\n"
        <<"\t\t5- Return To Menu...\n";
    int var = 0;
    int temp = 0;
    cin>>var;
    switch (var) {
    case 1:
        bool what;
        cout<<"Enter Project Details..\n";
        projects[project_counter].setProjectInfo();
        cout<<"Enter Project Manager..\n";
        what = projects[project_counter].choiceManager(department, depart_size);
        if(what)
            project_counter++;
        cout<<"Done \n";
        Sleep(1500);
        system("cls");
        break;
    case 2:
        Sleep(1500);
        system("cls");
        for(int i=0; i<project_counter; i++) {
            projects[i].print();
            cout<<"-------------------------------------\n";
        }
        break;
    case 3:
        cout<<"Enter Project ID: ";
        cin>>temp;
        for(int i=0; i<project_counter; i++){
            if(temp == projects[i].getId()) {
                cout<<"Enter Amount: ";
                cin>>temp;
                projects[i].addBudget(temp);
            }
        }
        cout<<"Done \n";
        Sleep(1500);
        system("cls");
        break;
    case 4:
        Sleep(1500);
        system("cls");
        cout<<"Enter Project ID: ";
        cin>>temp;
        for(int i=0; i<project_counter; i++){
            if(temp == projects[i].getId()) {
                projects[i].increaseBudget();
            }
        }
        cout<<"Done \n";
        Sleep(1500);
        system("cls");
    case 0:
        return;
    default:
        cout<<"Invalid Number Try Again:)\n";
        Sleep(1500);
        system("cls");
    }
}

int main()
{
    system("color 1");
    while(true)
    {
        cout<<"\t\t\t\tWelcome TO Project Manager PM\n"
            <<"\t1- Department......\n"
            <<"\t2- Staff......\n"
            <<"\t3- Project......\n"
            <<"\t0- Close Program....\n"
            <<"Enter Your Choice: ";
        int var;
        cin>>var;
        switch(var) {
        case 1:
            handleDepartments();
            break;
        case 2:
            handleStaff();
            break;
        case 3:
            handleProjects();
            break;
        case 0:
            cout<<"\t\t\t\t-------  Good Luck :)  -------  ";
            return 0;
        default:
            cout<<"Invalid Number Be Accurate\n";
        }
    }
    return 0;
}
