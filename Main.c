#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Select an operation (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%lf + %lf = %lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%lf - %lf = %lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf * %lf = %lf\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf / %lf = %lf\n", num1, num2, result);
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }

    return 0;
}