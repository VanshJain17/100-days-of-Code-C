/*
Q111
Print the first negative integer in each window of size k, or 0 if
the window has no negative number.

Sample: [-8,2,3,-6,10], k = 2
Output: -8 0 -6 -6

Input format used: n, n array values, then k.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, k, i, j, firstNegative;

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
        firstNegative = 0;
        for (j = i; j < i + k; j++) {
            if (values[j] < 0) {
                firstNegative = values[j];
                break;
            }
        }
        printf("%s%d", i == 0 ? "" : " ", firstNegative);
    }
    printf("\n");
    return 0;
}
