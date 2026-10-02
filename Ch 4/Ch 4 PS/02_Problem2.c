// Write a program to print multiplication table of 10 in reversed order

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter The Value of number: ");
    scanf("%d", &num);

    for (i = 10; i; i--)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}