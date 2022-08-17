#include <stdio.h>

void main() {
    int num ,sum=0 ;
    float avr;
    printf("please enter 10 numbers:\n");
    for(int i =0 ; i<10 ; i++)
    {
        printf("Number - %d :",i);
        scanf("%d",&num);
        sum+=num;
    }
    avr=(sum/10);
    printf("The sum of 10 numbers is : %d \n",sum);
    printf("The average of 10 numbers is : %f \n",avr);
}