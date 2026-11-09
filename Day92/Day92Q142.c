/*
Q142
Store details of 5 students in an array of structures and print all.

Input format: five lines, each containing name, roll number, and marks.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int rollNo;
    int marks;
};

int main(void) {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        if (scanf("%99s %d %d", students[i].name,
                  &students[i].rollNo, &students[i].marks) != 3) {
            return 1;
        }
    }
    for (i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].rollNo, students[i].marks);
    }
    return 0;
}
