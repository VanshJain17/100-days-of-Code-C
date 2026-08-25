/*
Q31
Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main() {
    int num, temp, rem, binary = 0, place = 1;

    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 2;
        binary = binary + rem * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary of %d = %d\n", num, binary);
    return 0;
}
