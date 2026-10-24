#include <stdio.h>

int main() {
    char first, second;

    printf("Type 'A' and press Enter: ");
    scanf("%c ", &first);   // Reads 'A', then waits for a non-space character!
    
    // The program will not reach this line until you type 'B' and press Enter.
    printf("First character: '%c'\n", first);
    
    printf("Type 'B' and press Enter: ");
    scanf("%c", &second); 

    printf("Second character: '%c'\n", second);
    
    return 0;
}