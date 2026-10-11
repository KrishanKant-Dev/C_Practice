/*
Write a program to print the value of a variable i by using a pointer to pointer
type variable
*/

#include <stdio.h>

int main()
{
    int i = 37;
    int *j = &i;
    int **k = &j;

    printf("The value of i is: %d", **k);
    return 0;
}