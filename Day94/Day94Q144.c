/*
Q144
Write a function that accepts a Student structure as a parameter and
prints its members.

Sample: Neha 104 92
Output: Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[100];
    int rollNo;
    int marks;
};

static void printStudent(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name, student.rollNo, student.marks);
}

int main(void) {
    struct Student student;

    if (scanf("%99s %d %d", student.name,
              &student.rollNo, &student.marks) != 3) {
        return 1;
    }
    printStudent(student);
    return 0;
}
