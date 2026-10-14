/*
Repeat problem 7 for a custom input given by the user
*/

#include <stdio.h>

void table_printer(int num);
void table_printer(int num)
{
    int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * table[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int num1, num2, num3;
    printf("Enter the value of First Number: ");
    scanf("%d", &num1);
    printf("Enter the value of Second Number: ");
    scanf("%d", &num2);
    printf("Enter the value of Third Number: ");
    scanf("%d", &num3);
    
    printf("\nThe table of %d:\n",num1);
    table_printer(num1);
    printf("\n\nThe table of %d:\n",num2);
    table_printer(num2);
    printf("\n\nThe table of %d:\n",num3);
    table_printer(num3);

    return 0;
}