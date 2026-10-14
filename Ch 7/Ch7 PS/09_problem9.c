/*
Create a three-dimensional array and print the addresses of its elements in increasing
order
*/

#include <stdio.h>

int main()
{
    int arr_3d[3][3][3]; // 27 elements

    for (int i = 0; i < 3; i++) // without elements ke bhi address print ho jata hai
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Address of arr_3d[%d][%d][%d] is: %u\n", i, j, k, &arr_3d[i][j][k]);
            }
        }
    }
    return 0;
}