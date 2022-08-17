#include <stdio.h>

void main() {
int num , i , mult;
printf("Please enter the number you want the multiplication table: ");
scanf("%d",&num);
for(i=1;i<11;i++)
{
    mult=i*num;
    printf("%d * %d = %d \n",i,num,mult);
}
}