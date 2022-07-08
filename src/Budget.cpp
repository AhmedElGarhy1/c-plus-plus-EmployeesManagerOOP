#include "Budget.h"

Budget::Budget() : value(0){}

void Budget::increaceBudget(double amount) {
    value += amount;
}

int Budget::getBudgetId() {
    return id;
}

double Budget::getBudgetValue() {
    return value;
}

void Budget::setBudgetId (int a) {
    id = a;
}
