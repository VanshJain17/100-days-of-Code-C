/*
Q33
Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0, count = 0;

    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        num = num / 10;
        count++;
    }

    num = original;

    while (num > 0) {
        remainder = num % 10;
        int power = 1, i;
        for (i = 1; i <= count; i++) {
            power = power * remainder;
        }
        sum = sum + power;
        num = num / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
