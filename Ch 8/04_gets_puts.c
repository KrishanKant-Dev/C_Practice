/*
gets doesn’t know where to stop, It’s a function that happily pours 10 gallons into a 1-gallon jug, then wonders why the floor is wet
*/

#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // gets doesn't alone prints anything, it can be used with printf or puts
    printf("%s",st); // doesn't add a newline
    puts(st); // prints anf adds a newline
    printf("Moew");
    return 0;
}