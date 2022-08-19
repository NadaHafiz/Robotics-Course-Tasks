#include <stdio.h>
void main()
{
int arr[10]={};
int i , j;

for(i=0 ;i<=9;i++)
{
    printf("Please Enter Number %d: \n",(i+1));
    scanf("%d",&arr[i]);
}
printf("The Values In Reverse is : \n");

for( j=9; j>=0;j--)
{
    printf("%d \n",arr[j]);
}
}