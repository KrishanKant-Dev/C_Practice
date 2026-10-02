// To Print the Natural numbers in the Reverse

#include <stdio.h>

int main()
{
    int num, i; 

    printf("Enter the Value of Number: ");
    scanf("%d",&num);

    for (i=num;i;i--)
    printf("%d\n",i);
    
    return 0;
}