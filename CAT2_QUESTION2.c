/*
Registration number :CT101/G/26498/25
Name:Valentine Wanja
Description function to calculate taxes
*/
#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay ,overtime;

    // Request input from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay (including overtime)
    if (hours <= 40) {
        grossPay = hours * rate;
    } else {
         overtime = hours - 40;
        grossPay = (40 * rate) + (overtime * rate * 1.5);
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    //results
    printf("\n--- Pay Summary ---\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
