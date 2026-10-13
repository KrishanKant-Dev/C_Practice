#include <stdio.h>

int main()
{
    int marks[5] = {78,45,65,15,99};
    // int* ptr = marks[0]; == int* ptr = marks;
    int* ptr = &marks[0]; // pointer pointng to the first element of the array

    for (int i = 0; i <5 ; i++)
    {
        printf("The value at index %d is: %d\n",i,*ptr);
        ptr++; // jump to next element in array 
    }
    return 0;
    // see how to pass array to a function 
}