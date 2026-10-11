/*
Write a program having a variable i . Print the address of i . Pass this variable to a
function and print its address. Are these addresses the same? Why?
*/

#include <stdio.h>

void my_fun(int *i); // address is recieved to i, so if I will print i, we will get the Address, so there is no need to use *i
void my_fun(int *i)
{
    printf("\nThe Address of 'i' in the function is: %p",i);
}

int main()
{
    int i = 2;
    printf("The Address of Variable 'i' is: %p", &i); // address is passed to i
    my_fun(&i);
    return 0;
}

// same address