/*
Registration number :CT101/G/26498/25
Name:Valentine Wanna
Description :function to claculaand display sales for the day
 */
 
 #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;

    // --- Create and write to the file ---
    file = fopen("sales.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter number of sales transactions: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount);   //  newline ensures proper reading
    }

    fclose(file);  // always close before reading

    printf("\nSales amounts successfully saved to sales.txt!\n\n");

    // --- Read back the data and calculate total ---
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    total = 0.0;
    while (fscanf(file, "%f", &amount) == 1) {  // correct condition
        total += amount;
    }

    fclose(file);
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
