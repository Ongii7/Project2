#include <stdio.h>
#include <stdlib.h>

//Calculate and display total function
void displayTot(double tot_expense, double tot_allowable_expense, double tot_reimbursement, double tot_amount_save){
    printf("\nTotal expenses incurred: %d", tot_expense);
    printf("\nTotal allowable expenses: %d", tot_allowable_expense);
    printf("\nExcess expenses that must be reimbursed by you: %d", tot_reimbursement);
    printf("\nAmount saved by you: %d", tot_amount_save);
}