// Type Declaration instruction

#include <stdio.h>

int main()
{
    int a;  // declare the variable
    a = 45; // variable initialization

    int i = 10; // variable declaration and initialization
    int j = i;  // storing i in j
    int p = 3, q = 45, r = 23;

    // Ek baar variable define karne ke baad baar baar us variable ko define nhi karsakte

    // %d, %f, %c are the format specifies for integer, float and char

    printf("The Value of a, i, j, p, q, r is : %d %d %d %d %d %d", a, i, j, p, q, r);

    return 0;
}