#include <stdio.h>

void display(int n);

int main()
{
    int i;
    for (i = 10; i > 0; i--)
        display(i);
    return 0;
}

void display(int n)
{
    printf("T minus %d and counting\n", n);
}