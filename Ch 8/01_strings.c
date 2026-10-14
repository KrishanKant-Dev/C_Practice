// a string is a 1d character array terminated by a null character

#include <stdio.h>

int main()
{
    char str[] = {'x','y','z','\0'}; // is as same as: xyz
    printf("First Character is: %c",str[0]);
    return 0;
}