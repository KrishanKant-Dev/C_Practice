#include <stdio.h>

void swap(int* a, int* b);
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1 , y = 5;
    printf("The Orginal value is: x = %d and y = %d",x,y);
    swap(&x,&y);
    printf("\nThe Swapped value is: x = %d and y = %d",x,y);
    return 0;
}