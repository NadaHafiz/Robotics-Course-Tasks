#include<stdio.h>

void main (){
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);

 /* check if the reminder is zero then even */
 if(num % 2 == 0)
 printf("%d is even.",num);
 else{
 printf("%d is odd.",num);
 }
 }