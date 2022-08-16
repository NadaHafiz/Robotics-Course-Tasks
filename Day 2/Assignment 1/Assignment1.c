#include<stdio.h>

void main (){
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,sr;

printf("Please Enter Number 1:");
scanf("%d",&num1);

printf("Please Enter Number 2:");
scanf("%d",&num2);

printf("Please Enter Number 3:");
scanf("%d",&num3);

printf("Please Enter Number 4:");
scanf("%d",&num4);

printf("Please Enter Number 5:");
scanf("%d",&num5);

printf("Please Enter Number 6:");
scanf("%d",&num6);

printf("Please Enter Number 7:");
scanf("%d",&num7);

printf("Please Enter Number 8:");
scanf("%d",&num8);

printf("Please Enter Number 9:");
scanf("%d",&num9);

printf("Please Enter Number 10:");
scanf("%d",&num10);

printf("Please Enter The Number to search:");
scanf("%d",&sr);

if(sr==num1){
printf("Value Exist at Element 1");
}
else if(sr==num2){
printf("Value Exist at Element 2");
}
else if(sr==num3){
printf("Value Exist at Element 3");
}
else if(sr==num4){
printf("Value Exist at Element 4");
}
else if(sr==num5){
printf("Value Exist at Element 5");
}
else if(sr==num6){
printf("Value Exist at Element 6");
}
else if(sr==num7){
printf("Value Exist at Element 7");
}
else if(sr==num8){
printf("Value Exist at Element 8");
}
else if(sr==num9){
printf("Value Exist at Element 9");
}
else if(sr==num10){
printf("Value Exist at Element 10");
}
else{
printf("Number Does Not Exist");
}

}