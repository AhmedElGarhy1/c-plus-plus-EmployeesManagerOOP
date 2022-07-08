#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include<StafffMember.h>
class Volunteer : public StafffMember
{
public:
    Volunteer();
    void setInfo();
    void volunteerAmount(double);
    void print();
    double pay();
private:
    double amount;
};

#endif // VOLUNTEER_H
