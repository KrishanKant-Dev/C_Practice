/*
Write a program containing a function which reverses the array passed to it
*/

#include <stdio.h>

void rev_arr(int* ptr);
void rev_arr(int* ptr)
{
    for (int i = 0; i < 5; i ++)
    {
        printf("%d ",*ptr);
        ptr--;
    }
}

int main()
{
    int arr[5];
    printf("Enter the elemets in the array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int* ptr = &arr[4];
    rev_arr(ptr);
    return 0;
}