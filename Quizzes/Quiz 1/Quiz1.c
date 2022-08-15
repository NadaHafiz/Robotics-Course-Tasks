#include <stdio.h>

int main(){
int number1,number2;

printf("Please Enter The Two Number You Want To Find The Maximum");
scanf("%d%d",&number1,&number2);

switch(number1>number2)
{
case 0:
printf("The Maximum Number Is %d",number2);
break;

case 1:
printf("The Maximum Number Is %d",number1);
break;
}
return 0;
}