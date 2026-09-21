/*
Q86
Check if a string is a palindrome.

Sample Test Cases:
Input: madam
Output: Palindrome

Input: hello
Output: Not palindrome
*/

#include <stdio.h>

int main(void) {
    char text[1000];
    int length = 0, left, right, isPalindrome = 1;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    while (text[length] != '\0' && text[length] != '\n') {
        length++;
    }

    left = 0;
    right = length - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s\n", isPalindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
