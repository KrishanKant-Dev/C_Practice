#include <stdio.h>

void my_function(int *a);

void my_function(int *a)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *a);
        a++;
    }
}

int main()
{
    int arr[6] = {12, 23, 34, 45, 56, 23};
    int *ptr = &arr[0];
    printf("The Elements of the arrays are: ");
    my_function(ptr);
    return 0;
}