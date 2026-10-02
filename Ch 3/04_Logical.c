// 1 is True and 0 is False

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("The value of a and b is %d \n", a && b); // logical and

    printf("The value of a or b is %d \n", a || b); // logical or
    printf("The value of not a  is %d \n", !a);     // logical not
    printf("The value of not b  is %d", !b);        // logical not

    if (a)

        printf("\n============================\n");

    // Logical operators comes handy:

    if (a && b)
    {
        printf("Both are True\n");
    }
    printf("-------------------------\n");
    // same but long way to write this:

    if (a)
    {
        if (b)
        {
            printf("Both are True");
        }
    }
    return 0;
}