#include <stdio.h>
#include <stdlib.h>

// add round-trip and declare it
void getRoundTripAirFare(double* tot_expense)

{
    printf("\n Any Round-Trip Airfare, yes (y) or no (n)?"); // ask user if they have round trip airfare
    char users_answer = inputValidate(users_answer);
    double roundtrip_fare;
    if (users_answer == 'y' || users_answer == 'Y')
    {
        printf("What was the amount spent for Round-trip Airfare?"); // if they do then ask how much it costs
        roundtrip_fare= inputValidate(roundtrip_fare, 0);
        *tot_expense += roundtrip_fare; // add it to the total expense
    }

}


void getCarRentals(double* tot_expense) // add Car Rental and declare it 
{
    printf("Renting a car? yes (y) or no (n)"); //ask if they rented a car
    char users_answer = inputValidate(users_answer);
    if(users_answer= inputValidate(users_answer));
    {
        printf("How much did you pay for the car rental?");// if they did, then ask the cost
        double car_rental_amount = inputValidate(car_rental_amount,0);
        *tot_expense += car_rental_amount; // add the cost to the total expense

    }
}