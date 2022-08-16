#include<stdio.h>
void main()
{
    int grade;
    printf("Enter your grade ");
    scanf("%d",&grade);
    if(grade>=0&&grade<50)
    {
        printf("Failed");
    }
    else if(grade>=50 && grade<65)
    {
        printf("Normal");
    }
    else if(grade>=65 && grade<75)
    {
        printf("Good");
    }
    else if(grade>=75 && grade<85)
    {
        printf("Very Good");
    }
    else if(grade>=85 && grade<=100)
    {
        printf("Excellant");
    }
	else
	{
	printf("Please enter Number between 0-100");	
	}
}