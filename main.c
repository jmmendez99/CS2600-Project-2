#include <stdio.h>
#include "header.h"

int main(void) {

    //Values to be passed in to other functions
    int num_of_days;
    double departure_time;
    double arrival_time;

    //Values going to be returned from function calls and stored in variables
    double airfare;
    double car_rentals;
    double miles_driven;
    double parking_fees;
    double taxi;
    double registration_fees;
    double hotels;
    double meals;
    double total_costs;
    double allowable_costs;
    double excess;
    double amnt_saved;
    double meals;
    double getBreakfast;
    double getLunch;
    double getDinner;

    //Get # of days spent on trip and departure/arrival times
    printf("Enter the total number of days spent on the trip: ");
    scanf("%d\n", &num_of_days);

    printf("Enter the time of departure on the first day of your trip. Enter as 24-hour time. Ex: 15.00 would be 3 pm.");
    scanf("%lf\n", &departure_time);

    printf("Enter the time of arrival back home on the last day of your trip.");
    scanf("lf\n", &arrival_time);

    
    


    





    /* Output total expenses, total allowable expenses,
    excess to be reimbursed,and amount saved.*/



    return 0;
}
