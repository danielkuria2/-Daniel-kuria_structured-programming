#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1, number2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &number1);

    printf("Please choose your operator ( +, -, *, / ): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &number2);

    if (op == '+')
        result = number1 + number2;
    else if (op == '-')
        result = number1 - number2;
    else if (op == '*')
        result = number1 * number2;
    else if (op == '/')
    {
        if (number2 == 0)
        {
            printf("Error: cannot divide by zero\n");
            return 1;
        }
        result = number1 / number2;
    }
    else
    {
        printf("Invalid operator\n");
        return 1;
    }

    printf("Answer = %f\n", result);
    return 0;
}
