#include <stdio.h>

int main()
{
    char str[100]; // specifying size is mandotory if we are taking an input
    printf("Enter the String: ");
    scanf("%s",&str); // %str , scanf cant be used to take input a full sentence containing spaces 

    printf("%s",str);
    return 0;
}