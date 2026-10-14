/*
Write a program to create an array of 10 integers and store multiplication table of 5 in
it
*/
#include <stdio.h>

int main()
{
    int table_of_five[] = {5,10,15,20,25,30,35,40,45,50};
    // we can assign elements to array using loop, refer problem 4
    for(int i = 0 ; i <10 ; i++)
    {
        printf("%d ",table_of_five[i]);
    }
    
    return 0;
}