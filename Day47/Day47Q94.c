/*
Q94
Find the longest word in a sentence.

Sample Test Case:
Input: I love programming
Output: programming
*/

#include <stdio.h>

int main(void) {
    char sentence[1000], longest[1000];
    int i = 0, wordStart, wordLength, longestLength = 0, j;

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    while (sentence[i] != '\0' && sentence[i] != '\n') {
        while (sentence[i] == ' ' || sentence[i] == '\t') {
            i++;
        }

        wordStart = i;
        while (sentence[i] != '\0' && sentence[i] != '\n' &&
               sentence[i] != ' ' && sentence[i] != '\t') {
            i++;
        }
        wordLength = i - wordStart;

        if (wordLength > longestLength) {
            longestLength = wordLength;
            for (j = 0; j < wordLength; j++) {
                longest[j] = sentence[wordStart + j];
            }
            longest[wordLength] = '\0';
        }
    }

    if (longestLength > 0) {
        printf("%s\n", longest);
    }
    return 0;
}
