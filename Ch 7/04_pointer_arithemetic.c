#include <stdio.h>

int main()
{
    printf("For Intergers: \n");
    int x = 23;
    int *int_ptr = &x; // we need a pointer variable to store address of variable
    printf("The Memory loacation of x is: %u", int_ptr);

    int_ptr++; // In this architecture integer consumes 4 bytes, so the value of memory location will increment by 4
    printf("\nThe Updated Memory loacation of x is: %u\n", int_ptr);

    ////////////////////////////

    printf("\nFor Character: \n");
    char my_char = 'C';
    char *char_ptr = &my_char;
    printf("The Memory loacation of my_char is: %u", char_ptr);

    char_ptr++; // In this architecture character consumes 1 byte, so the value of memory location will increment by 1
    printf("\nThe Updated Memory loacation of my_char is: %u\n", char_ptr);

    return 0;
}

/*
operation on a pointer: 
1. Addition of number to pointer
2. Subtraction of a number from a pointer
3. Subtraction of one pointer from other pointer 
4. Comparision of two pointer variables
*/