/*
Q101
Take a sorted array (which may contain repeated elements) and a target.
Print the indices of its first and last occurrences, or -1, -1 if absent.

Sample:
nums = [5,7,7,8,8,10], target = 8
Output: 3,4

Input format used: n, n sorted integers, then target.
*/

#include <stdio.h>

int main(void) {
    int values[1000], n, target, i, first = -1, last = -1;

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

    for (i = 0; i < n; i++) {
        if (values[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
