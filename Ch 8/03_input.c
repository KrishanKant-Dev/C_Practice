#include <stdio.h>

int main()
{
    char str;
    printf("Enter the String: ");
    scanf("%s",&str); // %str , scanf cant be used to take input a full sentence containing spaces 

    printf("%s",str);
    return 0;
}