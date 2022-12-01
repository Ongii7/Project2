#include <stdio.h>
#include <stdlib.h>
#include "expenses.h"

int main(void) {
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
    //getHotelFee(tot_expense, tot_day_on_trip, tot_allowable_expense, tot_reimbursement, tot_amount_save);

    //the amount of each meal eaten
    //getMealFee(tot_expense, depart_time, tot_allowable_expense, tot_reimbursement, tot_amount_save, arrival_time);

    displayTot(tot_expense, tot_allowable_expense, tot_reimbursement, tot_amount_save);

    /**
     * display:
     * - total expenses incurred by the user
     * - total allowable expenses for the trip
     * - excess expenses that must be paid for by the user
     * - amount saved by the user if kept under allowed amounts.
     **/

    return EXIT_SUCCESS;
}