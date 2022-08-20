#include <stdio.h>

void main()
{
    int x=10;
    int *ptr=&x;
    printf("The Value Of X Before Change : %d \n",x); /* *ptr=x */
    *ptr=20;
    printf("The Value Of X After Change : %d \n",*ptr);
}