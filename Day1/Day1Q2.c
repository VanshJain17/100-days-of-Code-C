/*
Q2
Write a program to input two numbers and display their sum, difference, product, and quotient.
Division by zero should be handled carefully.
*/

#include <stdio.h>

int main() {
    int a, b;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    }

    return 0;
}

