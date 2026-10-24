#include <stdio.h>

void strcopy(char copied_str[], char org_str[], int size)
{
    int i;

    // copy until source ends OR destination is full (keep 1 byte for '\0')
    for (i = 0; i < size - 1 && org_str[i] != '\0'; i++) 
    {
        copied_str[i] = org_str[i];
    }

    // always terminate
    copied_str[i] = '\0';
}

int main()
{
    char org_str[] = "Hello There Everyone";
    char copied_str[50];

    strcopy(copied_str, org_str, sizeof(copied_str));  // pass destination size
    printf("The Copied String is: %s\n", copied_str);

    return 0;
}