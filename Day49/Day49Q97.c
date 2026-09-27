/*
Q97
Print the initials of a name.

Sample Test Case:
Input: John Doe
Output: J.D.
*/

#include <stdio.h>

int main(void) {
    char name[200];
    int i, atWordStart = 1;

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ' || name[i] == '\t') {
            atWordStart = 1;
        } else if (atWordStart) {
            printf("%c.", name[i]);
            atWordStart = 0;
        }
    }
    printf("\n");
    return 0;
}
