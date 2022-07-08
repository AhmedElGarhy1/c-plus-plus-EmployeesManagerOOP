#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include<string>
#include <Salary.h>

using namespace std;
class Executive : public Salary
{
    public:
        Executive();
        void addBouns (double);
        void setInfo();
        double pay();
        void print();
    private:
        double bonus;
};

#endif // EXECUTIVE_H
