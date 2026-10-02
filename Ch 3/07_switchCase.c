#include <stdio.h>

int main()
{
    int decision;

    printf("Enter the Action you want to Perform:\n1. Pay \n2.Check Balance \n3.Score\n:");
    scanf("%d",&decision);

    switch(decision)
    {
        case 1:
        printf("\nSelect the amount you want to pay");
        break;
        case 2:
        printf("\nYour Balance is");
        break;
        case 3:
        printf("\nYour Score is Outstanding");
        break;
    }
    return 0;
}