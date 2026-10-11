#include <stdio.h>

int main()
{
    int marks[100]; // reserves the space of 100 integers

    marks[0] = 89; // manually adding elements to array
    marks[1] = 90;
    marks[2] = 92;

    printf("The values of the marks in Integer array is: %d, %d, %d",marks[0],marks[1],marks[2]);
    return 0;
}
// elements in array is stored in contigious memory locations