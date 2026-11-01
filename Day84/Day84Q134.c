/*
Q134
Define an enum with SUCCESS, FAILURE, and TIMEOUT and print its message.
*/

#include <stdio.h>
#include <string.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[20];
    enum Result result;

    if (scanf("%19s", input) != 1) {
        return 1;
    }
    if (strcmp(input, "SUCCESS") == 0) {
        result = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        result = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        result = TIMEOUT;
    } else {
        fprintf(stderr, "Unknown result.\n");
        return 1;
    }

    switch (result) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
