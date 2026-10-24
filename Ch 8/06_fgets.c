#include <stdio.h>

int main()
{
    char arr[100];
    fgets(arr,sizeof(arr),stdin); // fgets automatically add \0, automatically adds newline
    printf("%s",arr);
    printf("Moew");
    return 0;
}