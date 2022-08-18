
#include <stdio.h>

int max_num (int num1 , int mun2);

void main() {
int x , y , max;
printf("Please Enter First Number :");
scanf(" %d",&x);
printf("Please Enter Second Number :");
scanf(" %d",&y);
max=max_num(x,y);
printf("The Maximum Number Is :%d",max);
}

int max_num (int num1 , int num2){
int result;
if(num1>num2)
{
result=num1;   
}
else
{
result=num2;    
}
return result;
}