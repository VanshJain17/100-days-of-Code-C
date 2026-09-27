/*
Q98
Print initials of a name with the surname displayed in full.

Sample Test Case:
Input: John David Doe
Output: J.D. Doe
*/

#include <stdio.h>

int main(void) {
    char name[200];
    int starts[100], ends[100], words = 0, i = 0, j;

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    while (name[i] != '\0' && name[i] != '\n') {
        while (name[i] == ' ' || name[i] == '\t') {
            i++;
        }
        if (name[i] == '\0' || name[i] == '\n') {
            break;
        }
        starts[words] = i;
        while (name[i] != '\0' && name[i] != '\n' &&
               name[i] != ' ' && name[i] != '\t') {
            i++;
        }
        ends[words] = i;
        words++;
    }

    for (j = 0; j < words - 1; j++) {
        printf("%c.", name[starts[j]]);
    }
    if (words > 0) {
        if (words > 1) {
            printf(" ");
        }
        for (i = starts[words - 1]; i < ends[words - 1]; i++) {
            putchar(name[i]);
        }
    }
    printf("\n");
    return 0;
}
