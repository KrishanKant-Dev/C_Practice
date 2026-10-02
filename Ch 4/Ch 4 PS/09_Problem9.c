// Repeat prob 8 using while loop

// Write a program to calculate the factorial of a given number using a for loop

#include <stdio.h>

int main()
{
    int num, count = 1, Factorial = 1;
    printf("Enter The Value of number: ");
    scanf("%d", &num);

    if (num >= 0)
    {

        while (count <= num)
        {
            Factorial = Factorial * count;
            count++;
        }
        printf("The Factorial of %d is: %d", num, Factorial);
    }

    else
    {
        printf("Mathematical Error");
    }
    return 0;
}