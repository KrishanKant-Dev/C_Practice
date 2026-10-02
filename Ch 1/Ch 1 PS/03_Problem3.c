// Write a program to convert Celsius Centigrade temperature to Fahrenheit

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter The Value of Temperature in Celsius: ");
    scanf("%f",&celsius);

    fahrenheit = (9.0/5.0*celsius) + 32; // float/float = float whereas , int/int = int i.e. 9/5 = 1 

    printf("The Temperature reading in Fahrenheit is: %.2f",fahrenheit);

    return 0;
}