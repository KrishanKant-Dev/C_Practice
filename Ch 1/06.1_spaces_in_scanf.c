#include <stdio.h>

int main() {
    char first, second;

    printf("Type 'A' and press Enter: ");
    scanf("%c", &first);   // Reads 'A'
    scanf("%c", &second);  // Immediately reads the Enter key!

    printf("First character: '%c'\n", first);
    printf("Second character: '%c'\n", second); // Prints an empty line (the Enter key)
    
    return 0;
}