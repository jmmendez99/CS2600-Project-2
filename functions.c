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
double taxi_fees(int days){
    double total_taxi_cost;
    printf("What were your round-trip taxi fees?\n");
    scanf("%f", &total_taxi_cost);
    double reimbursed_taxi = total_taxi_cost - (10 * days);

    if (reimbursed_taxi <= 0){
        return 0;
    }
    return reimbursed_taxi;
}

double hotel_expenses(int days){
    double total_hotel_cost;
    printf("What were your total hotel costs?\n");
    scanf("%f", &total_hotel_cost);
    double reimbursed_hotel = total_hotel_cost - (90 * days);

    if (reimbursed_hotel <= 0){
        return 0;
    }
    return reimbursed_hotel;
}