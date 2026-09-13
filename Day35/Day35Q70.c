/*
Q70
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int arr[10], n, k, i, rotated[10];

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right: ");
    fflush(stdout);
    scanf("%d", &k);

    k %= n;

    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Rotated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
