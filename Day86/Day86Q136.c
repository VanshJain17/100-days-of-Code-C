/*
Q136
Use an enum for ADD, SUBTRACT, and MULTIPLY and perform the selected
operation using switch.

Sample input: ADD 10 20
Sample output: 30
*/

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char input[20];
    enum Operation operation;
    long long first, second, result;

    if (scanf("%19s %lld %lld", input, &first, &second) != 3) {
        return 1;
    }
    if (strcmp(input, "ADD") == 0) {
        operation = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        operation = SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        operation = MULTIPLY;
    } else {
        fprintf(stderr, "Unknown operation.\n");
        return 1;
    }

    switch (operation) {
        case ADD: result = first + second; break;
        case SUBTRACT: result = first - second; break;
        case MULTIPLY: result = first * second; break;
        default: return 1;
    }
    printf("%lld\n", result);
    return 0;
}
