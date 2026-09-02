// 1 is True and 0 is False

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    
    printf("============================\n");
    printf("The value of a and b is %d \n", a && b); // logical and
    printf("The value of a or b is %d \n", a || b);  // logical or
    printf("The value of not a  is %d \n", !a);      // logical not
    printf("The value of not b  is %d", !b);         // logical not

    printf("\n============================");
    return 0;
}