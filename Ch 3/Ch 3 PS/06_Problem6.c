// Write a program to find greatest of four numbers entered by the user

#include <stdio.h>

int main()
{
    int num1,num2,num3,num4;
    
    printf("Enter The Value of Four Numbers To Compare: ");
    scanf("%d\n %d\n %d\n %d",&num1,&num2,&num3,&num4);

    if (num1>=num2 && num1>=num3 && num1>=num4)
    printf("Num1: %d is Greatest",num1);

    else if (num2>=num1 && num2>=num3 && num2>=num4)
    printf("Num2: %d is Greatest",num2);

    else if (num3>=num1 && num3>=num2 && num3>=num4)
    printf("Num3: %d is Greatest",num3);

    else
    printf("Num4: %d is Greatest",num4);

    return 0;
}