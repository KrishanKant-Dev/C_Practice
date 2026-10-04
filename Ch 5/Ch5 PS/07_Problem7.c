/* Write a program using function to print the following pattern (first n lines):

*
***
*****

*/

#include <stdio.h>

int main()
{
    int num, i, j;
    printf("Enter the value of a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}