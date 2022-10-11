/*
    5.7 Final Exam: Catered Family Dinner
    Date: August 26,2021
    Student: Ismael Galarza
    CIS ECPI University
 */

#include <stdio.h>
// function prototype for the swap.
void swap(float *A_total, float *C_total);

int main()
{

    // declare the counter for the FOR loop
    int counter;
    // Adult meal costs
    float A_Meal[5] = {10, 10, 15, 7.5};
    // child meal costs
    float C_Meal[3] = {
        7.5,
        7.5,
        8.5,
    };
    float A_total = 0, C_total = 0, percentage = 45;

    // calculating total cost of adult and child meals
    for (counter = 0; counter < 4; counter++)
    {
        // calucalting the total for adult
        A_total += A_Meal[counter];
        // calculating for total children meal
        C_total += C_Meal[counter];
    }

    // total meal cost
    float Total_cost = A_total + C_total;
    // total donation cost
    float Total_donation = (percentage * Total_cost) / 100;
// print statement for the user.
    printf("Welcome to the Family Dinner Catering Service\n\n"); 
    printf("\n");
    printf("Meal sales for Adults:\n");
    printf("\n");
// printing adult meals
    for (counter = 0; counter < 4; counter++) 
    {
        printf("\nAdult catered meal Prices: $ %.2f", A_Meal[counter]);
    }
// the swap of the Meals
    swap(&A_total, &C_total); 

    printf("\n\nTotal Adult Catered Meal Prices are $ %.2f", C_total);
    printf("\n");
    printf("\nMeal sales for Children:\n");
    printf("\n");
// printing child meals
    for (counter = 0; counter < 3; counter++) 
    {
        printf("\nChildren catered meal Prices: $ %.2f", C_Meal[counter]);
    }
    printf("\n\nTotal Children Catered Meal Prices are $ %.2f", A_total);
    printf("\n");
    printf("\nTotal cost for Catered meals are $ %.2f", Total_cost);
    printf("\n");

    printf("\nTotal Donation for Charity is $ %.2f", Total_donation);
    printf("\n");

    return 0;
}
// function definitions that determines the integer swap
void swap(float *A_total, float *C_total) 
{

    float temp = *A_total;
    *A_total = *C_total;
    *C_total = temp;
}