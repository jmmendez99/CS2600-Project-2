#include "header.h"

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days;
    
    while(num_of_days < 0){
        printf("Please enter the total number of days spent on the trip.\n");
        scanf("%d", &num_of_days);
    }    
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

double hotel_expenses(int num_of_days){
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
    double car_rental_expense = 0;  //Setting to 0 so we can return that value if no car was rented. 
    
    printf("If you purchased a car rental, type 'y'. If you did not, press any key.\n");
    scanf("%c\n", &car_rental_choice);
    
    if(car_rental_choice == 'y'){   //Checking if user rented a car
        while(car_rental_expense < 0) {
            printf("How much was your rental?");
            scanf("%lf", &car_rental_expense);
        }

        return car_rental_expense;
    }
    else
        return car_rental_expense;
}

double parking_cost(){
    char car_parking_choice;         //Variable to represent yes/no
    double parking_expense = 0;
    
    printf("If you purchased parking, type 'y'. If you did not, press any key.\n");
    scanf("%c\n", &car_parking_choice);

    if(car_parking_choice == 'y'){   //Checking if user had any parking expenses
        while(parking_expense < 0) {
            printf("How much did parking cost you?");
            scanf("%lf", &parking_expense);
        }

        return parking_expense;
    }
    else
        return parking_expense;
}

double registration_fees()
    {   
       double totalExpenses; 
       double reg_fee;
       
       printf(" Enter registration fee \n");
       scanf(reg_fee);
    
       while(reg_fee<0)
      {
        printf(" Enter correct registration fee\n");
        scanf(reg_fee);
      }
       
       totalExpenses = totalExpenses + reg_fee;
       
       return 0;
    }

double meals(int num_of_days, double arrival_time, double departure_time)
    {
        int breakfast;
        int lunch;
        int dinner;
        double totalExpenses;

        //Breakfast
        if (departure_time < 7.00)
           breakfast = num_of_days;
        else if(departure_time > 7.00)
            breakfast = num_of_days - 1;
        
        if(arrival_time > 8.00)
            breakfast = breakfast;
        else if(arrival_time < 8.00)
           breakfast = breakfast - 1;
        
        //Lunch
        if(departure_time < 12.00)
           lunch = num_of_days;
        else if(departure_time > 12.00)
           lunch = num_of_days - 1;
        
        if(arrival_time > 13.00)
           lunch = lunch;
        else if(arrival_time < 13.00)
           lunch = lunch - 1;
       
        //Dinner
        if(departure_time < 18.00)
           dinner = num_of_days;
        else if(departure_time > 18.00)
           dinner = num_of_days - 1;
        
        if(arrival > 19.00)
           dinner = dinner;
        else if(arrival < 19.00)
           dinner = dinner - 1;
        
        double b,l,d;
        b = getBreakfast();
        l = getLunch();
        d = getDinner();
        totalExpenses = totalExpenses + (b*breakfast) + (l*lunch) + (d*dinner);

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
