#include <stdio.h>
int class_1();
int class_2();
int class_3();
void main()
{
int ch;
do
{
printf("Choose The Class To Access:");
printf("\n 1-Class 1 \n 2-Class 2 \n 3-Class 3 \n ");
scanf(" %d",&ch);
switch (ch)
{
    case 1:
    class_1();
    break;
    
    case 2:
    class_2();
    break;
    
    case 3:
    class_3();
    break;
    
}
} while(ch<=3);
}

int class_1()
{
int i , arr[10];
int max=0;
int min=100;
int countpass=0, countfail=0 , sum=0, average;
for(i=0 ;i<=9;i++)
{
    printf("Please Enter The Grade For CLASS 1 Students #%d : Between 0-100 \n",(i+1));
    scanf("%d",&arr[i]);
}

for(i=0 ;i<=9;i++)
{
    if(arr[i]>=50 && arr[i]<=100)
    {
        countpass++;
    }
    else if (arr[i]<=50)
    {
        countfail++;
    }
    else
    {
        printf("Something Wrong");
    }
}
printf("Number Of Students PASSED : %d \n",countpass);
printf("Number Of Students FAILED : %d \n",countfail);

for (int i=0 ; i<=9 ; i++)
{
      for (int i = 0; i <=9; i++) 
      {
       if(arr[i] > max)    
       max = arr[i];
	  }
      for (int i = 0; i <=9; i++) 
	  {     
       if(arr[i] < min) 
	   min = arr[i];
	  }	   
}
printf("The Maximum Grade Is: %d \n",max);
printf("The Minimum Grade Is: %d \n",min);

for (int i=0 ; i <=9 ; i++)
{
    sum+=arr[i];
    average=sum/10;
}
printf("The Average Of 10 Students Is %d \n",average);
}

int class_2()
{
int i , arr[10];
int max=0;
int min=100;
int countpass=0, countfail=0 , sum=0, average;
for(i=0 ;i<=9;i++)
{
    printf("Please Enter The Grade For CLASS 1 Students #%d : Between 0-100 \n",(i+1));
    scanf("%d",&arr[i]);
}

for(i=0 ;i<=9;i++)
{
    if(arr[i]>=50 && arr[i]<=100)
    {
        countpass++;
    }
    else if (arr[i]<=50)
    {
        countfail++;
    }
    else
    {
        printf("Something Wrong");
    }
}
printf("Number Of Students PASSED : %d \n",countpass);
printf("Number Of Students FAILED : %d \n",countfail);

for (int i=0 ; i<=9 ; i++)
{
      for (int i = 0; i <=9; i++) 
      {
       if(arr[i] > max)    
       max = arr[i];
	  }
      for (int i = 0; i <=9; i++) 
	  {     
       if(arr[i] < min) 
	   min = arr[i];
	  }	  
}
printf("The Maximum Grade Is: %d \n",max);
printf("The Minimum Grade Is: %d \n",min);

for (int i=0 ; i <=9 ; i++)
{
    sum+=arr[i];
    average=sum/10;
}
printf("The Average Of 10 Students Is %d \n",average);
}

int class_3()
{
int i , arr[10];
int max=0;
int min=100;
int countpass=0, countfail=0 , sum=0, average;
for(i=0 ;i<=9;i++)
{
    printf("Please Enter The Grade For CLASS 1 Students #%d : Between 0-100 \n",(i+1));
    scanf("%d",&arr[i]);
}

for(i=0 ;i<=9;i++)
{
    if(arr[i]>=50 && arr[i]<=100)
    {
        countpass++;
    }
    else if (arr[i]<=50)
    {
        countfail++;
    }
    else
    {
        printf("Something Wrong");
    }
}
printf("Number Of Students PASSED : %d \n",countpass);
printf("Number Of Students FAILED : %d \n",countfail);

for (int i=0 ; i<=9 ; i++)
{
      for (int i = 0; i <=9; i++) 
      {
       if(arr[i] > max)    
       max = arr[i];
	  }
      for (int i = 0; i <=9; i++) 
	  {     
       if(arr[i] < min) 
	   min = arr[i];
	  }	  
}
printf("The Maximum Grade Is: %d \n",max);
printf("The Minimum Grade Is: %d \n",min);

for (int i=0 ; i <=9 ; i++)
{
    sum+=arr[i];
    average=sum/10;
}
printf("The Average Of 10 Students Is %d \n",average);
}