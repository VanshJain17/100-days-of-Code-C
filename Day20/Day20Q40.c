/*
Q40
Write a program to find the 1's complement of a binary number and print it.
*/

#include <stdio.h>

int main() {
    int binary, bit;

    printf("Enter a binary number: ");
    fflush(stdout);
    scanf("%d", &binary);

    int complement = 0, place = 1;

    while (binary > 0) {
        bit = binary % 10;
        if (bit == 0) {
            bit = 1;
        } else {
            bit = 0;
        }
        complement = complement + bit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement = %d\n", complement);
    return 0;
}
