/*
Name: Valentine Wanja 
Registration number:CT101/G/26498/25
Description :Total Water bill
*/

#include <stdio.h>
int main (){

double bill;
int units;

printf("enter number of units consumed:\n");
scanf("%d", &units);

if(units<=30) {
    bill=units*20.00;
} else if (units<=60){
    bill=units*25.00;
} else {
    bill=units*30.00;
}

printf ("your total water bill is KES:%.2lf\n",bill);
return 0;
}