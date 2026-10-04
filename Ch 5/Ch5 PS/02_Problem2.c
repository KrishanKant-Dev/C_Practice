// Write a function to convert Celsius temperature into Fahrenheit

#include <stdio.h>

float temp_in_fahrenheit(float x);

float temp_in_fahrenheit(float x)
{
    return (9.0/5)*x + 32;
}

int main()
{
    float temp_in_celsius;
    printf("Enter the Value of Temperature in Celsius: ");
    scanf("%f",&temp_in_celsius);

    printf("The Temperature in Fahrenheit is: %.2f", temp_in_fahrenheit(temp_in_celsius));
    return 0;
}