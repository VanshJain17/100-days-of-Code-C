/*
Q79
Perform diagonal traversal of a matrix.

Sample Test Case:
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main(void) {
    int matrix[100][100], rows, cols, i, j, diagonal, first = 1;
    int lastDiagonal;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 100 || cols < 1 || cols > 100) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    lastDiagonal = rows + cols - 2;
    for (diagonal = 0; diagonal <= lastDiagonal; diagonal++) {
        int startRow = diagonal < rows ? diagonal : rows - 1;
        int endRow = diagonal >= cols ? diagonal - cols + 1 : 0;

        if (diagonal % 2 == 0) {
            for (i = startRow; i >= endRow; i--) {
                j = diagonal - i;
                if (!first) {
                    printf(" ");
                }
                printf("%d", matrix[i][j]);
                first = 0;
            }
        } else {
            for (i = endRow; i <= startRow; i++) {
                j = diagonal - i;
                if (!first) {
                    printf(" ");
                }
                printf("%d", matrix[i][j]);
                first = 0;
            }
        }
    }

    printf("\n");
    return 0;
}
