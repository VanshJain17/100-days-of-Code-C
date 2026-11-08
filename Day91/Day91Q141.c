/*
Q141
Define a Student structure with name, roll_no, and marks. Read and print
one student's data.

Sample: Asha 101 90
Output: Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

struct Student {
    char name[100];
    int rollNo;
    int marks;
};

int main(void) {
    struct Student student;

    if (scanf("%99s %d %d", student.name,
              &student.rollNo, &student.marks) != 3) {
        return 1;
    }
    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name, student.rollNo, student.marks);
    return 0;
}
