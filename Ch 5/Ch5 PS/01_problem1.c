// Write a program using function to find average of three numbers

#include <stdio.h>

float average(int x, int y, int z);

float average(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}

int main()
{
    int num1, num2, num3;
    printf("Enter the Value of Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nThe Average of %d,%d and %d is : %.2f", num1, num2, num3, average(num1, num2, num3));

    return 0;
}