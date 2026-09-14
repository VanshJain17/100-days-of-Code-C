/*
Q71
Read and print a matrix.
*/

#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j;

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

    printf("Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
