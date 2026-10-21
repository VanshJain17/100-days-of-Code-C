/*
Q123
Read sample.txt and count characters, words, and lines. Words are
sequences separated by spaces or newlines.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample.txt", "r");
    int ch, inWord = 0, lastCharacter = '\n';
    long characters = 0, words = 0, lines = 0;

    if (file == NULL) {
        perror("Could not open sample.txt");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            words++;
            inWord = 1;
        }
        lastCharacter = ch;
    }
    if (ferror(file)) {
        perror("Could not read sample.txt");
        fclose(file);
        return 1;
    }
    if (characters > 0 && lastCharacter != '\n') {
        lines++;
    }
    if (fclose(file) != 0) {
        perror("Could not close sample.txt");
        return 1;
    }

    printf("Characters: %ld\nWords: %ld\nLines: %ld\n",
           characters, words, lines);
    return 0;
}
