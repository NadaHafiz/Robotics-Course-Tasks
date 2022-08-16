#include<stdio.h>
void main(){

int x,y,z;
 printf("Enter 1st Number  :\n");
 scanf("%d",&x);
 printf("Enter 2nd Number :\n");
 scanf("%d",&y);
 printf("Enter 3rd Number  :\n");
 scanf("%d",&z);
 if(x>y)
 {
  if(x>z)
  {
   printf("1st Number %d is maximum \n",x);
  }
  else
  {
   printf("3rd Number %d is maximum \n",z);
  }
 }
 else
 {
  if(y>z)
  {
   printf("2nd Number %d is maximum \n",y);
  }
  else
  {
   printf("3rd Number %d is maximum \n",z);
  }
 }
}