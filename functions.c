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
    char choice;
    printf("Did you take a taxi on your trip?: 'y' for yes, 'n' otherwise\n");
    scanf("%c", &choice);
    if(choice == 'y'){
        printf("What were your round-trip taxi fees?\n");
        scanf("%lf", &total_taxi_cost);
        return total_taxi_cost;
    }
    else{
        return 0;
    }
    
}

double hotel_expenses(int days){
    double total_hotel_cost;
    printf("What were your total hotel costs?\n");
    scanf("%lf", &total_hotel_cost);
    return total_hotel_cost;
   


    
}