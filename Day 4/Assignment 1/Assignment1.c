#include <stdio.h>

int maximum (int num1,int num2,int num3,int num4);
int minimum (int num1,int num2,int num3,int num4);

void main()
{
   int x,y,z,k,max,min;
   printf("please enter 4 values to check which is the maximum - minimum : \n");
   scanf(" %d %d %d %d",&x,&y,&z,&k);
   max=maximum(x,y,z,k);
   printf("The Maximum Number Is :%d \n",max);
   min=minimum(x,y,z,k);
   printf("The Maximum Number Is :%d \n",min);
}
int maximum (int num1,int num2,int num3,int num4)
{
    if (num1>num2 && num1>num3 && num1>num4)
    {
      return num1;
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
      return num2;
    }
    else if (num3>num1 && num3>num2 && num3>num4)
    {
      return num3; 
    }
    else if (num4>num1 && num4>num2 && num4>num3)
    {
      return num4;
    }
}
int minimum (int num1,int num2,int num3,int num4)
{
    if (num1<num2 && num1<num3 && num1<num4)
    {
      return num1;
    }
    else if (num2<num1 && num2<num3 && num2<num4)
    {
      return num2;
    }
    else if (num3<num1 && num3<num2 && num3<num4)
    {
      return num3; 
    }
    else if (num4<num1 && num4<num2 && num4<num3)
    {
      return num4;
    }    
}
