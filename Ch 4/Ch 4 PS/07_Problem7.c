// Write a program to calculate the sum of the numbers occurring in the multiplication
// table of 8 (consider 8 × 1 to 8 × 10)

#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;
    printf("Enter The Value of number: ");
    scanf("%d", &num);

    while (i <= 10)
    {
        sum = (num * i) + sum;
        i++;
    }
    printf("The Sum of First %d Natural Numbers is: %d ", num, sum);
    return 0;
}