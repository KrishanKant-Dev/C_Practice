#include <stdio.h>

int main()
{
    int num1, num2;

    printf("============================\n");
    printf("Enter the value of Num1 and Num2: ");
    scanf("%d %d", &num1, &num2);

    num1 >= num2 ? printf("Num1 is Greater") : printf("Num2 is Greater"); // Syntax

    printf("\n============================");
    return 0;
}