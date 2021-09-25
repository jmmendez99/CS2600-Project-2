#include<header.h>

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days;
    printf("Please enter the total number of days spent on the trip.\n");
    scanf("%i", &num_of_days);
    return num_of_days;
}
double round_trip_airfare(){
    double round_trip_cost;
    printf("What did the round-trip airfare cost?\n");
    scanf("%lf", &round_trip_cost);
    return round_trip_cost;
}
double private_vehicle_cost(int miles_driven){
    char private_vehicle_bool;
    int expense_per_mile = 0.27;
    int private_vehicle_expense;
    printf("If you drove a private vehicle, type 'y.' If you did not, press any key.\n");
    scanf("%c", &private_vehicle_bool);
    if(private_vehicle_bool == 'y'){
        printf("How many miles did you drive?\n");
        scanf("%d", miles_driven);
        private_vehicle_expense = expense_per_mile*miles_driven;
        return private_vehicle_expense;
    }else{
        return 0;
    }
}
int departure_arrival_times(double departure_time, double arrival_time){
    printf("What time did you depart on the first day of your trip? Enter time as decimal \n(i.e. put a decimal in place of colon.\n");
    scanf("%lf", departure_time);
    printf("What time did you arrive back home on the last day of your trip.\n");
    scanf("%lf", arrival_time);
    printf("On the first day of your trip, you departed at %lf. On the last day of your trip, you arrived back home at %lf.", departure_time, arrival_time);
    return 0;
}
