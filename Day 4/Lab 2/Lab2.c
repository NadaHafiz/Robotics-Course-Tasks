#include <stdio.h>
int x=10;
int y=20;
void swap (int num1, int num2);

void main() 
{
printf("x before swap : %d \n",x);
printf("y before swap : %d \n",y);
swap(x,y);
printf("x after swap : %d \n",x);
printf("y after swap : %d \n",y);
}
void swap(int num1,int num2)
{
int z=x;
x=y;
y=z;
}
