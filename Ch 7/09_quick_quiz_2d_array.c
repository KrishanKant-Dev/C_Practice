/*
Create a 2d array by taking input from the user. Write a display function to print the content of this 2d array on the screen
*/

#include <stdio.h>

void display(int *a);

int main()
{
    int arr[2][2];
    int *ptr = &arr[0][0];
    printf("Enter the elements in the 2d Array: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    display(ptr);
    return 0;
}

void display(int *a)
{
    printf("\nYour Elements of the array are: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *a);
            a++;
        }
        printf("\n");
    }
}