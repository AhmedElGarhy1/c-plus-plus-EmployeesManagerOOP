#include "Project.h"

int Project::st_id = 0;

Project::Project()
{
    budget_list = new Budget[20];
}

Project::~Project()
{
    delete [] budget_list ;
}


bool Project::choiceManager(Department arr[], int d_size) {
    int var = 0;
    bool flag = true;
    cout<<"select Employee Type (1- Salary, 2- Executive, 3- Hourly, 4- Commission)\nEnter Your Choice: ";
    cin>>var;
    switch(var) {
    case 1:
        manager = new Salary;
        break;
    case 2:
        manager = new Executive;
        break;
    case 3:
        manager = new Hourly;
        break;
    case 4:
        manager = new Commission;
        break;
    default:
        flag = false;
    }
    if(flag) {
        manager->setInfo();
        bool bo = true;
        do {
            cout<<"return without saving press (0) or Enter Department ID: ";
            int temp;
            cin>>temp;
            bo = manager->linkDepartment(arr, d_size, temp);
            if(temp == 0)
                return false;
        } while(!bo);
        return true;
    }
    cout<<"Invalid Number :( manager didn't saved yet \n";
    return false;
}

void Project::setProjectInfo() {
    cin.ignore();
    id = ++st_id;
    cout<<"Enter Project Location   : ";
    getline(cin, location);
    cout<<"Add Project Budget Amount: ";
    double temp;
    cin>>temp;
    addBudget(temp);
}

void Project::addBudget(double value) {
    count_id++;
    budget_list[count_id].setBudgetId(count_id);
    budget_list[count_id].increaceBudget(value);
}

void Project::getTotalBudget() {
    total = 0;
    cout<<"Budget ID \tBudget Value\n";
    for(int i=1; i<=count_id; i++) {
        cout<< budget_list[i].getBudgetId()<<"\t\t"<<budget_list[i].getBudgetValue()<<endl;
        total += budget_list[i].getBudgetValue();
    }
    cout<<"Total Value Of Budgets : "<<total<<endl
        <<"-----------------------------------"<<endl;
}

void Project::print() {

    cout<<"\n  Project Id Is        : "<<id      <<endl
        <<"Location Is            : "<<location<<endl
        <<"Current Cost IS        : "<<total   <<endl
        <<"Number of Added Budgets: "<<count_id<<endl<<endl;
    getTotalBudget();
    cout<<"Manager Information Is: \n"
        <<"------------------------------------------------";
    manager->print();
}

void Project::increaseBudget() {
    int _id;
    double amount;
    cout<<"Enter Budget Id: ";
    cin>>_id;
    for(int i=0; i<count_id; i++) {
        if(budget_list[i].getBudgetId() == _id) {
            cout<<"Enter Amount: ";
            cin>>amount;
            budget_list[i].increaceBudget(amount);
            cout<<"Successfully Increased :)/n";
            return;
        }
    }
    cout<<"Budget ID Is not exist :(\n";
}

int Project::getId() {
    return id;
}








