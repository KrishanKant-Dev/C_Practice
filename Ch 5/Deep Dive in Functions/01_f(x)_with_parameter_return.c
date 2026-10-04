// call of non void fuction , produces a value that can be stored in a variable, tested or printed out
#include <stdio.h>

double average(double a, double b); // function prototype
// it isn't necessary to put parameter name in prototype as long as their type is in there
// regardless of type of value provided , it will be convered to the type mentioned in the function prototype
// if no prototype default argument promotions take place: float --> double,
// char, short --> int

int main()
{
    double x, y, z; 

    printf("Enter the value of x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    average(2, 4); // calculates result but discards the return value
    printf("The average of %.2lf and %.2lf : %.2lf", x, y, average(x, y));
    printf("\nThe average of %.2lf and %.2lf : %.2lf", y, z, average(y, z));
    printf("\nThe average of %.2lf and %.2lf : %.2lf", x, z, average(x, z));

    return 0;
}

double average(double a, double b) // definition
{
    return (a + b) / 2;
}