// Write a program to calculate simple interest for a set of values representing principal,number of years and rate of interest

#include <stdio.h>

int main()
{
    float principal, rate, time, simple_interest;

    printf("============================\n");
    
    printf("Enter the Value of Principal, Rate and Time in Years: \n");
    scanf("%f \n%f \n%f", &principal, &rate, &time);

    simple_interest = (principal*rate*time)/100;

    printf("The Simple Intrest is Calculated to be: %.3f %%",simple_interest);

    printf("\n============================");
    return 0;
}

