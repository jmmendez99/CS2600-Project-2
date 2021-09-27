#include <stdio.h>
#include "header.h"

int main(void) {

    //Values to be passed into other functions
    int num_of_days;
    double departure_time;
    double arrival_time;

    /*Values going to be returned from function calls and stored
     in variables so that we can do calculations with them */
    double airfare;
    double car_rentals;
    double miles_driven_private;
    double registration_cost;
    double parking_fees;            
    
    double taxi;                    //total spent
    double taxi_allowed_expense;    //how much allowed
    double taxi_reimbursement;      //how much owed to the company
    double taxi_saved;              //how much money saved
    
    double hotels;                  //Hotel Variables
    double hotel_allowed_expense;  
    double hotel_reimbursement;   
    double hotel_saved;    
    
    double meal_costs;                   //Meal variables
    double Breakfast;
    double Lunch;
    double Dinner;

    //Costs that will output to the console
    double total_costs = 0;  
    double allowable_costs = 0;
    double excess_reimbursement = 0;
    double amnt_saved = 0;

    //Get days spent on trip and departure/arrival times and input validation
        num_of_days = total_trip_days();

        printf("Enter the time of departure on the first day of your trip. Enter as 24-hour time. Ex: 15.00 would be 3 pm: ");
        scanf("%lf\n", &departure_time);

        printf("Enter the time of arrival back home on the last day of your trip:");
        scanf("lf\n", &arrival_time);
    
    //Function calls to get total_costs of expenses before deductions
    airfare = round_trip_airfare();
    car_rentals = car_rental_cost();
    miles_driven_private = private_vehicle_cost();
    registration_cost = registration_fees();
    parking_fees = parking_cost();
    taxi = taxi_fees();
    hotels = hotel_expenses();
    Breakfast = getBreakfast();
    Lunch = getLunch();
    Dinner = getDinner();

    //Total cost of everything before any deductions are made
    total_costs = airfare + car_rentals + miles_driven_private + registration_cost + parking_fees + taxi + hotels + Breakfast + Lunch + Dinner;



    //All Deductions
    //Parking Costs Deduction Calculation
    double parking_allowance = num_of_days * 6;
    
    if (parking_fees < parking_allowance){
        parking_fees = parking_allowance - parking_fees;
        amnt_saved = amnt_saved + parking_fees;
    }
    else if (parking_fees > parking_allowance){
        parking_fees = parking_fees - parking_allowance;
        excess_reimbursement = excess_reimbursement + parking_fees;
    }

    //Taxi Costs Deduction Calculation
    taxi_allowed_expense = (10 * num_of_days);
    //returns negative when person used less than what was allowed
    taxi_reimbursement = taxi - taxi_allowed_expense;
    excess_reimbursement = excess_reimbursement + taxi_reimbursement; 
    //if saved money or broke even, sets what needs to be owed to 0
    if(taxi_reimbursement <= 0){
        //sets amount of money saved as a positive number.
        taxi_saved = fabs(taxi_reimbursement);
        taxi_reimbursement = 0;
    }
    taxi_saved = 0;

    //Hotel Costs Deduction Calculation
    hotel_allowed_expense = (90 * num_of_days);
    //returns negative when person used less than what was allowed
    hotel_reimbursement = hotels - hotel_allowed_expense;
    excess_reimbursement = excess_reimbursement + hotel_reimbursement;
    //if saved money or broke even, sets what needs to be owed to 0
    if(hotel_reimbursement <= 0 ){
        hotel_saved = fabs(hotel_reimbursement);
        hotel_reimbursement = 0;
    }
    hotel_saved = 0;

    //Meal Costs Deduction Calculation
    meal_costs = meals();   

    //Output Summary of Everything
    printf("Total Days on Trip: %d", num_of_days);
    printf("Time of Departure: %lf", departure_time);
    printf("Time of Arrival: %lf", arrival_time);
    printf("Total expenses: %lf", total_costs);
    printf("Total allowable expenses: %lf", allowable_costs);
    printf("Total excess reimbursement: %lf", excess_reimbursement);
    printf("Amount Saved: %lf", amnt_saved);

    return 0;
}
