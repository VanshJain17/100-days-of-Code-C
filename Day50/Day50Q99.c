/*
Q99
Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Case:
Input: 15/04/2025
Output: 15-Apr-2025
*/

#include <stdio.h>

int main(void) {
    int day, month, year;
    const char *monthNames[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &day, &month, &year) != 3 ||
        month < 1 || month > 12) {
        return 1;
    }

    printf("%02d-%s-%04d\n", day, monthNames[month - 1], year);
    return 0;
}
