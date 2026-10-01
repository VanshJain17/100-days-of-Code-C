/*
Q103
Print the leftmost pivot index where the sum to its left equals the sum
to its right, or -1 if no such index exists.

Sample: nums = [1,7,3,6,5,6]
Output: 3

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, i, pivot = -1;
    long long total = 0, left = 0;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
        total += values[i];
    }

    for (i = 0; i < n; i++) {
        total -= values[i];
        if (left == total) {
            pivot = i;
            break;
        }
        left += values[i];
    }
    printf("%d\n", pivot);
    return 0;
}
