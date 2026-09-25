/*
Q93
Check if two strings are anagrams of each other.

Sample Test Cases:
Input:
listen
silent
Output:
Anagrams

Input:
hello
world
Output:
Not anagrams
*/

#include <stdio.h>

int main(void) {
    char first[1000], second[1000];
    int counts[256] = {0};
    int i, isAnagram = 1;

    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL) {
        return 1;
    }

    for (i = 0; first[i] != '\0' && first[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)first[i];
        if (ch != ' ' && ch != '\t') {
            counts[ch]++;
        }
    }

    for (i = 0; second[i] != '\0' && second[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)second[i];
        if (ch != ' ' && ch != '\t') {
            counts[ch]--;
        }
    }

    for (i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    printf("%s\n", isAnagram ? "Anagrams" : "Not anagrams");
    return 0;
}
