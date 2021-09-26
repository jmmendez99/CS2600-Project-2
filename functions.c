#include "header.h"

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
double private_vehicle_cost(double miles_driven){
    char private_vehicle_bool;
    double expense_per_mile = 0.27;
    double private_vehicle_expense = 0;
    printf("If you drove a private vehicle, type 'y.' If you did not, press any key.\n");
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
double departure_arrival_times(double departure_time, double arrival_time){
    printf("What time did you depart on the first day of your trip? Enter time as decimal \n(i.e. put a decimal in place of colon.\n");
    scanf("%lf", &departure_time);
    printf("What time did you arrive back home on the last day of your trip.\n");
    scanf("%lf", &arrival_time);
    //printf("On the first day of your trip, you departed at %lf. On the last day of your trip, you arrived back home at %lf.", departure_time, arrival_time);
    return departure_time, arrival_time;
}

double car_rental_fees(){
    
    char car_rental_choice;         //Variable to represent yes/no
    double car_rental_cost = 0;     //Setting to 0 so we can return that value if no car was rented. 
    

    printf("Did you have a car rental on your trip?");
    scanf("%c\n", &car_rental_choice);

    if(car_rental_choice == 'y'){   //Checking if user rented a car
        printf("How much was your rental?");
        scanf("%lf", &car_rental_cost);

        return car_rental_cost;
    }
    else
        return car_rental_cost;
}

//Needs to return two things: Total Cost of Parking and Total Allowable Cost of Parking
//Can achieve this through pointers.
double parking_fees(int num_of_days){

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

double registration_fees()
{
   double reg_fee;
   printf(" Enter registration fee \n");
scanf(reg_fee);
while(reg_fee<0)
{
printf(" Enter correct registration fee\n");
scanf(reg_fee);
}
   totalExpenses=totalExpenses+reg_fee;
return 0;
}
