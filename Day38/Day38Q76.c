/*
Q76
Check if a matrix is symmetric.

Sample Test Cases:
Input:
2 2
1 2
2 1
Output:
True

Input:
2 2
1 0
2 1
Output:
False
*/

#include <stdio.h>

int main(void) {
    int matrix[10][10], rows, cols, i, j;
    int isSymmetric = 1;

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

    if (rows != cols) {
        isSymmetric = 0;
    } else {
        for (i = 0; i < rows; i++) {
            for (j = i + 1; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                }
            }
        }
    }

    printf("%s\n", isSymmetric ? "True" : "False");
    return 0;
}
