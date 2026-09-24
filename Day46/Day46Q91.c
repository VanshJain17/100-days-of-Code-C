/*
Q91
Remove all vowels from a string.

Sample Test Case:
Input: education
Output: dctn
*/

#include <stdio.h>

int main(void) {
    char text[1000], ch;
    int readIndex, writeIndex = 0, isVowel;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (readIndex = 0;
         text[readIndex] != '\0' && text[readIndex] != '\n';
         readIndex++) {
        ch = text[readIndex];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char)(ch - 'A' + 'a');
        }
        isVowel = ch == 'a' || ch == 'e' || ch == 'i' ||
                  ch == 'o' || ch == 'u';
        if (!isVowel) {
            text[writeIndex++] = text[readIndex];
        }
    }

    text[writeIndex] = '\0';
    printf("%s\n", text);
    return 0;
}
