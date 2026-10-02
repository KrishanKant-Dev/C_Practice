#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the Value of Marks Obtained: ");
    scanf("%d",&marks);

    if (marks >90)
    printf("You have got A grade");

    else if (marks >80)
    printf("You have got B grade");

    else if (marks >70)
    printf("You have got C grade");

    else if (marks >60)
    printf("You have got D grade");

    else if (marks >50)
    printf("You have got E grade");

    else
    printf("You are Fail");

    return 0;
}