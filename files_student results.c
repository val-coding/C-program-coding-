/*
Registration number CT101/G/26498/25
Name: Valentine Wanja
Description :functto display name and marks of each student
*/

#include<stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    
    // Writing data to binary file
    fp = fopen("results.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    char choice;
    do {
        printf("Enter student name: ");
        getchar(); // clear buffer
        fgets(s.name, sizeof(s.name), stdin);
        printf("Enter registration number: ");
        fgets(s.reg_no, sizeof(s.reg_no), stdin);
        printf("Enter total marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(s), 1, fp);

        printf("Add another student? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);

    // Reading from file
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Name: %sReg No: %sMarks: %.2f\n", s.name, s.reg_no, s.marks);
    }

    fclose(fp);
    
    return 0;
}