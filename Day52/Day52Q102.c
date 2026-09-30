/*
Q102
In a sorted array, print the index of the smallest value greater than or
equal to x. Print -1 if none exists; for duplicates, return the first index.

Sample: arr = [1,2,8,10,11,12,19], x = 5
Output: 2

Input format used: n, n sorted integers, then x.
*/

#include <stdio.h>

int main(void) {
    int values[1000], n, target, low = 0, high, answer = -1, middle, i;

    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    high = n - 1;
    while (low <= high) {
        middle = low + (high - low) / 2;
        if (values[middle] >= target) {
            answer = middle;
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }
    printf("%d\n", answer);
    return 0;
}
