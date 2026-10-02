#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = 9 / 2;
    int d = 5.6;
    
    printf("The value of a/b is %f", c);
    printf("\nThe value of d is: %d",d); // Demotion

    return 0;
}

// int and int = int, so 9 and 2 are int and 9/2 is 4 as result is int, so 4 is then stored as float as: 4.000000

// int and  float = float 
// float and float = float