/*
Q110
Print the maximum in each contiguous subarray of size k.

Sample: [1,2,3,1,4,5,2,3,6], k = 3
Output: 3 3 4 5 5 5 6

Input format used: n, n array values, then k.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, k, i, j, maximum;

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

    for (i = 0; i <= n - k; i++) {
        maximum = values[i];
        for (j = i + 1; j < i + k; j++) {
            if (values[j] > maximum) {
                maximum = values[j];
            }
        }
        printf("%s%d", i == 0 ? "" : " ", maximum);
    }
    printf("\n");
    return 0;
}
