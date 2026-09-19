/*
Q81
Count characters in a string without using built-in length functions.

Sample Test Cases:
Input: Hello
Output: 5

Input: [one space]
Output: 1
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int length = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    printf("%d\n", length);
    return 0;
}
