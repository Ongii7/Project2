//Johnathan Driscoll 
#include <stdio.h>
#include <stdlib.h>

double inputCost(double*);
char inputChoice(char);
void getHotelFee(int*, double*,double*,double*,double*);
void getMealFee(double*,double*,double*,double*,double*,double*);

double inputCost(cost) {
    double cost;
    do {
        scanf("%d", cost);
        if (*cost < 0) {
            printf("Please enter an dollar amount greater than 0.\nWhat was the cost to stay the night? ");
        } 
        else {
            break;
        }
    } while (1);
}

char inputChoice(letter){
    char letter;
    do 
    {
        scanf("%c", letter);
        if ((letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))
        {
            break;
        }
        else{
            printf("Please enter 'Y' or 'N'")
        }
        
    } while (1);
}

void getHotelFee(tot_expense, 
                tot_day_on_trip, 
                tot_allowable_expense, 
                tot_reimbursement,
                tot_amount_save)
{

    const double MAX_EXP = 90.00;
    double hotel_cost;

    printf ("\nPlease enter your hotel expenses. \nThe company will cover costs up to $90 per night.\n");

    for (int i = 0; i < (tot_day_on_trip -1); i++)  //Hotel charges per night stay days-1=nights stayed
    {
        *tot_allowable_expense += MAX_EXP;

        printf << "What were the costs for night #%d?\n", (i + 1);
        hotel_cost = inputCost(hotel_cost);

        *tot_expense += hotel_cost;

        if (hotel_cost > MAX_EXP)
        {
            *tot_reimbursement += (hotel_cost - MAX_EXP);
        }
        else if (hotel_cost <= MAX_EXP)
        {
            *tot_amount_save += hotel_cost;
        }
        
    }
    
}


void getMealFee(tot_expense,
                depart_time,
                tot_allowable_expense,
                tot_reimbursement,
                tot_amount_save, 
                arrival_time )
{
    const double MAX_BREAKFAST = 9.00;
    const double MAX_LUNCH = 12.00;
    const double MAX_DINNER = 16.00;

    double meal_cost;

    //FIRST DAY DEPART

    printf("\nDid you eat a meal on the day of initial departure? (Y/N): ");

    char yes_no = inputChoice(yes_no);

    *tot_expense += meal_cost;

    if (yes_no == 'Y' || yes_no == 'y')
    {
        printf("How much was your meal? ");
        meal_cost = inputCost(meal_cost);

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

    char yes_no = inputChoice(yes_no);

    *tot_expense += meal_cost;

    if (yes_no == 'Y' || yes_no == 'y')
    {
        printf("How much was your meal? ");
        meal_cost = inputCost(meal_cost);

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

