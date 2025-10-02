/*
Name: Valentine Wanja
Registration Number : CT101/G/26498/25
Description :Eligibility  final exams
*/

#include <stdio.h>
int main (){

float attendance, averageMarks;

printf( "enter your attendance percentage:\n");
scanf("%f ",&attendance);

printf("enter your averageMarks:\n");
scanf("%f" ,&averageMarks);


if(attendance >=75 && averageMarks>=40) {
printf( "you are eligible to sit for the exams:\n");
} else {
printf("Not eligible:\n");
}

return 0 ;
}