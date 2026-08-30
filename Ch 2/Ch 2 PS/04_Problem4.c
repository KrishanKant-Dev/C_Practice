// Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1

/*
1: (3*x)
2: (3*x)/y 
3. (3*x/y)-(z)+1
that is: -2
*/

#include <stdio.h>

int main()
{
    int x = 2;
    float y = 3;
    int z = 3;
    int k = 1;
    float result = 3*x/y-z+k;

    printf("============================\n");
    printf("The Result is: %.2f", result);
    printf("\n============================");
    return 0;
}