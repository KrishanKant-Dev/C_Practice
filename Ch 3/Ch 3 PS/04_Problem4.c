/*

Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user

*/

// A year is a leap year if it is divisible by 400,
// OR if it is divisible by 4 but not by 100.
// This rule accounts for Earth's approximately 365.2422-day orbit.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter The Year: ");
    scanf("%d",&year);

    if ((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("%d is a Leap Year",year);
    }

   else
    {
        printf("%d isn't a Leap Year",year);
    }
    return 0;
}