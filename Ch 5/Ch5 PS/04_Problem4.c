// Write a program using recursion to calculate nth element of Fibonacci series

#include <stdio.h>

int fibonacci_element(int n);

int fibonacci_element(int n)
{
    if (n==1 || n ==2) // base case 
    return n-1;
    return fibonacci_element(n-1) + fibonacci_element(n-2); // function calling a function
}

int main()
{
    int element;
    printf("Enter the Position of Element you Want: ");
    scanf("%d",&element);

    printf("The Element at %d posotion is: %d",element,fibonacci_element(element));
    
    return 0;
}