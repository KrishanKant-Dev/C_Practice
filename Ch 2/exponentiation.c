// exponentiation in c

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int x;
    int exp;
  
    printf("============================\n");

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("\nEnter the value of x in exponent: ");
    scanf("%d",&x);

    exp = pow(a,x);

    printf("\nThe Result is: %d",exp);    
  
    printf("\n============================");
    return 0;
}