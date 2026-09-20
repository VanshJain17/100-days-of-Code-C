/*
Q83
Count vowels and consonants in a string.

Sample Test Case:
Input:
hello
Output:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main(void) {
    char text[1000], ch;
    int i, vowels = 0, consonants = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char)(ch - 'A' + 'a');
        }
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
