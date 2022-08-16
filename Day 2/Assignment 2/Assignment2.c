#include<stdio.h>
void main (){
int id,pass;

printf("Enter Your ID:\n ");
scanf("%d",&id);
        
switch(id) {
case 1423:
            printf("Enter your password:\n ");
            scanf("%d",&pass);

            switch(pass){
           
               case 1211:
               printf("Welcome Nada \n");  /* If password correct then print message */
               break;
            
            default:
               printf("Incorrect Password"); /* If password incorrect */
			   break; /* not necessary to write */
			}
break;
   
default:
printf("Incorrect ID"); /* If ID incorrect */
break;
           }
}