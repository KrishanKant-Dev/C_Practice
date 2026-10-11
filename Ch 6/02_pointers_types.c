#include <stdio.h>

int main()
{
    int i = 23;
    int* j = &i;
    int z = *(&i);

    float p = 34.2;
    float* q = &p;
    // float *r = *&p;

    printf("%u\n",*j);
    printf("%d\n\n",z);

    printf("%u\n",*q);

    return 0;
}