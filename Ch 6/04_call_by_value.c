// directly passing arguement to the function 

#include <stdio.h>

int sum(int a, int b);
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum of a and b is: %d",sum(1,6)); // passes copy to function, hence function cant change the value of a variable 
    return 0;
}