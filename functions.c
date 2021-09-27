#include<header.h>

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days;
    printf("Please enter the total number of days spent on the trip.\n");
    scanf("%i", &num_of_days);
    while(num_of_days<1){
        printf("You had to have been on the trip for at least a day. Enter the total number of days \nspent on the trip.\n");
        scanf("%i", &num_of_days);
    }
    return num_of_days;
}
double round_trip_airfare(){
    double round_trip_cost;
    printf("What did the round-trip airfare cost?\n");
    scanf("%lf", &round_trip_cost);
    while(round_trip_cost<-0.01){
        printf("You entered a negative number for the airfare cost. Try again. What did the round-trip airfare cost?\n");
        scanf("%lf", &round_trip_cost);
    }
    return round_trip_cost;
}
double private_vehicle_cost(double miles_driven){
    char private_vehicle_bool;
    double expense_per_mile = 0.27;
    double private_vehicle_expense = 0;
    printf("If you drove a private vehicle, type 'y.' If you did not, press any other key.\n");
    scanf("%c", &private_vehicle_bool);
    if(private_vehicle_bool == 'y'){
        printf("How many miles did you drive?\n");
        scanf("%d", &miles_driven);
        while(miles_driven<-0.01){
            printf("You entered a negative number. Try again. How many miles did you drive?\n");
            scanf("%d", &miles_driven);
        }
        private_vehicle_expense = expense_per_mile*miles_driven;
        return private_vehicle_expense;
    }else{
        return private_vehicle_expense;
    }
}
double departure_arrival_times(double departure_time, double arrival_time){
    printf("What time did you depart on the first day of your trip? Enter time as decimal \n(i.e. put a decimal in place of colon.\n");
    scanf("%lf", &departure_time);
    while(departure_time<1 || departure_time > 12.59){
        printf("Try again. Please enter a time that is between 1 and 12.59.");
        scanf("%lf", &departure_time);
    }
    printf("What time did you arrive back home on the last day of your trip.\n");
    scanf("%lf", &arrival_time);
    while(arrival_time<1 || arrival_time > 12.59){
        printf("Try again. Please enter a time that is between 1 and 12.59.");
        scanf("%lf", &arrival_time);

    }
    return departure_time, arrival_time;
}
