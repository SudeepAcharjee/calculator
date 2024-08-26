#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f", num1, num2, result);
            break;
        default:
            printf("Invalid operators");
    }

    return 0;
}

