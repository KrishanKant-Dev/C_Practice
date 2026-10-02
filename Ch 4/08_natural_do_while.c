// Print n natural numbers using do while
#include <stdio.h>

int main()
{
    int num;
    int count = 1;

    printf("Enter the Value of Number: ");
    scanf("%d",&num);

    do
    {
        printf("%d\n",count);
        count++;
    }
    while(count<=num);
    return 0;
}