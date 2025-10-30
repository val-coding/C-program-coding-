/*
Name : Valentine Wanja 
Registration number CT101/G/26498/25
Description : 2D array
*/
#include <stdio.h>

int main(){
     int occupancy [5][10];
     int i,  j,
     // prompt the user to input room occupancy data
     printf(" enter occupancy for each room (1=occupied 0=vacant):\n");
     for (I=0; I<5; I++){
     printf("floor%d:\n", I + 1);
     for (j=0; j<10; j++){
     print f("room%d: ",j + 1);
     scan f("%d", &occupancy [i][j]);
     
     //validate inpur
     while occupancy [I][j] !=0 && occupancy [i][j] !=1{
     printf(" invalid input  enter 1 (occupied ) or 0(vacant):");
     scanf("%d", & occupancy [i][j]);
          }
      
      }
      
}
//Display occupied and vacant rooms per floor 
for(i=0; i<5; i++){
     int occupied =0, vacant=0;
     for(j=0; j<10; j++){

         if(occupancy[i][j]==1)     
              occupied ++;
         else  
             vacant++
      }
      printf("floor%d -> occupied:%d, vacant:%d\n",i+1 ,occupied ,vacant);
      
     }
     return 0;
     }         
