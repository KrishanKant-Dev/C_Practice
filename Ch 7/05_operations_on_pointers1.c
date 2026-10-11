// Addition of the Number to the Pointer

#include <stdio.h>

int main()
{
    float val = 34.56;
    float* float_ptr = &val;
    printf("Initial Storage location of Val is: %u",float_ptr);

    float_ptr += 4; // increases by 4*4 = 16 ; I can also do: float_ptr++
    printf("\nUpdated Storage location of Val is: %u",float_ptr);
    
    return 0;
}