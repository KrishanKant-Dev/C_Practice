/*
Write a program containing a function which reverses the array passed to it
*/

// same as changing the position of 2 elements in 2 variable
#include <stdio.h>

void rev_arr(int arr[], int size); // write arr[] , not arr only
void rev_arr(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++) // we are swapping 2 numbers at a time so we need to swap half of the numbers
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("The Swapped Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size_of_arr;
    printf("Enter the Size of Array: ");
    scanf("%d", &size_of_arr);

    int arr[size_of_arr];
    printf("\nEnter the elemets in the array: \n");

    for (int i = 0; i < size_of_arr; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev_arr(arr, size_of_arr);

    return 0;
}