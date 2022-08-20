#include <stdio.h>
void ope (int *x,int *y ,int *sum , int *sub);
void main()
{
    int x ,y,sum,sub;
    printf("Please Enter First Number: ");
    scanf(" %d",&x);
    printf("Please Enter Second Number: ");
    scanf(" %d",&y);
    ope (&x,&y,&sum,&sub);
    printf("The Sum Is %d And The Sub Is %d",sum,sub);
}

void ope (int *x,int *y ,int *sum , int *sub)
{
    *sum=*x+*y;
    *sub=*x-*y;
}