#include <stdio.h>

int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;

    // the value of i is 6 for all printf:

    printf("The value of i is: %d\n",i);
    printf("The value of i is: %d\n",*j);
    printf("The value of i is: %d\n",**k);
    printf("The value of i is: %d\n",*&i);
    printf("The value of i is: %d\n",**(&j));
    return 0;
}