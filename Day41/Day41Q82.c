/*
Q82
Print each character of a string on a new line.

Sample Test Case:
Input:
Hi
Output:
H
i
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int i = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    while (text[i] != '\0' && text[i] != '\n') {
        printf("%c\n", text[i]);
        i++;
    }

    return 0;
}
