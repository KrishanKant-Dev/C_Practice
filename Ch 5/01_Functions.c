#include <stdio.h>

// Function Prototype: 
int sum(int,int);

// Function Definition:
int sum(int x,int y)
{
    printf("The Sum is: %d",x+y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 34;
    int c = sum(a,b); // function me a and b ki value jati hai; a,b remains unchanged (call by value)
    printf("\n%d",c); // Function Call 
    
    return 0;
}