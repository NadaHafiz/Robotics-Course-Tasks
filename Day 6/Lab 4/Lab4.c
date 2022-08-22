#include <stdio.h>
void main()
{
    int arr[3]={42,65,86};
    int sum=0;
    for (int i=0 ; i<=2 ; i++)
    {
        sum+=*(arr+i); /* arr[i]=*(arr+i)=value */
    }
    printf("The Sum Of Array Is : %d",sum);
	/* arr+i=pointer */
}