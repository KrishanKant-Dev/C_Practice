// Create a string using double quotes and print its content using a loop

#include <stdio.h>

int main()
{
    char str[12] = {'H','e','l','l','o',' ','T','h','e','r','e','\0'}; // if we use double quote null character is always added by default
    char str2[] = "Hello There";

    for (int i = 0; i<12;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n%s",str2);
    return 0;
}