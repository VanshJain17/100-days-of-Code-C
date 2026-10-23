/*
Q125
Open an existing file in append mode and append a new line of text.

Enter the filename and text to append on separate lines.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], text[1000];
    FILE *file;
    long fileLength;
    int lastCharacter;

    if (fgets(filename, sizeof(filename), stdin) == NULL ||
        fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    filename[strcspn(filename, "\r\n")] = '\0';
    text[strcspn(text, "\r\n")] = '\0';

    file = fopen(filename, "a+");
    if (file == NULL) {
        perror("Could not open file for appending");
        return 1;
    }
    if (fseek(file, 0, SEEK_END) != 0) {
        perror("Could not seek to end of file");
        fclose(file);
        return 1;
    }
    fileLength = ftell(file);
    if (fileLength < 0) {
        perror("Could not determine file size");
        fclose(file);
        return 1;
    }
    if (fileLength > 0) {
        if (fseek(file, -1, SEEK_END) != 0) {
            perror("Could not inspect end of file");
            fclose(file);
            return 1;
        }
        lastCharacter = fgetc(file);
        if (lastCharacter == EOF) {
            perror("Could not read end of file");
            fclose(file);
            return 1;
        }
        if (fseek(file, 0, SEEK_END) != 0) {
            perror("Could not return to end of file");
            fclose(file);
            return 1;
        }
        if (lastCharacter != '\n' && fputc('\n', file) == EOF) {
            perror("Could not add line break");
            fclose(file);
            return 1;
        }
    }
    if (fprintf(file, "%s\n", text) < 0) {
        perror("Could not append text");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) {
        perror("Could not close file");
        return 1;
    }
    printf("File updated successfully with appended text.\n");
    return 0;
}
