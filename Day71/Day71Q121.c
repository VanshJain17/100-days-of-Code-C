/*
Q121
Read a user's name and age, write them to info.txt with fprintf(), and
confirm when the file is saved.

Sample input: Name: Rahul, Age: 23
Output: File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main(void) {
    char name[100];
    int age;
    FILE *file;

    if (scanf(" Name: %99[^,], Age: %d", name, &age) != 2) {
        return 1;
    }

    file = fopen("info.txt", "w");
    if (file == NULL) {
        perror("Could not create info.txt");
        return 1;
    }
    if (fprintf(file, "Name: %s\nAge: %d\n", name, age) < 0 ||
        fclose(file) != 0) {
        perror("Could not write info.txt");
        return 1;
    }
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
