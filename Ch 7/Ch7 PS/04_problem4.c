/*
Repeat problem 3 for a general input provided by the user using scanf
*/

#include <stdio.h>

int main()
{
    int my_arr[10];
    printf("Enter the elements in Array: \n");
    for(int i = 0 ; i <10 ; i++)
    {
        scanf("%d",&my_arr[i]);
    }

    for(int i = 0 ; i <10 ; i++)
    {
        printf("%d ",my_arr[i]);
    }
    
    return 0;
}