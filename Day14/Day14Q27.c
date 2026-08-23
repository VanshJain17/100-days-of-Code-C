/*
Q27
Write a program to print the sum of the first n odd numbers.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0, odd = 1;

    printf("Enter value of n: ");
    fflush(stdout);
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
