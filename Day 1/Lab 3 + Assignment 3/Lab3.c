#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, multi, modu;  
    float div;  
  
    /* 
      take two numbers from user 
     */  
    printf("Enter two decimal numbers: ");  
    scanf("%d%d",&num1,&num2);  
  
    /* 
     Performs arithmetic operations 
     */   
    sum = num1 + num2;  
    sub = num1 - num2;  
    multi = num1 * num2;  
    div = (float)num1 / num2;  
    modu = num1 % num2;  
  
    /* 
     Prints the arithmetic operations 
     */  
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", sub);  
    printf("The product of the given numbers : %d\n", multi);  
    printf("The division of the given numbers : %f\n", div);  
    printf("MODULUS = %d\n", modu);  
  
    return 0;   
} 