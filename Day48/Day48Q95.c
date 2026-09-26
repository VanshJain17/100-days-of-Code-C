/*
Q95
Check if one string is a rotation of another.

Sample Test Cases:
Input: abcde, deabc
Output: Rotation

Input: abc, acb
Output: Not rotation

Enter each string on a separate line.
*/

#include <stdio.h>

int main(void) {
    char first[1000], second[1000];
    int firstLength = 0, secondLength = 0, offset, i, matches;

    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL) {
        return 1;
    }

    while (first[firstLength] != '\0' && first[firstLength] != '\n') {
        firstLength++;
    }
    while (second[secondLength] != '\0' && second[secondLength] != '\n') {
        secondLength++;
    }

    for (offset = 0; offset < firstLength && firstLength == secondLength; offset++) {
        matches = 1;
        for (i = 0; i < firstLength; i++) {
            if (first[i] != second[(i + offset) % secondLength]) {
                matches = 0;
                break;
            }
        }
        if (matches) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}
