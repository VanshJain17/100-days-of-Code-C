/*
Q41
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main() {
    int num, first, last, middle, divisor = 1, swapped;

    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    if (num < 10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    while (num / divisor >= 10) {
        divisor = divisor * 10;
    }

    first = num / divisor;
    last = num % 10;
    middle = (num % divisor) / 10;

    swapped = last * divisor + middle * 10 + first;

    printf("Swapped number = %d\n", swapped);
    return 0;
}

