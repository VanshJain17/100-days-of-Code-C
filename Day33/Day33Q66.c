/*
Q66
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int arr[10], n, i, key, pos;

    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    fflush(stdout);
    scanf("%d", &key);

    pos = n;
    while (pos > 0 && arr[pos - 1] > key) {
        arr[pos] = arr[pos - 1];
        pos--;
    }

    arr[pos] = key;
    n++;

    printf("New array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
