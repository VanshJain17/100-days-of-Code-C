/*
Q115
Check whether two lowercase strings are anagrams.

Sample: s = "anagram", t = "nagaram"
Output: Anagram

Enter each string on a separate line.
*/

#include <stdio.h>

int main(void) {
    char first[1000], second[1000];
    int counts[26] = {0}, i, isAnagram = 1;

    if (fgets(first, sizeof(first), stdin) == NULL ||
        fgets(second, sizeof(second), stdin) == NULL) {
        return 1;
    }
    for (i = 0; first[i] != '\0' && first[i] != '\n'; i++) {
        if (first[i] >= 'a' && first[i] <= 'z') {
            counts[first[i] - 'a']++;
        } else {
            isAnagram = 0;
        }
    }
    for (i = 0; second[i] != '\0' && second[i] != '\n'; i++) {
        if (second[i] >= 'a' && second[i] <= 'z') {
            counts[second[i] - 'a']--;
        } else {
            isAnagram = 0;
        }
    }
    for (i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            isAnagram = 0;
        }
    }
    printf("%s\n", isAnagram ? "Anagram" : "Not Anagram");
    return 0;
}
