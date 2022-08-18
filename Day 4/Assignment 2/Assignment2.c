#include <stdio.h>
int addition();  
int subtracting();  
int multiply();  
int divide();
int remain();
int increase();
int decrease();

void main()
{
int choice;
do
{
printf("Please Enter The Number of Operation You Want: ");
printf("\n 1-Addition \n 2-Subtract \n 3-Multiplcation \n 4-Devision \n 5-Remainder \n 6-Increment \n 7-Decrement \n 8-Exiting \n ");
scanf("%d",&choice);
switch(choice)
{
    case 1 :
    addition();
    break;
    
    case 2 :
    subtracting();
    break;
    
    case 3:
    multiply();
    break;
    
    case 4:
    divide();
    break;
    
    case 5:
    remain();
    break;
    
    case 6:
    increase();
    break;
    
    case 7:
    decrease();
    break;
	
	case 8:
    printf("Exiting...");
    break;
} 
}while(choice<=8);
}
int addition()
{
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    res = num1 + num2;    
    printf (" The summition of %d + %d is: %d\n \n", num1, num2, res);
    return 0;  
}
int subtracting()
{
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    res = num1 - num2;    
    printf (" The subtraction of %d - %d is: %d\n \n", num1, num2, res);
    return 0;
}
int multiply()
{
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    res = num1 * num2;    
    printf (" The multiply of %d * %d is: %d\n \n", num1, num2, res);
    return 0;
}
int divide()  
{  
    int num1, num2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    if (num2 == 0)  
    {  
        printf ("ERROR Divisor cannot done on zero , Please Enter Another Number ");  
        scanf ("%d", &num2);     
    }  
    res = num1 / num2;    
    printf ("The division of %d / %d is: %d\n \n", num1, num2, res);
    return 0;
}  
int remain()
{
    int num1,num2,modulus;
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    modulus = num1 % num2;
    printf("Remainder Is = %d\n \n", modulus);
}
int increase()
{
    int num1;
    printf (" The number you want to increment: ");  
    scanf ("  %d", &num1); 
    num1++;
    printf("Number After Increment Is %d\n \n",num1);
    return 0;
}
int decrease()
{
    int num1;
    printf (" The number you want to decrement: ");  
    scanf ("  %d", &num1); 
    num1--;
    printf("Number After Decrement Is %d\n \n",num1);
    return 0;
}