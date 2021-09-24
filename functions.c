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
    printf("What did a round-trip airfare cost?\n");
    scanf("%lf", &round_trip_cost);
    return round_trip_cost;
}
double taxi_fees(){
    double total_taxi_cost;
    printf("What were your round-trip taxi fees?\n");
    scanf("%f", &total_taxi_cost);
    /*
    if (total_taxi_cost == 0){
        return 0;
    }
    double reimbursed_taxi = (total_taxi_cost - (10 * days));
    return double reimbursed_taxi;
    */
    //whoops, this should be somewhere else: main method? another function?
    //I know there's problems if taxi cost is lower than days.
    return total_taxi_cost;
}
double hotel_expenses(){
    double total_hotel_cost;
    printf("What were your round-trip taxi fees?\n");
    scanf("%f", &total_hotel_cost);
    return total_hotel_cost;
    
}