/*
Q127
Read input.txt, convert lowercase letters to uppercase, and write the
result to output.txt.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    FILE *output;
    int ch;

    if (input == NULL) {
        perror("Could not open input.txt");
        return 1;
    }
    output = fopen("output.txt", "w");
    if (output == NULL) {
        perror("Could not create output.txt");
        fclose(input);
        return 1;
    }
    while ((ch = fgetc(input)) != EOF) {
        if (fputc(toupper((unsigned char)ch), output) == EOF) {
            perror("Could not write output.txt");
            fclose(input);
            fclose(output);
            return 1;
        }
    }
    if (ferror(input)) {
        perror("Could not read input.txt");
        fclose(input);
        fclose(output);
        return 1;
    }
    if (fclose(input) != 0 || fclose(output) != 0) {
        perror("Could not close files");
        return 1;
    }
    return 0;
}
