/*
Write a program to encrypt a string by adding 1 to the ASCII value of its characters
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "May Day";
    for(int i = 0 ; i<strlen(str);i++)
    {
        str[i] += 1; // encryption by adding 1 to ascii value
    }
    printf("%s",str);
    return 0;
}