/*
Q116
Find two distinct indices whose values sum to target. Print -1 -1 if none.

Sample: nums = [2,7,11,15], target = 9
Output: 0 1

Input format used: n, n positive integers, then target.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, target, i, j;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
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
        for (j = i + 1; j < n; j++) {
            if (values[i] + values[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
