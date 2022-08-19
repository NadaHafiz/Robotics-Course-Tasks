#include <stdio.h>
void main()
{
int arr[10]={};
int i,sum=0;
float ave;

for(i=0 ;i<=9;i++)
{
    printf("Please Enter Number %d: \n",(i+1));
    scanf("%d",&arr[i]);
}
for(i=0 ;i<=9;i++)
{
    sum+=arr[i];
}
ave=sum/10;
printf("Sum of 10 numbers is : %d \n",sum);
printf("Averege of 10 numbers is : %.2f ",ave);
}