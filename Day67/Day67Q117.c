/*
Q117
Merge two sorted arrays so the result remains sorted.

Sample: [2,7,11,15] and [4,8,10]
Output: 2 4 7 8 10 11 15

Input format used: first length and values, then second length and values.
*/

#include <stdio.h>

int main(void) {
    int first[10000], second[10000], n, m, i = 0, j = 0, firstValue = 1;

    if (scanf("%d", &n) != 1 || n < 0 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &first[i]) != 1) {
            return 1;
        }
    }
    if (scanf("%d", &m) != 1 || m < 0 || m > 10000) {
        return 1;
    }
    for (i = 0; i < m; i++) {
        if (scanf("%d", &second[i]) != 1) {
            return 1;
        }
    }

    i = 0;
    while (i < n || j < m) {
        int value;
        if (j >= m || (i < n && first[i] <= second[j])) {
            value = first[i++];
        } else {
            value = second[j++];
        }
        printf("%s%d", firstValue ? "" : " ", value);
        firstValue = 0;
    }
    printf("\n");
    return 0;
}
