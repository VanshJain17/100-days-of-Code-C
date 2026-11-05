/*
Q138
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    enum Color color;

    for (color = RED; color <= GREEN; color++) {
        printf("%s=%d\n", names[color], color);
    }
    return 0;
}
