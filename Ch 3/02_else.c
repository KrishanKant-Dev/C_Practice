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

    else
    {
        printf("Your age is Less than 10");
    }
    printf("\n============================");

    return 0;
}