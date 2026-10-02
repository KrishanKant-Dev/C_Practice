// Checking the number is Prime or not, using other loops

// From While Loop

// Write a program to check whether a given number is prime or not using loops

#include <stdio.h>

int main()
{
    int num, i=2;

    printf("Enter the Value of the Number: ");
    scanf("%d", &num);

    if (num <= 1)
        printf("%d is not a Prime Number", num);

    else if (num == 2)
        printf("%d is a Prime Number",num);

    else
    {
        while (i<num)
        {
            if (num % i == 0)
                printf("%d is not a Prime Number",num);

            else
                printf("%d is a Prime Number",num);
            break;
        }
    }
    return 0;
}
