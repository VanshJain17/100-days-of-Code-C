/*
Q90
Toggle case of each character in a string.

Sample Test Case:
Input: Hello
Output: hELLO
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
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (char)(text[i] - 'A' + 'a');
        }
    }

    text[i] = '\0';
    printf("%s\n", text);
    return 0;
}
