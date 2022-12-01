// #include "function.h";

// int inputCheckInt() {
//     int i, input;
//     do {
//         i = scanf("%d", &input);
//         if (i != 1) {
//             printf("Invalid input!\n: ");
//             scanf("%*s");
//             // clear input buffer
//             while (getchar() != '\n')
//                 ;
//         }
//     } while (i != 1);
//     return input;
// };

void getTotDaysOnTrip(int* totalDate) {
    printf("Please enter number of day on the trip:");
    do {
        // *totalDate = inputCheckInt();
        scanf("%d", totalDate);
        if (*totalDate < 1) {
            printf("Please enter at least 1 day or more!\n: ");
        } else {
            break;
        }
    } while (1);
};

double inputTimeValidation() {
    double i, time;
    do {
        scanf("%f", &time);
        i = time - (int)time;
        // check if minutes > 59, check if time is more than 24 hours
        if (i > 0.59 || time > 23) {
            printf("Please enter a valid time!\n: ");
        } else {
            break;
        }
    } while (1);
    return time;
};

void getDepartureAndArriveTime(double* departure, double* arrival) {
    printf("Please enter departure time: ");
    *departure = inputTimeValidation();
    printf("Please enter arrival time: ");
    *arrival = inputTimeValidation();
};

void getAmountPerMilesDriven(double* totalExpense) {
    double miles;
    double const EXPENSE_PER_MILES = 0.27;
    printf("Is it a private vehicle? y/n");
    char v = inputValidate2();
    if (v == 'Y' || v == 'y') {
        printf("Please enter # of miles driven: ");
        do {
            scanf("%f", &miles);
            if (miles < 0) {
                printf("Please enter a positive number!\n: ");
            }
        } while (miles < 0);
        *totalExpense = *totalExpense + (miles*EXPENSE_PER_MILES);
    }
};