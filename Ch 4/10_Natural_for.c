#include <stdio.h>

int main()
{
    int num, count;

    printf("Enter the Value of Number: ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++)
    {
        printf("%d\n", count);
    }
    return 0;
}