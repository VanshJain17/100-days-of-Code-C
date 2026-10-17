/*
Q119
Find the single repeated element in an integer array.

Sample: nums = [1,3,3,4]
Output: 3

Input format used: n followed by n integers, each in -100000..100000.
*/

#include <stdio.h>

#define VALUE_OFFSET 100000
#define VALUE_RANGE 200001

int main(void) {
    int seen[VALUE_RANGE] = {0};
    int n, i, value;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1 ||
            value < -VALUE_OFFSET || value > VALUE_OFFSET) {
            return 1;
        }
        if (seen[value + VALUE_OFFSET]) {
            printf("%d\n", value);
            return 0;
        }
        seen[value + VALUE_OFFSET] = 1;
    }
    printf("-1\n");
    return 0;
}
