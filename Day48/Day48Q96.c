/*
Q96
Reverse each word in a sentence without changing the word order.

Sample Test Case:
Input: I love coding
Output: I evol gnidoc
*/

#include <stdio.h>

int main(void) {
    char sentence[1000], temp;
    int i, start, end;

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    for (i = 0; sentence[i] != '\0' && sentence[i] != '\n';) {
        while (sentence[i] == ' ' || sentence[i] == '\t') {
            i++;
        }
        start = i;
        while (sentence[i] != '\0' && sentence[i] != '\n' &&
               sentence[i] != ' ' && sentence[i] != '\t') {
            i++;
        }
        end = i - 1;
        while (start < end) {
            temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
    }

    printf("%s", sentence);
    return 0;
}
