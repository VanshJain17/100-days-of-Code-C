/*
Q57
Find the sum of array elements.
*/

#include <stdio.h>

int main() {
    int arr[10], n, i, sum = 0;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);
    return 0;
}
