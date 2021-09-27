#include "header.h"

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days;
    printf("Please enter the total number of days spent on the trip.\n");
    scanf("%d", &num_of_days);
    return num_of_days;
}

double round_trip_airfare(){
    double round_trip_cost;
    printf("What did the round-trip airfare cost?\n");
    scanf("%lf", &round_trip_cost);
    return round_trip_cost;
}
double taxi_fees(int days){
    double total_taxi_cost;
    char choice;
    printf("Did you take a taxi on your trip?: 'y' for yes, 'n' otherwise\n");
    scanf("%c", &choice);
    if(choice == 'y'){
        Taxi: ;
        printf("What were your round-trip taxi fees?\n");
        scanf("%lf", &total_taxi_cost);
        if(total_taxi_cost < 0){
            goto Taxi;
        }
        return total_taxi_cost;
    }
    else{
        return 0;
    }
    
}

double hotel_expenses(int days){
    double total_hotel_cost;
    Hotel: ;
    printf("What were your total hotel costs?\n");
    scanf("%lf", &total_hotel_cost);
    if (total_hotel_cost < 0){
        goto Hotel;
    }
    return total_hotel_cost;
}
double private_vehicle_cost(){
    char private_vehicle_bool;
    double miles_driven;
    double expense_per_mile = 0.27;
    double private_vehicle_expense = 0;
    printf("If you drove a private vehicle, type 'y'. If you did not, press any key.\n");
    scanf("%c", &private_vehicle_bool);
    if(private_vehicle_bool == 'y'){
        printf("How many miles did you drive?\n");
        scanf("%d", &miles_driven);
        private_vehicle_expense = expense_per_mile*miles_driven;
        return private_vehicle_expense;
    }else{
        return private_vehicle_expense;
    }
}

double car_rental_cost(){
    
    char car_rental_choice;         //Variable to represent yes/no
    double car_rental_cost = 0;     //Setting to 0 so we can return that value if no car was rented. 
    
    printf("If you purchased a car rental, type 'y'. If you did not, press any key.\n");
    scanf("%c\n", &car_rental_choice);

    if(car_rental_choice == 'y'){   //Checking if user rented a car
        printf("How much was your rental?");
        scanf("%lf", &car_rental_cost);

        return car_rental_cost;
    }
    else
        return car_rental_cost;
}

double parking_cost(){

    int temp_day = 1;   //Using temp_day to represent the current day value in the for loop's output*/

    double parking_cost;    //Need this for Calculating $6 allowable deduction
    double total_parking_cost;  //Need this for total expenses incurred on the trip

    for(int counter = 0; counter < num_of_days; counter++){
        printf("How much was parking on day %d", temp_day);
        scanf("%lf", &parking_cost);
        //parkingcost = par
        temp_day = temp_day + 1;
        
    }

    return parking_cost;
}
