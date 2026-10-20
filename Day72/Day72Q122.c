/*
Q122
Open info.txt and print every line using fgets() until EOF.

Sample file content:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main(void) {
    FILE *file = fopen("info.txt", "r");
    char line[256];

    if (file == NULL) {
        perror("Could not open info.txt");
        return 1;
    }
    while (fgets(line, sizeof(line), file) != NULL) {
        fputs(line, stdout);
    }
    if (ferror(file)) {
        perror("Could not read info.txt");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) {
        perror("Could not close info.txt");
        return 1;
    }
    return 0;
}
