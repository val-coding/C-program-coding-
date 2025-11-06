/*
Registration number CT101/G/26498/25
Name: Valentine Wanja
Description :Arrays
*/

#include<stdio.h>
int main() {
    //Array data structure is a collection of elements of the same data type stored inncontiguos memory 
    
    //Declaring a 2D array
    int scores[2][2][2] = {
        { {65, 92}, {84, 72} },
        { {35, 70}, {59, 67} }
    };

    // iii. Print the elements of the array using nested loops
    printf("Elements of the 3D array 'scores':\n");

    for (int i = 0; i < 2; i++) {
        printf("\nMatrix %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d\t", scores[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}