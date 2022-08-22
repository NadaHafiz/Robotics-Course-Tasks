#include <stdio.h>
void main()
{
   int x=10;
   int y=20;
   int z=30;
   int *temp;
   int *p=&x;
   int *q=&y;
   int *r=&z;
   printf("x value %d pointer value %d and address %d \n",x,*p,p);
   printf("y value %d pointer value %d and address %d \n",y,*q,q);
   printf("z value %d pointer value %d and address %d \n",z,*r,r);
   printf("Swapping Pointers : \n");
   
   temp=p;
   p=q;
   q=r;
   r=temp;
   
   printf("x value %d pointer value %d and address %d \n",x,*p,p);
   printf("y value %d pointer value %d and address %d \n",y,*q,q);
   printf("z value %d pointer value %d and address %d \n",z,*r,r);
   
   /* value of pointers will change with change in address */
}