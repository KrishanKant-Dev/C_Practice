/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
the third element where ptr is a pointer pointing to the first element of the array
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int* ptr = &arr[0];
    printf("Enter the Elements of Array: \n");
    for (int i = 0;i <10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPtr is pointing to the 1st Element: %d\n",*ptr);
    printf("Ptr is pointing to the 3rd Element: %d",*ptr+2);
    return 0;
}