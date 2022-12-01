//Johnathan Driscoll 
#include <stdio.h>
#include <stdlib.h>
void inputCostValidate(double, int);
void getHotelFee(int, double*,double*,double*,double*);
void getMealFee(double*,double*,double*,double*,double*,double*);



void inputCostValidate(){
    double cost;
    
    do
    {
        scanf("%f", &cost)
    } while (/* condition */);
    

    
}

void getHotelFee(tot_expense,tot_day_on_trip,tot_allowable_expense, tot_reimbursement,tot_amount_save){
    const double MAX_EXP = 90.00;
    double hotel_cost;

    printf ("\nPlease enter your hotel expenses. \nThe company will cover costs up to $90 per night.\n");

    for (int i = 0; i < (tot_day_on_trip -1); i++)  //Hotel charges per night stay days-1=nights stayed
    {
        tot_allowable_expense += MAX_EXP;

        printf << "What were the costs for night #%d?\n", (i + 1);
        hotel_cost = inputCostValidate(hotel_cost);

        tot_expense += hotel_cost;

        if (hotel_cost > MAX_EXP)
        {
            tot_reimbursement += (hotel_cost - MAX_EXP);
        }
        else if (hotel_cost <= MAX_EXP)
        {
            tot_amount_save += hotel_cost;
        }
        
    }
    
}


void getMealFee(tot_expense,depart_time,tot_allowable_expense,tot_reimbursement,tot_amount_save, arrival_time ){

}