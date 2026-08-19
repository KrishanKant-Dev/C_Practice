/*

Write a C program to calculate the area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user

*/

#include <stdio.h>

int main()
{
    int length = 12;
    int breadth = 23;
    int area = length*breadth;
    
    printf("===============\n");
    printf("The Area of The Rectangle is: %d unit sq\n",area);
    printf("===============");
    return 0;
}

