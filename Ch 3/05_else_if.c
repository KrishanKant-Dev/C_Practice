// Write a C program to calculate the electricity bill based on units consumed using an else-if ladder

#include <stdio.h>

int main()
{
    float units_consumed;
    printf("Enter the Value of Electricity Units consumed: ");
    scanf("%f",&units_consumed);

    if (units_consumed <= 0)
    {
        printf("\nEnter Valid range of Units Consumed");
    }

    else if (units_consumed >= 0 && units_consumed<100)
    {
        printf("\nYour Bill is: %.2f",units_consumed*1.5);
    }

    else if(units_consumed>=100 && units_consumed<200)
    {
        printf("\nYour Bill is: %.2f",units_consumed*2.5);
    }

    else if(units_consumed>=200 && units_consumed<300)
    {
        printf("\nYour Bill is: %.2f",units_consumed*4);
    }

    else
    {
        printf("\nYour Bill is: %.2f",units_consumed*6);
    }
    
    return 0;
}