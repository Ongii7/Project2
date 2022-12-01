#include <stdio.h>
#include <stddef.h>

int tot_day_on_trip; //# of days spent on trip
double depart_time; //departure time
double arrival_time; //arrival time
double tot_expense;
double tot_allowable_expense;
double tot_reimbursement;
double tot_amount_save;

extern void getTotDaysOnTrip(int* totalDate);

extern double inputTimeValidation();

extern void getDepartureAndArriveTime(double* departure, double* arrival);

extern double inputValidate1(double car_rental_amount, int num);

extern char inputValidate2(char users_answer);

extern void getRoundTripAirFare(double* tot_expense);

extern void getCarRentals(double* tot_expense);

extern void getAmountPerMilesDriven(double* totalExpense);

extern void getParkingFee(double* tot_expense, int* tot_day_on_trip, double* tot_allowable_expense, double* tot_reimbursement, 
                    double* tot_amount_save);

extern void getTaxiFee(double* tot_expense, int* tot_day_on_trip, double* tot_allowable_expense, double* tot_reimbursement, 
                    double* tot_amount_save);

extern void getConferenceAndRegistrateFee(double* tot_expense);

extern void getHotelFee(double* tot_expense, int* tot_day_on_trip, double* tot_allowable_expense, 
                    double* tot_reimbursement,double* tot_amount_save);

extern void getMealFee(double* tot_expense,
                double* depart_time,
                double* tot_allowable_expense,
                double* tot_reimbursement,
                double* tot_amount_save, 
                double* arrival_time );

extern void displayTot(double tot_expense, double tot_allowable_expense, double tot_reimbursement, double tot_amount_save);
