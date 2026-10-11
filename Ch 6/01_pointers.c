// Address of : &
// Value at address : *

#include <stdio.h>

int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("add i= %u\n", &i);
    printf("add i= %u\n", j);
    printf("add j= %u\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);

//////////////////////////////////////////////////

    int x = 10;
    int *p = &x;

    *p = 50;
    printf("%u",x);
    return 0;
}