#include "header.h"

//Functions to be implemented Go here

int total_trip_days() {
    int num_of_days = 0;
    
    while(num_of_days < 1){
        printf("Please enter the total number of days spent on the trip.\n");
        scanf("%d\n", &num_of_days);
    }    
    return num_of_days;
}

double round_trip_airfare(){
    double round_trip_cost = 0;

    printf("What did the round-trip airfare cost?\n");
    scanf("%lf\n", &round_trip_cost);

    while(round_trip_cost < -0.01){
        printf("You entered a negative number for the airfare cost. Try again. What did the round-trip airfare cost?\n");
        scanf("%lf\n", &round_trip_cost);
    }
    return round_trip_cost;
}

double taxi_fees(int num_of_days){
    double total_taxi_cost = 0;
    char choice;

    printf("Did you take a taxi on your trip?: 'y' for yes, 'n' otherwise\n");
    scanf("%c\n", &choice);

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
        return total_taxi_cost;
    }
}

double hotel_expenses(int num_of_days){
    double total_hotel_cost = 0;

    Hotel: ;
    printf("What were your total hotel costs?\n");
    scanf("%lf\n", &total_hotel_cost);

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
    scanf("%c\n", &private_vehicle_bool);

    if(private_vehicle_bool == 'y'){
        printf("How many miles did you drive?\n");
        scanf("%d\n", &miles_driven);

        while(miles_driven < -0.01){
            printf("You entered a negative number. Try again. How many miles did you drive?\n");
            scanf("%d\n", &miles_driven);
        }

        private_vehicle_expense = expense_per_mile * miles_driven;
        return private_vehicle_expense;
    }
    else{
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
            printf("How much was your rental?\n");
            scanf("%lf\n", &car_rental_expense);
        }
        return car_rental_expense;
    }
    else{
        return car_rental_expense;
    }
}

double parking_cost(){
    char car_parking_choice;         //Variable to represent yes/no
    double parking_expense = 0;      //Setting to 0 so we can return that value if no parking bought.
    
    printf("If you purchased parking, type 'y'. If you did not, press any key.\n");
    scanf("%c\n", &car_parking_choice);

    if(car_parking_choice == 'y'){   //Checking if user had any parking expenses
        while(parking_expense < 0) {
            printf("How much did parking cost you?\n");
            scanf("%lf\n", &parking_expense);
        }
        return parking_expense;
    }
    else{
        return parking_expense;
    }
}

double registration_fees(){   
       double totalExpenses = 0; 
       double reg_fee;
       
       printf("Enter any conference or seminar registration fees.\n");
       scanf("%lf\n", &reg_fee);
    
       while(reg_fee < 0){
        printf(" Enter correct registration fee\n");
        scanf("%lf\n", &reg_fee);
      }

       totalExpenses = totalExpenses + reg_fee;
       
       return totalExpenses;
}

double meals(int num_of_days, double arrival_time, double departure_time){
        int breakfast;
        int lunch;
        int dinner;
        double breakfast_cost, lunch_cost, dinner_cost;
        double excess_reimbursement, amnt_saved;
        double totalExpenses;

        //meal allowances
        double breakfast_allowance = num_of_days * 9;
        double lunch_allowance = num_of_days * 12;
        double dinner_allowance = num_of_days * 16;

        //storing costs of (b)reakfast/(l)unch/(d)inner
        double b,l,d;     
        b = getBreakfast();
        l = getLunch();
        d = getDinner();

        //Figuring out how many meals the business person gets
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
        
        if(arrival_time > 19.00)
           dinner = dinner;
        else if(arrival_time < 19.00)
           dinner = dinner - 1;
        

        //Breakfast Deduction Calculation
        if (b < breakfast_allowance){       //if saving money
        breakfast_cost = breakfast_allowance - b;
        amnt_saved = amnt_saved + breakfast_cost;
        breakfast_cost = breakfast_cost + amnt_saved;
        }
        else if (b > breakfast_allowance){  //if need to pay money back to company
        breakfast_cost = b - breakfast_allowance;
        excess_reimbursement = excess_reimbursement + breakfast_cost;
        breakfast_cost = breakfast_cost + excess_reimbursement;
        }

        //Lunch Deduction Calculation
        if (l < lunch_allowance){       //if saving money
        lunch_cost = lunch_allowance - l;
        amnt_saved = amnt_saved + lunch_cost;
        lunch_cost = lunch_cost + amnt_saved;
        }
        else if (l > lunch_allowance){  //if need to pay money back to company
        lunch_cost = l - lunch_allowance;
        excess_reimbursement = excess_reimbursement + lunch_cost;
        lunch_cost = lunch_cost + excess_reimbursement
        }

        //Dinner Deduction Calculation
        if (d < dinner_allowance){       //if saving money
        dinner_cost = dinner_allowance - d;
        amnt_saved = amnt_saved + dinner_cost;
        dinner_cost = dinner_cost + amnt_saved;
        }
        else if (d > dinner_allowance){  //if need to pay money back to company
        dinner_cost = d - dinner_allowance;
        excess_reimbursement = excess_reimbursement + dinner_cost;
        dinner_cost = dinner_cost + excess_reimbursement;
        }

        totalExpenses = breakfast_cost + lunch_cost + dinner_cost;

        return totalExpenses;
}

double getBreakfast(){
       double cost;
       
       while(cost < 0){
       printf("Enter the cost of breakfasts you ate.\n");
       scanf("%lf\n", &cost);
       }
       return cost;
}

double getLunch(){
       double cost;
       
       while(cost < 0){
       printf("Enter the cost of lunches you ate.\n");
       scanf("%lf\n", &cost);
       }
       return cost;
}

double getDinner(){
       double cost;

       while(cost < 0){
       printf("Enter the cost of dinners you ate.\n");
       scanf("%lf\n", &cost);
       }
       return cost;
}
