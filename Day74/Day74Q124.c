/*
Q124
Copy all contents from a source file to a destination file using
fgetc() and fputc().

Enter the source filename and destination filename on separate lines.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char sourceName[256], destinationName[256];
    FILE *source, *destination;
    int ch;

    if (fgets(sourceName, sizeof(sourceName), stdin) == NULL ||
        fgets(destinationName, sizeof(destinationName), stdin) == NULL) {
        return 1;
    }
    sourceName[strcspn(sourceName, "\r\n")] = '\0';
    destinationName[strcspn(destinationName, "\r\n")] = '\0';

    source = fopen(sourceName, "rb");
    if (source == NULL) {
        perror("Could not open source file");
        return 1;
    }
    destination = fopen(destinationName, "wb");
    if (destination == NULL) {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror("Could not copy file contents");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }
    if (ferror(source)) {
        perror("Could not read source file");
        fclose(source);
        fclose(destination);
        return 1;
    }
    if (fclose(source) != 0 || fclose(destination) != 0) {
        perror("Could not close copied files");
        return 1;
    }
    printf("File copied successfully to %s\n", destinationName);
    return 0;
}
