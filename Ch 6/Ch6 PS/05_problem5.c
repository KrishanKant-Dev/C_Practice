/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main()
*/

#include <stdio.h>

float sum(float *a, float *b);
float average(float *a, float *b);

int main()
{
    float num1, num2;
    printf("Enter the value of num1: ");
    scanf("%f", &num1);
    printf("Enter the value of num2: ");
    scanf("%f", &num2);

    printf("\nThe sum of %.2f and %.2f is: %.2f and its address in function is: %p", num1, num2, sum(&num1, &num2));
    printf("\nThe Average of %.2f and %.2f is: %.2f and its address in function is: %p", num1, num2, average(&num1, &num2));
    return 0;
}

float sum(float *a, float *b)
{
    return *a + *b;
}

float average(float *a, float *b)
{
    return (*a + *b) / 2.0;
}

// We can also print the address of the variable in the function, that gets terminated