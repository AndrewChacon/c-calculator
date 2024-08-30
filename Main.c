#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char continueCalculation = 'y'; // Variable to control the loop for continuous operation

    while (continueCalculation == 'y' || continueCalculation == 'Y') {
        printf("Select an operation (+, -, *, /): ");
        scanf(" %c", &operator);  

        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Error: Invalid operator.\n");
            continue; 
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {  
            printf("Error: Invalid input. Please enter numeric values.\n");
            while(getchar() != '\n'); 
            continue;  
        }

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }

        // Ask the user if they want to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &continueCalculation);
    }

    printf("Calculator program terminated.\n");
    return 0;
}