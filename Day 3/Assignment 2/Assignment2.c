#include <stdio.h>

void main() {
int pass, id;	
/* user id is 1561 and password 1423 */
while(1)
{
printf("Please Enter Your ID: ");
scanf("%d",&id);
if(id==1561)
{
    printf("Correct ID \n");
    break;
}
else
{
   printf("Wrong ID \n");  
}
}

printf("Input the password: ");
scanf("%d",&pass);	
int x=0;
while (x<2)
{	
	if (pass==1423)
	{
		printf("Correct password");
		break;
    }
    else
    {
       printf("Wrong password, try again : "); 
	}
	scanf("%d",&pass);	
	x++;
}
if(x==2)
{
printf("Incorrect Password For 3 Times");
}
}