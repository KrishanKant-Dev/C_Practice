/*
Write your own version of strlen() function from <string.h>
*/

#include <stdio.h>

void strlength();
void strlength()
{
    int len = 0;
    char str[100];
    int i = 0;
    printf("Enter the String:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        len += 1;
        i++;
    }
    printf("The length of entered string is: %d", len - 1);
}

int main()
{
    strlength();
    return 0;
}