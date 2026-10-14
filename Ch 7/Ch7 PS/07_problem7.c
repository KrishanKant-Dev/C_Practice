/*
Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
9 respectively
*/

#include <stdio.h>

int main()
{
    int tables[3][10] =
        {
            {2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
            {7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
            {9, 18, 27, 36, 45, 54, 63, 72, 81, 90}};

    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d:\n", 2 + 5 * i - 3 * (i / 2));
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tables[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}