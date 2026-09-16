/*
Q75
Add two matrices.

Sample Test Case:
Input:
2 2
1 2
3 4
2 2
5 6
7 8
Output:
6 8
10 12
*/

#include <stdio.h>

int main(void) {
    int first[10][10], second[10][10], rows, cols;
    int secondRows, secondCols, i, j;

    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &first[i][j]) != 1) {
                return 1;
            }
        }
    }

    if (scanf("%d %d", &secondRows, &secondCols) != 2 ||
        secondRows != rows || secondCols != cols) {
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &second[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", first[i][j] + second[i][j]);
        }
        printf("\n");
    }

    return 0;
}
