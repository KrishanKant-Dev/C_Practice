// Program shows contiguous memory locations in arrray 

#include <stdio.h>

int main()
{
    int adv_arr[5];

    printf("Enter the Elements of the Array: \n");

    for (int i = 0; i < 5; i++) // user input
    {
        scanf("%d", &adv_arr[i]);
    }

    printf("Result: \n");

    for (int i = 0; i < 5; i++) // printing array using loop
    {
        printf("%u ", &adv_arr[i]);
    }
    return 0;
}