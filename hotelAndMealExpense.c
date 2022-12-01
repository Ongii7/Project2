//Johnathan Driscoll 
#include <stdio.h>
#include <stdlib.h>

void getHotelFee(double* tot_expense, 
                int* tot_day_on_trip, 
                double* tot_allowable_expense, 
                double* tot_reimbursement,
                double* tot_amount_save)
{
    const double MAX_EXP = 90.00;
    double hotel_cost;
    printf ("\nPlease enter your hotel expenses. \nThe company will cover costs up to $90 per night.\n");
    *tot_allowable_expense += MAX_EXP;
    printf("What were the costs for night 1?");
    scanf("%lf", &hotel_cost);
    *tot_expense += hotel_cost;
    if (hotel_cost > MAX_EXP)
    {
        *tot_reimbursement += (hotel_cost - MAX_EXP);
    }
    else if (hotel_cost <= MAX_EXP)
    {
        *tot_amount_save += hotel_cost;
    }
};

void getMealFee(double* tot_expense,
                double* depart_time,
                double* tot_allowable_expense,
                double* tot_reimbursement,
                double* tot_amount_save, 
                double* arrival_time )
{
    const double MAX_BREAKFAST = 9.00;
    const double MAX_LUNCH = 12.00;
    const double MAX_DINNER = 16.00;

    double meal_cost;
    char yes_no;

    //FIRST DAY DEPART
    printf("\nDid you eat a meal on the day of initial departure? (Y/N): ");
    scanf(" %c", &yes_no);
    if (yes_no == 'Y' || yes_no == 'y')
    {
        printf("How much was your meal? ");
        scanf("%lf", &meal_cost);
        *tot_expense += meal_cost;
        if (depart_time < 7)
        {
            *tot_allowable_expense += MAX_BREAKFAST;

            if (meal_cost > MAX_BREAKFAST)
            {
                *tot_reimbursement += (meal_cost - MAX_BREAKFAST);
            }
            else if (meal_cost <= MAX_BREAKFAST)
            {
                *tot_amount_save += meal_cost;
            }
        
        }
        else if (depart_time >= 7 && depart_time < 12)
        {
            *tot_allowable_expense += MAX_LUNCH;

            if (meal_cost > MAX_LUNCH)
            {
                *tot_reimbursement += (meal_cost - MAX_LUNCH);
            }
            else if (meal_cost <= MAX_LUNCH)
            {
                *tot_amount_save += meal_cost;
            }
            
        }
        else if (depart_time >= 12 && depart_time < 18)
        {
            *tot_allowable_expense += MAX_DINNER;

            if (meal_cost > MAX_DINNER)
            {
                *tot_reimbursement += (meal_cost - MAX_DINNER);
            }
            else if (meal_cost <= MAX_DINNER)
            {
                *tot_amount_save += meal_cost;
            }
        }
        else if (depart_time >= 18)
        {
            *tot_reimbursement += meal_cost;
        }
    }
    //LAST DAY DEPART
    printf("\nDid you eat a meal on the day of final departure? (Y/N): ");
    scanf(" %c", &yes_no);
    *tot_expense += meal_cost;
    if (yes_no == 'Y' || yes_no == 'y')
    {
        printf("How much was your meal? ");
        scanf("%lf", &meal_cost);
        *tot_expense += meal_cost;
        if (depart_time < 7)
        {
            *tot_allowable_expense += MAX_BREAKFAST;
            if (meal_cost > MAX_BREAKFAST)
            {
                *tot_reimbursement += (meal_cost - MAX_BREAKFAST);
            }
            else if (meal_cost <= MAX_BREAKFAST)
            {
                *tot_amount_save += meal_cost;
            }
        }
        else if (depart_time >= 7 && depart_time < 12)
        {
            *tot_allowable_expense += MAX_LUNCH;

            if (meal_cost > MAX_LUNCH)
            {
                *tot_reimbursement += (meal_cost - MAX_LUNCH);
            }
            else if (meal_cost <= MAX_LUNCH)
            {
                *tot_amount_save += meal_cost;
            }
        }
        else if (depart_time >= 12 && depart_time < 18)
        {
            *tot_allowable_expense += MAX_DINNER;

            if (meal_cost > MAX_DINNER)
            {
                *tot_reimbursement += (meal_cost - MAX_DINNER);
            }
            else if (meal_cost <= MAX_DINNER)
            {
                *tot_amount_save += meal_cost;
            }
        }
        else if (depart_time >= 18)
        {
            *tot_reimbursement += meal_cost;
        }
    }    
}