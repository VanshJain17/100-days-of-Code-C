/*
Q100
Print all sub-strings of a string.

Sample Test Case:
Input: abc
Output: a,ab,abc,b,bc,c
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int length = 0, start, end, first = 1;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    for (start = 0; start < length; start++) {
        for (end = start + 1; end <= length; end++) {
            if (!first) {
                printf(",");
            }
            printf("%.*s", end - start, text + start);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
