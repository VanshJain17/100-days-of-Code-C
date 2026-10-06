/*
Q108
Print an answer array where each value is the product of every input
element except the one at that index. Do not use division.

Sample: nums = [1,2,3,4]
Output: [24,12,8,6]

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, i;
    long long products[10000], prefix = 1, suffix = 1;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }
    for (i = 0; i < n; i++) {
        products[i] = prefix;
        prefix *= values[i];
    }
    for (i = n - 1; i >= 0; i--) {
        products[i] *= suffix;
        suffix *= values[i];
    }

    printf("[");
    for (i = 0; i < n; i++) {
        printf("%s%lld", i == 0 ? "" : ",", products[i]);
    }
    printf("]\n");
    return 0;
}
