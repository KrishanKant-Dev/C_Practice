/*
Write a program to count the occurrence of a given character in a string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "The quick brown fox jumps over the very lazy dogs", alphabet;
    int count = 0;

    printf("Enter the Character: ");
    scanf("%c", &alphabet);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == alphabet)
        {
            count++;
        }
    }

    printf("\n%c occurs %d times", alphabet, count);

    return 0;
}