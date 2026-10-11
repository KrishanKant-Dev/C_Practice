#include <stdio.h>

int main()
{
    int my_arr[] = {12, 23, 3445, 32};   // hard coded
    int meow[23] = {1, 2, 3, 45, 5, 78}; // hard coded

    int adv_arr[5]; // we need to specify the size of array, before taking input
    printf("Enter the elements of array: \n");

    for (int i = 0; i < 5; i++) // user input
    {
        scanf("%d", &adv_arr[i]);
    }

    printf("Result: \n");

    for (int i = 0; i < 5; i++) // printing array using loop
    {
        printf("%d ", adv_arr[i]);
    }
    return 0;
}