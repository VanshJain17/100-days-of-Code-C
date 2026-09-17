/*
Q77
Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input:
3 3
1 2 3
4 5 6
7 8 1
Output:
False

Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
True
*/

#include <stdio.h>

int main(void) {
    int matrix[10][10], rows, cols, i, j;
    int diagonalLength, areDistinct = 1;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    diagonalLength = rows < cols ? rows : cols;
    for (i = 0; i < diagonalLength; i++) {
        for (j = i + 1; j < diagonalLength; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                areDistinct = 0;
            }
        }
    }

    printf("%s\n", areDistinct ? "True" : "False");
    return 0;
}
