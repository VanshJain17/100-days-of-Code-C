/*
Q36
Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>

int main() {
    int a, b, temp, hcf;

    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    printf("HCF of the two numbers = %d\n", hcf);
    return 0;
}
