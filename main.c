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
    double registration_fees;
    double parking_fees;    //has deductions
    double taxi;            //has deductions
    double hotels;          //has deductions
    double meals;           //has deductions
    
    //Costs that will output to the console
    double total_costs;  
    double allowable_costs;
    double excess_reimbursement;
    double amnt_saved;
    double meals;
    double getBreakfast;
    double getLunch;
    double getDinner;

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
    //registration_fees = conference_cost();
    //parking_fees = parking_cost();
    //taxi = taxi_fees();
    //hotels = hotel_expenses();


    //All Deductions
    //Parking Costs Deduction Calculation


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
