/*
Write a program to create an array of 10 integers and store multiplication table of n in
it
*/

#include <stdio.h>

int main()
{
    int num, my_arr[10];
    printf("Enter the value of Number: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        my_arr[i] = num * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, my_arr[i]);
    }

    return 0;
}