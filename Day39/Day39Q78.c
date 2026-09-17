/*
Q78
Find the sum of main diagonal elements for a square matrix.

Sample Test Case:
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
15
*/

#include <stdio.h>

int main(void) {
    int matrix[10][10], rows, cols, i, j;
    int diagonalSum = 0;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10 ||
        rows != cols) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
        diagonalSum += matrix[i][i];
    }

    printf("%d\n", diagonalSum);
    return 0;
}
