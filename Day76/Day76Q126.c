/*
Q126
Ask for a filename, report if it cannot be opened, otherwise display
its contents.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], line[256];
    FILE *file;

    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        return 1;
    }
    filename[strcspn(filename, "\r\n")] = '\0';
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        fputs(line, stdout);
    }
    if (ferror(file)) {
        perror("Could not read file");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) {
        perror("Could not close file");
        return 1;
    }
    return 0;
}
