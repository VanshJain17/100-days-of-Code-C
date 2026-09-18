/*
Q80
Multiply two matrices.

Sample Test Case:
Input:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output:
58 64
139 154
*/

#include <stdio.h>

int main(void) {
    int first[10][10], second[10][10];
    int firstRows, firstCols, secondRows, secondCols, i, j, k;
    long long product;

    if (scanf("%d %d", &firstRows, &firstCols) != 2 ||
        firstRows < 1 || firstRows > 10 ||
        firstCols < 1 || firstCols > 10) {
        return 1;
    }

    for (i = 0; i < firstRows; i++) {
        for (j = 0; j < firstCols; j++) {
            if (scanf("%d", &first[i][j]) != 1) {
                return 1;
            }
        }
    }

    if (scanf("%d %d", &secondRows, &secondCols) != 2 ||
        secondRows != firstCols ||
        secondRows > 10 || secondCols < 1 || secondCols > 10) {
        return 1;
    }

    for (i = 0; i < secondRows; i++) {
        for (j = 0; j < secondCols; j++) {
            if (scanf("%d", &second[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (i = 0; i < firstRows; i++) {
        for (j = 0; j < secondCols; j++) {
            product = 0;
            for (k = 0; k < firstCols; k++) {
                product += (long long)first[i][k] * second[k][j];
            }
            if (j > 0) {
                printf(" ");
            }
            printf("%lld", product);
        }
        printf("\n");
    }

    return 0;
}
