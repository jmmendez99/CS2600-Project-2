#include "header.h"

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days;
    printf("Please enter the total number of days spent on the trip.\n");
    scanf("%i", &num_of_days);
    while(num_of_days<1){
        printf("You had to have been on the trip for at least a day. Enter the total number of days \nspent on the trip.\n");
        scanf("%i", &num_of_days);
    }
    scanf("%d", &num_of_days);
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

double meals(int days, double arrival, double departure)
    {
       int breakfast;
       int lunch;
       int dinner;
       if (departure<7.00)
           breakfast=days;
       else if(departure>7.00)
    breakfast=days-1;
    if(arrival>8.00)
    breakfast=breakfast;
    else if(arrival<8.00)
           breakfast=breakfast-1;
       if(departure<12.00)
           lunch=days;
       else if(departure>12.00)
           lunch=days-1;
       if(arrival>13.00)
           lunch=lunch;
       else if(arrival<13.00)
           lunch=lunch-1;
       if(departure<18.00)
           dinner=days;
       else if(departure>18.00)
           dinner=days-1;
       if(arrival>19.00)
           dinner=dinner;
       else if(arrival<19.00)
           dinner=dinner-1;
       double b,l,d;
       b=getBreakfast();
       l=getLunch();
       d= getDinner();
       totalExpenses=totalExpenses+(b*breakfast)+(l*lunch)+(d*dinner);
       return (9*breakfast)+(12*lunch)+(16*dinner);

    }
double getBreakfast()
    {
       double cost;
       printf("Enter the cost of breakfast\n");
       scanf(cost);
       return cost;
    }
double getLunch()
    {
       double cost;
       printf("Enter the cost of Lunch\n");
       scanf(cost);
       return cost;
    }
double getDinner()
    {
       double cost;
       printf("Enter the cost of Dinner\n");
       scanf(cost);
       return cost;
    }
