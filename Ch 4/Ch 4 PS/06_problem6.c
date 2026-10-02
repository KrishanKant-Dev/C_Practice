// Write a program to implement program 5 using do-while loop

#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;
    printf("Enter The Value of number: ");
    scanf("%d", &num);

    do
    {
        sum = sum + i;
        i++;

    } while (i <= num);

    printf("The Sum of First %d Natural Numbers is: %d ", num, sum);
    return 0;
}