/*
Q84
Convert a lowercase string to uppercase without using built-in functions.

Sample Test Case:
Input: hello
Output: HELLO
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int i;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (char)(text[i] - 'a' + 'A');
        }
    }

    text[i] = '\0';
    printf("%s\n", text);
    return 0;
}
