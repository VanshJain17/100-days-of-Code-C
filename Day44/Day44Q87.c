/*
Q87
Count spaces, digits, and special characters in a string.

Sample Test Case:
Input:
a b1&2
Output:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>

int main(void) {
    char text[1000], ch;
    int i, spaces = 0, digits = 0, special = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        ch = text[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'A' && ch <= 'Z') ||
                     (ch >= 'a' && ch <= 'z'))) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
