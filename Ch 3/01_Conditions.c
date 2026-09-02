#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your age: ");
    scanf("%d", &age);

    printf("============================");
    if (age > 10)
    {
        printf("\nYour age is Greater than 10");
    }

    if (age % 5 == 0)
    {
        printf("\nYour age is in Multiple of 5");
    }
    printf("\n============================");
    return 0;
}