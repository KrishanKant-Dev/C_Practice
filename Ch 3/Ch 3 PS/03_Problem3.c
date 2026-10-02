/*

Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5% --> 0.05
5.0L - 10.0L 20% --> 0.2
Above 10.0L 30% --> 0.3
Note that there is no tax below 2.5L. Take income amount as an input from the user

*/

#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter Your Income: $");
    scanf("%f",&income);

    if (income<250000)
    {
        tax = 0;
    }
    else if (income>=250000 && income <500000)
    {
        tax = (income-250000)*0.05;
    }
    else if (income>= 500000 && income<1000000)
    {
        tax = (500000-250000)*0.05 + (income-500000)*0.2;
    }
    else
    {
       tax = (500000-250000)*0.05 + (1000000-500000)*0.2; + (income-1000000)*0.3;
    }
    printf("You need to Pay $%.2f on $%.2f Income",tax,income);
    return 0;
}