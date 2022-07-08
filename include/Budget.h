#ifndef BUDGET_H
#define BUDGET_H


class Budget
{
    public:
        Budget();
        void increaceBudget(double);
        void setBudgetId(int);
        int getBudgetId();
        double getBudgetValue();
    private:
        int id;
        double value;
};

#endif // BUDGET_H
