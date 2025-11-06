/*
Registration number :Ct101/G/26498/25
Name:Valentine Wanja
Description :Files 
06/11
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int numbers[10];
    int i, sum = 0;
    float average;

    //  Write 10 integers to input.txt
    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening input.txt for writing!\n");
        return (1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        fprintf(inputFile, "%d\n", numbers[i]);
    }
    fclose(inputFile);
    printf("Numbers saved to input.txt successfully!\n\n");

    // Read integers from input.txt, find sum and average
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading!\n");
        return (1);
    }

    for (i = 0; i < 10; i++) {
        fscanf(inputFile, "%d", &numbers[i]);
        sum += numbers[i];
    }
    fclose(inputFile);

    average = (float)sum / 10;

    // Write results (sum and average) to output.txt
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing!\n");
        return (1);
    }

    fprintf(outputFile, "Sum = %d\n", sum);
    fprintf(outputFile, "Average = %.2f\n", average);
    fclose(outputFile);

    //  Display file contents
    printf("Contents of input.txt:\n");
    inputFile = fopen("input.txt", "r");
    char ch;
    while ((ch = fgetc(inputFile)) != EOF)
        putchar(ch);
    fclose(inputFile);

    printf("\nContents of output.txt:\n");
    outputFile = fopen("output.txt", "r");
    while ((ch = fgetc(outputFile)) != EOF)
        putchar(ch);
    fclose(outputFile); // closes file

    return 0;
}
