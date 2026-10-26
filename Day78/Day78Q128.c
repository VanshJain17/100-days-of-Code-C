/*
Q128
Read text.txt and count vowels and consonants, ignoring digits and
special characters.
*/

#include <stdio.h>

int main(void) {
    FILE *file = fopen("text.txt", "r");
    int ch, vowels = 0, consonants = 0;

    if (file == NULL) {
        perror("Could not open text.txt");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
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
    if (ferror(file)) {
        perror("Could not read text.txt");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) {
        perror("Could not close text.txt");
        return 1;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
