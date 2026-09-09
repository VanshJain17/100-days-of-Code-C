/*
Q61
Search for an element in an array using linear search.
*/

#include <stdio.h>

int main() {
    int arr[10], n, i, key, found = 0;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    fflush(stdout);
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
