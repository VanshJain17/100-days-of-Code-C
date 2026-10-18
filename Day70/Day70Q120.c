/*
Q120
Take a string input and change it to sentence case.

Sample:
str = I am trying to build logic.
Output: I Am Trying To Build Logic.

The sample uses title-style capitalization for each word.
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int i, capitalizeNext = 1;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] == ' ' || text[i] == '\t') {
            capitalizeNext = 1;
        } else {
            if (capitalizeNext && text[i] >= 'a' && text[i] <= 'z') {
                text[i] = (char)(text[i] - 'a' + 'A');
            } else if (!capitalizeNext && text[i] >= 'A' && text[i] <= 'Z') {
                text[i] = (char)(text[i] - 'A' + 'a');
            }
            capitalizeNext = 0;
        }
    }
    text[i] = '\0';
    printf("%s\n", text);
    return 0;
}
