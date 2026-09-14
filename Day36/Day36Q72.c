/*
Q72
Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    fflush(stdout);
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    fflush(stdout);
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all matrix elements is: %d\n", sum);
    return 0;
}
