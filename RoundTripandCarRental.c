#include <stdio.h>
#include <stdlib.h>

// add round-trip and declare it
double inputValidate1(double car_rental_amount, int num){
    if (car_rental_amount > 0)
        return car_rental_amount;
    else
        return num;
}

char inputValidate2(char users_answer){
    if(users_answer == 'y' || users_answer == 'Y')
        return users_answer;
}

void getRoundTripAirFare(double* tot_expense) {
    printf("\nAny Round-Trip Airfare, yes (y) or no (n)?"); // ask user if they have round trip airfare
    char users_answer;
    scanf(" %c", &users_answer);
    inputValidate2(users_answer);
    double roundtrip_fare;
    printf("\nWhat was the amount spent for Round-trip Airfare?"); // if they do then ask how much it costs
    scanf("%lf", &roundtrip_fare);
    inputValidate1(roundtrip_fare, 0);
    *tot_expense += roundtrip_fare; // add it to the total expense
};

void getCarRentals(double* tot_expense) // add Car Rental and declare it 
{
    printf("\nRenting a car? yes (y) or no (n)"); //ask if they rented a car
    char users_answer;
    scanf(" %c", &users_answer);
    inputValidate2(users_answer);
    printf("\nHow much did you pay for the car rental?");// if they did, then ask the cost
    double car_rental_amount;
    scanf("%lf", &car_rental_amount);
    inputValidate1(car_rental_amount, 0);
    *tot_expense += car_rental_amount; // add the cost to the total expense
};
