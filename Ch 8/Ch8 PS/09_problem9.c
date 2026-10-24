/*
Write a program to check whether a given character is present in a string or not
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "A quick brown fox jumps over the dog", alphabet;
    int count = 0;

    printf("Enter the Character: ");
    scanf("%c", &alphabet);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == alphabet)
        {
            count = 1;
            break;
        }
    }
    if (count)
    {
        printf("\n%c is present", alphabet);
    }
    else
    {
        printf("\n%c isn't present", alphabet);
    }
    return 0;
}