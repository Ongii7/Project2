#include <stdio.h>
#include <stdlib.h>

void displayTot(double tot_expense, double tot_allowable_expense, double tot_reimbursement, double tot_amount_save){
    printf("\nTotal expenses incurred: $%.2lf", tot_expense);
    printf("\nTotal allowable expenses: $%.2lf", tot_allowable_expense);
    printf("\nExcess expenses that must be reimbursed by you: $%.2lf", tot_reimbursement);
    printf("\nAmount saved by you: $%.2lf", tot_amount_save);
};