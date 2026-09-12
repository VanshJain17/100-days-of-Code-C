/*
Q67
Insert an element in an array at a given position.
*/

#include <stdio.h>

int main() {
    int arr[10], n, i, pos, value;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0-based index): ");
    fflush(stdout);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    fflush(stdout);
    scanf("%d", &value);

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("New array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
