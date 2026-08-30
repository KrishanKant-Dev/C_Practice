// Write a program to check whether a number is divisible by 97 or not

#include <stdio.h>

int main()
{
    int num;

    printf("============================\n");
    
    printf("Enter the Value of a number: ");
    scanf("%d",&num);

    printf("%d %% 97 is: %d", num, num % 97);
    printf("\n============================");
    return 0;
}