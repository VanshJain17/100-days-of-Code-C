/*
Q64
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long long num;
    int digits[10] = {0};
    int i, maxCount = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    fflush(stdout);
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digits[num % 10]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (digits[i] > maxCount) {
            maxCount = digits[i];
            mostFrequentDigit = i;
        }
    }

    if (maxCount == 0) {
        printf("No digits found in the number\n");
    } else {
        printf("Digit occurring most often: %d\n", mostFrequentDigit);
    }

    return 0;
}
