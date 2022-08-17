#include <stdio.h>

void main() {
   int x,fact=1,num;

    printf("Enter a number to find factorial: ");
    scanf("%d",&num);
    x=1;
    while(x<=num)
    {
        fact=fact*x;
        x++;
    } 
    printf("Factorial is: %d",fact);
}