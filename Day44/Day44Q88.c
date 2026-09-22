/*
Q88
Replace spaces with hyphens in a string.

Sample Test Case:
Input: hello world
Output: hello-world
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int i;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] == ' ') {
            text[i] = '-';
        }
    }

    text[i] = '\0';
    printf("%s\n", text);
    return 0;
}
