// Write a program to determine whether a character entered by the user is lowercase or not
// Ascii Values

#include <stdio.h>

int main()
{
    char character;
    int ascii;

    printf("Enter The Value of Character: ");
    scanf("%c", &character);

    ascii = ("%d", character);
    if (ascii >= 97 && ascii <= 122)
    {
        printf("%c is Lower Case", character);
    }
    else
    {
        printf("%c isn't Lower Case", character);
    }
    return 0;
}