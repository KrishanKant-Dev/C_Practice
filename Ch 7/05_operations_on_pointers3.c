// Subtraction of one pointer from other // View this Later

#include <stdio.h>

int main()
{
    int x = 23;
    int y = 45;

    int* p = &x;
    int* q = &y;

    printf("Memory location of x = %u",p);
    printf("\nMemory location of y = %u",q);
    *p -= *q;
    printf("\nMemory location after Subtraction = %u",p);
    return 0;
}