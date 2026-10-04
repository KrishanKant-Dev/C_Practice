// Write a function to calculate force of attraction on a body of mass 'm' exerted by
// earth. Consider g = 9.8m/s²

#include <stdio.h>

float attractive_force(float m);

float attractive_force(float m)
{
    return m*9.8;
}

int main()
{
    float mass;
    printf("Enter the Value of Mass in Kg: ");
    scanf("%f",&mass);

    printf("The Attractive Force on body is: %.2f N", attractive_force(mass));
    return 0;
}