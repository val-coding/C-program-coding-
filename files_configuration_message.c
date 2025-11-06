/*
Registration number CT101/G/26498/25
Name :Valentine Wanja
Description program to display configuration message 
*/
#include<stdio.h>

int main()
{

    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a"); // open in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);

        fprintf(fp, "%s", title); // write title to file
        printf("Book title saved successfully.\n");

        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // clear newline character
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All titles saved in borrowed_books.txt\n");
    
    return 0;
}