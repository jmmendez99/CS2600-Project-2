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
    double parking_fees;    //has deductions
    double taxi;            //has deductions
    double hotels;          //has deductions
    double meals;           //has deductions
    double getBreakfast;
    double getLunch;
    double getDinner;

    //Costs that will output to the console
    double total_costs = 0;  
    double allowable_costs = 0;
    double excess_reimbursement = 0;
    double amnt_saved = 0;

    //Get # of days spent on trip and departure/arrival times
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
    //taxi = taxi_cost();
    //hotels = hotel_cost();
    total_costs = airfare + car_rentals + miles_driven_private + registration_cost + parking_fees + taxi + hotels;


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


    //Hotel Costs Deduction Calculation


    //Meal Costs Deduction Calculation


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
