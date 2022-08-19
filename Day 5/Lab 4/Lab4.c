#include <stdio.h>
void main()
{
int arr[10];
int i , src , count=0;

for(i=0 ;i<=9;i++)
{
    printf("Please Enter Number %d: \n",(i+1));
    scanf("%d",&arr[i]);
}
printf("Please Enter The Element You Want To Search :");
scanf(" %d",&src);

for(i=0 ;i<=9;i++)
{
if (src==arr[i])
{  
    count++;
}
}
if(count==0)
{
    printf("Value Does Not Exist");
}
else
{
    printf("Value Exist %d Times",count);
}
}