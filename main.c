#include <stdio.h>
#include <stdlib.h>
#include "expenses.h"

int main(void) {

    int tot_day_on_trip; //# of days spent on trip
    double depart_time; //departure time
    double arrival_time; //arrival time
    double tot_expense;
    double tot_allowable_expense;
    double tot_reimbursement;
    double tot_amount_save;

    //call total number of days spent on the trip
    getTotDaysOnTrip(&tot_day_on_trip);

    //call time of departure on first day of trip and arrival back home of last day of trip
    getDepartureAndArriveTime(&depart_time, &arrival_time);
    
    //amount of any round-trip airfare
    getRoundTripAirFare(&tot_expense);

    //amount of car rentals
    getCarRentals(&tot_expense);

    //miles driven (if private vehicle was used)
    getAmountPerMilesDriven(&tot_expense);

    //parking fees (company allows up to $6 a day)
    getParkingFee(&tot_expense, &tot_day_on_trip, &tot_allowable_expense, &tot_reimbursement, &tot_amount_save);

    //taxi fees if any taxi was used during the trip (allows up to $10 a day)
    getTaxiFee(&tot_expense, &tot_day_on_trip, &tot_allowable_expense, &tot_reimbursement, &tot_amount_save);

    //conference or seminar registration fees
    getConferenceAndRegistrateFee(&tot_expense);
    
    //hotel expenses (allows up to $90 a day)
    getHotelFee(&tot_expense, &tot_day_on_trip, &tot_allowable_expense, &tot_reimbursement, &tot_amount_save);

    //meal fees
    getMealFee(&tot_expense, &depart_time, &tot_allowable_expense, &tot_reimbursement, &tot_amount_save, &arrival_time);

    displayTot(tot_expense, tot_allowable_expense, tot_reimbursement, tot_amount_save);

    return EXIT_SUCCESS;
}