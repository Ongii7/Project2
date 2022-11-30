int inputCheckInt(int input) {
    int i;
    do {
        i = scanf("%d", &input);
        if (i != 1) {
            printf("Invalid input!\n");
            scanf("%*s");
            // clear input buffer
            while (getchar() != '\n')
                ;
        }
    } while (i != 1);
    return input;
};

void getTotDaysOnTrip(int* totalDate) {
    printf("Please enter number of day on the trip:");
    do {
        totalDate = inputCheckInt(totalDate);
        if (totalDate > 0) {
            break;
        } else {
            printf("Please enter at least 1 day or more!\n");
        }
    } while (1);
};
