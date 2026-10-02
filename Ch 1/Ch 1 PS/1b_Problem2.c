// Write a C program to calculate the area of a rectangle Using inputs supplied by the user

#include <stdio.h>

int main()
{
    int length;
    int breadth;

    printf("Enter the Value of Length: ");
    scanf("%d",&length);
    printf("Enter the Value of Breadth: ");
    scanf("%d",&breadth);

    int area = length*breadth;

    printf("\nThe Area is: %d unit sq",area);

    return 0;
}
