#include <stdio.h>
int sum(int *px,int *py);
void main()
{
    int x ,y;
    printf("Please Enter First Number: ");
    scanf(" %d",&x);
    printf("Please Enter Second Number: ");
    scanf(" %d",&y);
    int result=sum(&x,&y);
    printf("The Sum Of %d + %d = %d ",x,y,result);
}

int sum(int *px,int *py)
{
    int result;
    result= *px + *py;
    return result;
}