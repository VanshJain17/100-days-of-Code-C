/*
Q140
Define a struct containing an enum Gender and print the person's gender.

Sample input: Gender=MALE
Sample output: Male
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[32];
    struct Person person;
    char *genderName;
    char *separator;

    if (scanf("%31s", input) != 1) {
        return 1;
    }
    separator = strchr(input, '=');
    genderName = separator == NULL ? input : separator + 1;
    if (strcmp(genderName, "MALE") == 0) {
        person.gender = MALE;
    } else if (strcmp(genderName, "FEMALE") == 0) {
        person.gender = FEMALE;
    } else if (strcmp(genderName, "OTHER") == 0) {
        person.gender = OTHER;
    } else {
        fprintf(stderr, "Unknown gender.\n");
        return 1;
    }

    switch (person.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }
    return 0;
}
