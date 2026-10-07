/*
Q109
Print the maximum sum among all contiguous subarrays of size k.

Sample: [100,200,300,400], k = 2
Output: 700

Input format used: n, n array values, then k.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, k, i;
    long long windowSum = 0, maximum;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        return 1;
    }

    for (i = 0; i < k; i++) {
        windowSum += values[i];
    }
    maximum = windowSum;
    for (i = k; i < n; i++) {
        windowSum += values[i] - values[i - k];
        if (windowSum > maximum) {
            maximum = windowSum;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
