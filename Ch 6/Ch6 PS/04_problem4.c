/*
Write a function and pass the value by reference
*/

#include <stdio.h>

void my_fun(int *i);
void my_fun(int *i)
{
    // meow
}

int main()
{
    int i = 34;
    my_fun(&i);
    return 0;
}