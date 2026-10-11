// Subtraction of number from a pointer

#include <stdio.h>

int main()
{
    float val = 99.78;
    float* float_ptr = &val;
    printf("Initial Storage location of Val is: %u",float_ptr);

    float_ptr -= 3; // decreases by 3*3 = 9 ; I can also do: float_ptr--
    printf("\nUpdated Storage location of Val is: %u",float_ptr);
    
    return 0;
}