// Write a recursive function to calculate the sum of first 'n' natural numbers

#include <stdio.h>

int sum_natural(int n);

int sum_natural(int n)
{
    if (n == 1)
        return 1;

    return n + sum_natural(n - 1);
}
int main()
{
    int num;
    printf("Enter the value of Number: ");
    scanf("%d", &num);
    printf("The Sum of %d Natural Numbers is: %d", num, sum_natural(num));
    return 0;
}