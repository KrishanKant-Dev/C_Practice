#include <stdio.h>

int main() {
    char first, second;

    printf("Type 'A' and press Enter: ");
    scanf(" %c", &first);   // Space ignores Enter, reads 'A'
    
    printf("Type 'B' and press Enter: ");
    scanf(" %c", &second);  // Space ignores Enter, reads 'B'

    printf("First character: '%c'\n", first);
    printf("Second character: '%c'\n", second);
    
    return 0;
}