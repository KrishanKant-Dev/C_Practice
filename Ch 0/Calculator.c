#include <stdio.h>

int main()
{
    float firstNumber, secondNumber, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &firstNumber);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &secondNumber);

    switch (operator)
    {
        case '+':
            result = firstNumber + secondNumber;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = firstNumber - secondNumber;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = firstNumber * secondNumber;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (secondNumber != 0)
            {
                result = firstNumber / secondNumber;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}