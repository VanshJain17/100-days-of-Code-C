/*
Q143
Find and print the student with the highest marks.

Sample:
3
Ravi 101 95
Sita 102 85
Aman 103 88
Output: Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[100];
    int rollNo;
    int marks;
};

int main(void) {
    struct Student student, topper;
    int count, i;

    if (scanf("%d", &count) != 1 || count < 1 || count > 1000) {
        return 1;
    }
    for (i = 0; i < count; i++) {
        if (scanf("%99s %d %d", student.name,
                  &student.rollNo, &student.marks) != 3) {
            return 1;
        }
        if (i == 0 || student.marks > topper.marks) {
            topper = student;
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);
    return 0;
}
