/*
Q104
Find the pivot integer x in 1..n such that 1+...+x equals x+...+n.
Print -1 if no such integer exists.

Sample: n = 8
Output: 6
*/

#include <stdio.h>

int main(void) {
    long long n, low = 1, high, x, leftSum, rightSum;

    if (scanf("%lld", &n) != 1 || n < 1) {
        return 1;
    }
    high = n;

    while (low <= high) {
        x = low + (high - low) / 2;
        leftSum = x * (x + 1) / 2;
        rightSum = n * (n + 1) / 2 - (x - 1) * x / 2;
        if (leftSum == rightSum) {
            printf("%lld\n", x);
            return 0;
        }
        if (leftSum < rightSum) {
            low = x + 1;
        } else {
            high = x - 1;
        }
    }
    printf("-1\n");
    return 0;
}
