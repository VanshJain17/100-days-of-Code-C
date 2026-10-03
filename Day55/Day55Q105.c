/*
Q105
Print the element appearing more than floor(n/2) times, or -1 if none.

Sample: nums = [3,2,3]
Output: 3

Input format used: n followed by n integers.
*/

#include <stdio.h>

int main(void) {
    int values[10000], n, i, candidate = 0, count = 0, occurrences = 0;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
        if (count == 0) {
            candidate = values[i];
            count = 1;
        } else if (values[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    for (i = 0; i < n; i++) {
        if (values[i] == candidate) {
            occurrences++;
        }
    }
    printf("%d\n", occurrences > n / 2 ? candidate : -1);
    return 0;
}
