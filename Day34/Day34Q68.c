/*
Q68
Delete an element from an array.
*/
#include <stdio.h>
int main() {
    int arr[10], n, i, pos;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0-based index) of element to delete: ");
    fflush(stdout);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 1;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("New array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}