/*
Q114
Find the length of the longest substring without repeating characters.

Sample: s = "abcabcbb"
Output: 3
*/

#include <stdio.h>

int main(void) {
    char text[10000];
    int lastSeen[256], length = 0, start = 0, longest = 0, i;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }
    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }
        lastSeen[ch] = i;
        if (i - start + 1 > longest) {
            longest = i - start + 1;
        }
    }
    printf("%d\n", longest);
    return 0;
}
