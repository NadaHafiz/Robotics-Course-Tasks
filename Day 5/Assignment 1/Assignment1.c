#include <stdio.h>
void main()
{
int arr[10];
int i ;
int max=0;
int min=arr[0];

for(i=0 ;i<=9;i++)
{
    printf("Please Enter Number %d: \n",(i+1));
    scanf("%d",&arr[i]);

}
for (int j=0 ; j <=9 ; j++)
{
    if (arr[j] >= max)
    {
    max = arr[j];
    }
    else if (arr[j] < min)
    {
     min = arr[j];
    }
}
printf("The Maximum Number Is: %d \n",max);
printf("The Minimum Number Is: %d \n",min);
}