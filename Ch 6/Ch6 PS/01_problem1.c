/*
Write a program to print the address of a variable. Use this address to get the value of
the variable
*/

#include <stdio.h>

int main()
{
    int var;

    printf("Enter the Value in Variable: ");
    scanf("%d", &var);

    printf("\nThe address of 'Var' is: %p", &var);
    printf("\nThe Value at this variable is: %d", *&var);
    return 0;
}