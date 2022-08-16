#include <stdio.h>

void main (){
 int hr, salary ,perc;
 printf("Please Enter Your Working Hours:");
 scanf("%d",&hr);
 
 salary=hr*50;
 
 if(hr<40){
 perc=0.1*salary;
 salary=salary-perc;
 }
printf("Your Salary Is %d",salary);
}