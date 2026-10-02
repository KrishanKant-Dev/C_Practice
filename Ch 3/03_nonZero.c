// Non zero value in C is always true

#include <stdio.h>

int main()
{

    if (290) // non zero
    {
        printf("This Statement is Executed\n");
    }

    if (2.69) // non zero
    {
        printf("This Statement is also Executed\n");
    }

    if ('C') // non zero
    {
        printf("This another Statement is also Executed\n");
    }

    if (0) // zero
    {
        printf("This Statement will not get Executed");
    }
    return 0;
}