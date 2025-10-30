/*
Name :Valentine Wanja 
Registration number :CT101/G/26498/25
Hotel revenue 
30/10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // for random numbers

    //  1D Array: Weekly Revenue 
    float revenue[7], total = 0, average;
    int i;

    printf("  REVENUE TRACKER \n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;
    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n\n", average);

    // - 2D Array: Room Occupancy 
    int rooms[5][10];
    int floor, room, occupied, vacant;

    printf(" ROOM OCCUPANCY  \n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            rooms[floor][room] = rand() % 2; // 1 = occupied, 0 = vacant
            if (rooms[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");

    //  3D Array: Multiple Branches
    int hotel[3][5][10];
    int branch, totalOccupied = 0;

    printf(" MULTIPLE BRANCHES OCCUPANCY \n");

    for (branch = 0; branch < 3; branch++) {
        occupied = 0;

        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
             hotel[branch][floor][room] = rand() % 2;
                if (hotel[branch][floor][room] == 1)
                    occupied++;
            }
        }

        totalOccupied += occupied;
        printf("Branch %d -> Occupied rooms: %d\n", branch + 1, occupied);
    }

    printf("\nTotal occupied rooms across all branches = %d\n", totalOccupied);

    return 0;
}

    