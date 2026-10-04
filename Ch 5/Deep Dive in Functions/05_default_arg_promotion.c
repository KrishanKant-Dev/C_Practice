#include <stdio.h>

// function prototype resolves below mentioned error

int main()
{
    double x = 3.0;
    printf("Square : %d\n",square(x));

    return 0;
}

int square(int n) // explodes with error, compiler expecting int value b cos it hasnt seen any prototype, but it was supplied with double

{
    return n*n;
}