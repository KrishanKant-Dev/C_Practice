#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter The Value Side: ");
    scanf("%d",&num);

    printf("The Area of Square is: %.0f",pow(num,2)); // Pow function returns Float, int doesn't work
    return 0;
}