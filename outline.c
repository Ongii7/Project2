#include <stdio.h>
#include <stdlib.h>

double inputValidate(double); // 6.30 is 6:30 am and 21 is 9pm  
double inputValidate1(double, int); // $6.00 dollars
char inputValidate2(char); // Y or n for yes or no
void getTotDaysOnTrip(int*);
void getDepartAndArriveTime(double*, double*);
void getRoundTripAirFare(double*);
void getCarRentals(double*);
void getPrivateVehicleUse(double*);
void getParkingFee(int, double*,double*,double*,double*);
void getTaxiFee(int, double*,double*,double*,double*);
void getConferenceAndRegistrateFee(double*);
void getHotelFee(int, double*,double*,double*,double*);
void getMealFee(double*,double*,double*,double*,double*,double*);
void displayTot(int, double, double, double, double, double, double, double);


int main()
{
    double tot_expense=0,
    tot_allowable_expense =0,
    tot_reimbursement=0,
    tot_amount_save=0,
    depart_time,
    arrival_time;

    int tot_day_on_trip;

void getTotDaysOnTrip(tot_day_on_trip);
void getDepartAndArriveTime(depart_time, arrival_time);
void getRoundTripAirFare(tot_expense);
void getCarRentals(tot_expense);
void getPrivateVehicleUse(tot_expense);
void getParkingFee(tot_expense,tot_day_on_trip,tot_allowable_expense, tot_reimbursement,tot_amount_save);
void getTaxiFee(tot_expense,tot_day_on_trip,tot_allowable_expense, tot_reimbursement,tot_amount_save);
void getConferenceAndRegistrateFee(tot_expense);
void getHotelFee(tot_expense,tot_day_on_trip,tot_allowable_expense, tot_reimbursement,tot_amount_save);
void getMealFee(tot_expense,depart_time,tot_allowable_expense,tot_reimbursement,tot_amount_save, arrival_time );
void displayTot(tot_day_on_trip,depart_time,arrival_time,tot_expense,tot_allowable_expense,tot_reimbursement,tot_amount_save);

 return 0;   
}
