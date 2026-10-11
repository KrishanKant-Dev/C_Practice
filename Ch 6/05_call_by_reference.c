// address is passed to function
#include <stdio.h>

int sum(int *a, int *b);
int sum(int *a, int *b)
{
    *a = 6; // sum will also change as the value of at a changes first 
    return *a + *b;
}

int main()
{
    int x = 1 , y = 6;
    printf("The sum of a and b is: %d",sum(&x,&y)); // passes address to the function, so the value of variable changes via address
    printf("\nThe value of x is: %d",x);
    return 0;
}