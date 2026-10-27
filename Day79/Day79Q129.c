/*
Q129
Read integers from numbers.txt and print their sum and average.
*/

#include <stdio.h>

int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    int value, count = 0;
    long long sum = 0;

    if (file == NULL) {
        perror("Could not open numbers.txt");
        return 1;
    }
    while (fscanf(file, "%d", &value) == 1) {
        sum += value;
        count++;
    }
    if (ferror(file)) {
        perror("Could not read numbers.txt");
        fclose(file);
        return 1;
    }
    if (fclose(file) != 0) {
        perror("Could not close numbers.txt");
        return 1;
    }
    if (count == 0) {
        fprintf(stderr, "numbers.txt contains no integers.\n");
        return 1;
    }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
