/*
Q85
Reverse a string.

Sample Test Case:
Input: abcd
Output: dcba
*/

#include <stdio.h>

int main(void) {
    char text[1000], temp;
    int length = 0, left, right;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    left = 0;
    right = length - 1;
    while (left < right) {
        temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
        right--;
    }

    text[length] = '\0';
    printf("%s\n", text);
    return 0;
}
