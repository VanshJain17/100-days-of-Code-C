/*
Q89
Count frequency of a given character in a string.

Sample Test Case:
Input:
programming
g
Output:
2
*/

#include <stdio.h>

int main(void) {
    char text[1000], target;
    int i, frequency = 0;

    if (fgets(text, sizeof(text), stdin) == NULL ||
        scanf(" %c", &target) != 1) {
        return 1;
    }

    for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        if (text[i] == target) {
            frequency++;
        }
    }

    printf("%d\n", frequency);
    return 0;
}
