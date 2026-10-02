// Write a program to calculate the factorial of a given number using a for loop

#include <stdio.h>

int main()
{
    int num, count, Factorial = 1;
    printf("Enter The Value of number: ");
    scanf("%d", &num);

    if (num >= 0)
    {

        for (count = 1; count <= num; count++)
        {
            Factorial = Factorial * count;
        }
        printf("The Factorial of %d is: %d", num, Factorial);
    }

    else
    {
        printf("Mathematical Error");
    }
    return 0;
}