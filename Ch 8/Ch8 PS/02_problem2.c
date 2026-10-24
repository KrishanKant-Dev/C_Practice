/*
Write a program to take string as an input from the user using %c and %s and
confirm that the strings are equal
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6], str2[6];
    int comparision_status;

    printf("Enter the String1 to Compare: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &str1[i]);  //  a space before format specifer = ignore spaces
    }
    str1[5] = '\0'; // null character tells to stop here

    printf("Enter the 2nd String for Comparision:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &str2[i]);
    }
    str2[5] = '\0';

    comparision_status = strcmp(str1, str2);
    printf("Comparision Status: %d", comparision_status);
    return 0;
}