/*
Q118
Given n values from 0 through n with one missing, print the missing value.

Sample: nums = [0,3,2,4]
Output: 1

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int n, i, value;
    long long missing;

    if (scanf("%d", &n) != 1 || n < 0 || n > 100000) {
        return 1;
    }
    missing = (long long)n * (n + 1) / 2;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1) {
            return 1;
        }
        missing -= value;
    }
    printf("%lld\n", missing);
    return 0;
}
