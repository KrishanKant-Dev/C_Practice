// Write a program to sum first ten natural numbers using while loop

#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;
    printf("Enter The Value of number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("The Sum of First %d Natural Numbers is: %d ", num, sum);
    return 0;
}