/*
Q37
Write a program to find the LCM of two numbers.
*/

#include <stdio.h>

int main() {
    int a, b, x, y, lcm;

    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    lcm = (x * y) / a;

    printf("LCM = %d\n", lcm);
    return 0;
}
