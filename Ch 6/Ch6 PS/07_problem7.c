/*
Try problem 3 using call by value and verify that it does not change the value of the
variable
*/

#include <stdio.h>

void change_val(int i);
void change_val(int i)
{
    i *= 10;
}

int main()
{
    int i;
    printf("Enter the Value of i: ");
    scanf("%d", &i);

    change_val(i);
    printf("The changed the value of i is: %d", i);

    return 0;
}