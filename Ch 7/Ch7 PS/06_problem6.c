/*
Write a program containing functions which counts the number of positive integers in
an array
*/

#include <stdio.h>

int positive_int_count(int* ptr);
int positive_int_count(int* ptr)
{
    int count = 0;
    for(int i = 0; i < 10 ; i++)
    {
        if(*ptr>0)
        {
            count += 1;
        }
        ptr++;
    }
    return count;
}

int main()
{
    int arr[10];
    int* ptr = &arr[0];

    printf("Enter the Elements in the array: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThere are %d Positive integers in the array",positive_int_count(ptr));
    return 0;
}