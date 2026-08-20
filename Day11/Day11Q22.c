/*
Q22
Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit percentage = %.2f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss percentage = %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
