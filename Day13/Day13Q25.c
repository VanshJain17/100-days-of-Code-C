/*
Q25
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>

int main() {
    char op;
    float a, b, result;

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': result = a + b; printf("Result = %.2f\n", result); break;
        case '-': result = a - b; printf("Result = %.2f\n", result); break;
        case '*': result = a * b; printf("Result = %.2f\n", result); break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        case '%':
            printf("Modulus result = %d\n", (int)a % (int)b);
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
