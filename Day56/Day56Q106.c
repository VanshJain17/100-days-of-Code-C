/*
Q106
For each array element, print the nearest greater element to its right,
or -1. Use the required brute-force nested-loop approach.

Sample: arr = [1,3,2,4]
Output: 3, 4, 4, -1

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, i, j, nextGreater;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }
    for (i = 0; i < n; i++) {
        nextGreater = -1;
        for (j = i + 1; j < n; j++) {
            if (values[j] > values[i]) {
                nextGreater = values[j];
                break;
            }
        }
        printf("%s%d", i == 0 ? "" : ", ", nextGreater);
    }
    printf("\n");
    return 0;
}
