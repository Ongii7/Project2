#include <stdio.h>
#include <stdlib.h>

// Parking fees function
void getParkingFee(double* tot_expense, int* tot_day_on_trip, double* tot_allowable_expense, double* tot_reimbursement, double* tot_amount_save) {
    double parkFee = -1.0;
    printf("\nEnter total of parking fees from trip:\n ");
    do {
        scanf("%lf", &parkFee);
        if (parkFee < 0) {
            printf("Please enter a positive number!\n ");
        }
    } while (parkFee < 0);
    *tot_expense += parkFee;                                            // Add parking fees to total expense
    *tot_allowable_expense += (*tot_day_on_trip * 6.0);                 // Company can pay $6 for each day of the trip
    if(parkFee > (*tot_day_on_trip * 6.0)) {                            // If parking fees are more than what the company can cover
        *tot_reimbursement += (parkFee - (*tot_day_on_trip * 6.0));     // Business person has to pay the rest
    } else if(parkFee < (*tot_day_on_trip * 6.0)) {                     // If parking fees were less than what the company can cover
        *tot_amount_save += ((*tot_day_on_trip * 6.0) - parkFee);       // Business person saved this much money
    }
};

// Taxi fees function
void getTaxiFee(double* tot_expense, int* tot_day_on_trip, double* tot_allowable_expense, double* tot_reimbursement, double* tot_amount_save) {
    char answer;
    double taxiFee = -1.0;
    printf("Did you take any taxis on this trip? y/n\n");
    do {
        scanf(" %c", &answer);
        if(answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N') {
            printf("Please input a valid answer\n");
        } 
    } while(answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if(answer == 'y' || answer == 'Y') {
        printf("Enter how much you spent on taxis: ");
        do {
            scanf("%lf", &taxiFee);
            if(taxiFee < 0) {
                printf("Please enter a positive number!\n");
            } 
        } while(taxiFee < 0);
        *tot_expense += taxiFee;                                            // Taxi fees added to total expense
        *tot_allowable_expense += (*tot_day_on_trip * 10.0);                // Company can pay $10 for each day of trip
        if(taxiFee > (*tot_day_on_trip * 10.0)) {                           // If taxi fees cost more than what the company can cover
            *tot_reimbursement += (taxiFee - (*tot_day_on_trip * 10.0));    // Business person owes this much
        } else if(taxiFee < (*tot_day_on_trip * 10.0)) {                    // If taxi fees cost less than what the company can cover
            *tot_amount_save += ((*tot_day_on_trip * 10.0) - taxiFee);      // How much business person saved
        }
    }
};

//Conference or seminar registration fees
void getConferenceAndRegistrateFee(double* tot_expense) {
    double conferenceFee = -1.0;
    printf("Enter your conference or seminar fees: ");
    do {
        scanf("%lf", &conferenceFee);
        if(conferenceFee < 0) {
            printf("Please enter a positive number!\n");
        }
    } while(conferenceFee < 0);
    *tot_expense += conferenceFee;
};