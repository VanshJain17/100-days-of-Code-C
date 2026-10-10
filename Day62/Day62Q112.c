/*
Q112
Find the maximum sum of any contiguous subarray using Kadane's algorithm.

Sample: [2,3,-8,7,-1,2,3]
Output: 11

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int n, i, value;
    long long current, maximum;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) {
        return 1;
    }
    if (scanf("%d", &value) != 1) {
        return 1;
    }
    current = maximum = value;
    for (i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }
        current = current + value > value ? current + value : value;
        if (current > maximum) {
            maximum = current;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
