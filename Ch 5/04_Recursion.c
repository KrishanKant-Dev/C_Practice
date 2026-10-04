/*
The if condition is checked every time the function is called.

When x reaches 1, it returns 1 and stops. We don't need to go to 0.

If x is 0 without x == 0 as a stopping condition, it goes -1, -2, -3... and never reaches 1.

The computer doesn't know negative factorial is invalid; it only follows our instructions.

Without a stopping condition, recursion continues until stack memory runs out.
*/

#include <stdio.h>

int factorial(int x);

int factorial(int x)
{
    if (x == 1 || x == 0) // logic for factorial of 1 that makes program terminate, x == 0 is just for value of num = 0
    return 1; // base condition 

    return x * factorial(x - 1);
}

int main()
{
    int num = 0;
    printf("Factorial of %d is: %d", num, factorial(num));
    return 0;
}