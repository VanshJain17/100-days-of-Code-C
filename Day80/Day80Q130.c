/*
Q130
Store student records (name, roll number, marks) in students.txt using
fprintf(), then read them using fscanf() and display each record.

Input format: record count, followed by each name, roll number, and marks.
*/

#include <stdio.h>

int main(void) {
    struct Student {
        char name[100];
        int roll;
        int marks;
    } students[100];
    FILE *file;
    int count, i;

    if (scanf("%d", &count) != 1 || count < 1 || count > 100) {
        return 1;
    }
    for (i = 0; i < count; i++) {
        if (scanf("%99s %d %d", students[i].name,
                  &students[i].roll, &students[i].marks) != 3) {
            return 1;
        }
    }

    file = fopen("students.txt", "w+");
    if (file == NULL) {
        perror("Could not open students.txt");
        return 1;
    }
    for (i = 0; i < count; i++) {
        if (fprintf(file, "%s %d %d\n", students[i].name,
                    students[i].roll, students[i].marks) < 0) {
            perror("Could not write students.txt");
            fclose(file);
            return 1;
        }
    }
    rewind(file);
    for (i = 0; i < count; i++) {
        if (fscanf(file, "%99s %d %d", students[i].name,
                   &students[i].roll, &students[i].marks) != 3) {
            fprintf(stderr, "Could not read student record %d.\n", i + 1);
            fclose(file);
            return 1;
        }
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].roll, students[i].marks);
    }
    if (fclose(file) != 0) {
        perror("Could not close students.txt");
        return 1;
    }
    return 0;
}
