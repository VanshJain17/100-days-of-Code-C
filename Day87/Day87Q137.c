/*
Q137
Create an enum for user roles (ADMIN, USER, GUEST) and display a message.

Sample input: GUEST
Sample output: Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char input[20];
    enum Role role;

    if (scanf("%19s", input) != 1) {
        return 1;
    }
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        fprintf(stderr, "Unknown role.\n");
        return 1;
    }

    switch (role) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER: printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }
    return 0;
}
