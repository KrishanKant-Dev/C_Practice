#include <stdio.h>

int main()
{
    int marks[5];
    
    /*
    Manual Way:

    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    */

    printf("Enter the marks of 5 students: \n");

    for (int i = 0; i < 5; i++) // for taking input in the array
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) // for printing the elements of the array
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}