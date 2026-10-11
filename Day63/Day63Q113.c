/*
Q113
Find and print the kth smallest element in an integer array.

Sample: [10,5,4,3,48,6,2,33,53,10], k = 4
Output: 5

Input format used: n, n integers, then k.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, k, i, j, key;

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

    for (i = 1; i < n; i++) {
        key = values[i];
        j = i - 1;
        while (j >= 0 && values[j] > key) {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = key;
    }
    printf("%d\n", values[k - 1]);
    return 0;
}
