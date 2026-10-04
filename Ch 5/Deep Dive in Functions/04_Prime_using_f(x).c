#include <stdio.h>

bool is_prime(int n);

int main()
{
    int n;
    printf("Enter The value of n: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("is prime");
    else
        printf("not prime");
    return 0;
}

bool is_prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
        return true;
    }
}