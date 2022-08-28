/* written by Nada Hafiz */
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES_FUNCTION.h" /*typedef & prototypes and explain functions work */
#define array_size 10000

char array_name[array_size][20], array_gender[array_size][20] ; /* 2 dimention array to store words */
u16 age; /* unsigned long int */
int id, res_choice, j=0,flag=1 ,r=0 ;
int array_id[array_size] , array_age[array_size], array_res[array_size];

void main(void)
{
     while (1)
    {
        u16 choice; /* unsigned short int range 0 to 65,535 */

        printf(" Choose the mode you want: \n"
               " Enter 1 for Admin mode \n"
               " Enter 2 for User mode \n"
               " Enter 3 to Exit the system \n"
               " Your Choice: ");

        scanf(" %hu",&choice); /* %hu is format specifier for short unsigned */

        switch (choice) /* checking the value of choice */
        {
        case 1:
            admin_mode();
            break;

        case 2:
            user_mode();
            break;

        case 3:
            printf(" Exiting...");
            exit(0);
            break;

        default:
            printf(" Invalid Choice\n");
            break;
        }
    }
}

void admin_mode()
{
    int pass ;
    u16 admin_choice;
    printf(" Please Enter The Pssword: ");
    scanf(" %d",&pass);
    int x=0,i=2;
    while (x<3)
        {
        if (pass==1234)
        {
            printf(" Correct password \n\n");
            break;
        }
        else
        {
            printf(" Wrong password, you have %d try left : ",i);
        }
        scanf("%d",&pass);
        x++;
        i--;
        }
    if(x==3)
        {
            printf("\nIncorrect Password For 3 Times");
            exit(0);
        }

    printf(" Welcome Admin : \n"
           " Enter 1 for Adding new patient record\n"
           " Enter 2 for Editing patient record\n"
           " Enter 3 for Reserving a slot with the doctor\n"
           " Enter 4 for Canceling reservation\n"
           " Enter 5 for Close System\n"
           " Your choice: ");

    scanf("%hu",&admin_choice);

    switch (admin_choice)
        {
            case 1:
                add_new_patient();
                break;

           case 2:
                edit_patient_record();
                break;

            case 3:
                reservation();
                break;

            case 4:
                cancel_reservation();
                break;

            case 5:
                printf(" Exiting...");
                exit(0);
                break;

            default:
                printf(" Invalid Choice\n");
                break;

        }
}

void add_new_patient()
{
    printf(" Enter Patient Name: ");
    scanf(" %s",array_name[j]);/* %s is format specifier for string */

    printf(" Enter Patient Age: ");
    scanf(" %hu", &age);
    array_age[j]=age;

    printf(" Enter Patient Gender (Male/Female): ");
    scanf(" %s", array_gender[j]);

    if(flag==1)
    {
    printf(" Enter Patient ID: ");
    scanf(" %d",&id);
    array_id[j]=id;
    }
    if (flag==0)
    {
    printf(" Enter Patient ID: ");
    scanf(" %d",&id);
    for(int i=0 ;i<=(array_size-1);i++)
    {
        while(id==array_id[i])
        {
            printf(" This ID Has Been Taken , Enter Another ID: ");
            scanf(" %d",&id);
        }
    }
    array_id[j]=id;
    }
    printf(" Patient Record Added Successfully \n\n\n");
    flag=0;
    j++;
}

void edit_patient_record()
{
    u16 admin_edit;
    if(flag==1)
    {
        printf(" Add New Patient First \n");
    }
    else
    {
    printf(" Enter The Patient ID You Want To Edit: ");
    scanf(" %d",&id);

        for(int i=0 ;i<=(array_size-1);i++)
    {
        if(id==array_id[i])
        {
           printf(" Enter 1 For Editing Name\n"
                  " Enter 2 For Editing Age\n"
                  " Enter 3 For Editing Gender\n"
                  " Enter 4 For Editing ID\n"
                  " Enter 5 To Back\n"
                  " Your choice: ");
            scanf(" %hu", &admin_edit);

            switch (admin_edit)
            {
            case 1:
                printf(" Enter Patient's New Name: ");
                scanf(" %s",array_name[i]);
                break;

            case 2:
                printf(" Enter Patient's New Age: ");
                scanf(" %hu",&age);
                array_age[i]=age;
                break;

            case 3:
                printf(" Enter patient's gender: ");
                scanf(" %s",array_gender[i]);
                break;

            case 4:
                printf(" Enter Patient's New ID: ");
                scanf(" %d",&id);
                array_id[i]=id;
                break;

            case 5:
                printf(" Going Back...");
                break;

            default:
                printf(" Invalid Choice\n");
                break;
            }
            printf(" Patient Information Updated Successfully \n\n\n");
            break;
        }
    }
}
}

void reservation()
{
    int id_check=0;
    if (flag==1)
    {
        printf(" Add Patient Record First \n\n");
    }
    else
    {
    printf(" Enter Patient ID: ");
    scanf(" %d",&id);
    for(int i=0 ; i<=j ;i++)
    {
    while(id==array_id[i])
    {
    printf(" Enter 1 for (2pm to 2:30pm) \n"
            " Enter 2 for (2:30pm to 3pm) \n"
            " Enter 3 for (3pm to 3:30pm) \n"
            " Enter 4 for (3:30pm to 4pm) \n"
            " Enter 5 for (4pm to 4:30pm) \n"
            " Enter 6 for (4:30pm to 5pm) \n"
            " Your choice :");
            if(r==0)
                {
                    scanf(" %d",&res_choice);
                    array_res[i]=res_choice;
                }
            if (r!=0)
                {
                    scanf(" %d",&res_choice);
                    for(int i=0 ;i<=(array_size-1);i++)
                        {
                            while(res_choice==array_res[i])
                            {
                                printf(" This Slot Is Reserved , Choose Another One: ");
                                scanf(" %d",&res_choice);
                            }
                        }
                array_res[i]=res_choice;
                }
    r++;
    id_check=1;

    if(array_res[i]<1 || array_res[i]>6)
     {
      printf(" Invalid choice..\n\n");
      break;
     }

    printf(" Slot Reserved Successfully \n\n");
    break;
    } //close while loop
    break;
    } //close for loop
    if(id_check==0)
    {
        printf(" ID Not Found\n\n");
    }
    } //close else
}

void cancel_reservation()
{
    int id_check=0;
    if (flag==1)
    {
        printf(" Add Patient Record First \n\n");
    }
    else
    {
        printf(" Enter Patient ID: ");
        scanf(" %d",&id);

        for(int i=0 ; i<=j ;i++)
            {
                while(id==array_id[i])
                {
					if(0==array_res[i])
					{
						printf(" There is No Reservation Yet\n\n");
						id_check=1;
						break;
					}
					else
					{
                    printf(" Cancelling You Reservation..\n");
					printf(" Reservation Cancelled Successfully\n\n");
                    array_res[i]=0;
                    id_check=1;
                    break;
					}
					break;
                }
            }
        if(id_check==0)
            {
                printf(" ID Not Found\n\n");
            }
}
}


void user_mode()
{
    int id_check=0;
    if(flag==1)
    {
        printf(" Add Patient Record First\n\n");
    }
    else
    {
    printf(" **WELCOME DEAR USER** \n"
           " Please Enter Your ID To Represent Your Information: ");
    scanf(" %d",&id);

    for(int i=0 ; i<=j ;i++)
    {
        while(id==array_id[i])
        {
            id_check=1;
            printf(" Patient Name : %s \n",array_name[i]);
            printf(" Patient Age : %hu \n",array_age[i]);
            printf(" Patient Gender : %s \n",array_gender[i]);

            switch(array_res[i])
            {
            case 1:
            printf(" Your Reservation is from (2pm to 2:30pm)\n\n");
            break;

            case 2:
            printf(" Your Reservation is from (2:30pm to 3pm)\n\n");
            break;

            case 3:
            printf(" Your Reservation is from (3pm to 3:30pm)\n\n");
            break;

            case 4:
            printf(" Your Reservation is from (3:30pm to 4pm)\n\n");
            break;

            case 5:
            printf(" Your Reservation is from (4pm to 4:30pm)\n\n");
            break;

            case 6:
            printf(" Your Reservation is from (4:30pm to 5pm)\n\n");
            break;

            default:
            printf(" No Reservation Yet..\n\n");
            break;
            }
            break;
        }
        break;
    }
    if(id_check==0)
    {
         printf(" Wrong ID..\n");
    }
    }
}
