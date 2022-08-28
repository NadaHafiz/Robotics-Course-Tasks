#ifndef _STD_TYPES_FUNCTION_H
#define _STD_TYPES_FUNCTION_H

typedef unsigned short int u16; 

/*
1/ C code for clinic management system.
2/ At the beginning of the system it asks 
to choose between admin mode and user mode.
*/

void admin_mode();
/*
note* Amin Password Is 1234
1/ Void function that show admin mode. 
2/ ask admin for password.
3/ The system allows 3 trails to enter password
if the entered password was incorrect for 3 consecutive times, the system shall close.
4/ if admin entered password correctly
program will show menu (add new_patient,edit patient record , reservation ,cancel_reservation ,close system).
*/

void add_new_patient();
/*
1/ Void function that asks for patient (name,age,gender,id).
2/ then add the new patient reacord.
*/

void edit_patient_record();
/*
1/ Void function allow admin to edit patient record by entering patient's id.
*/

void reservation();
/*
1/ Void function allow admin to make reservation for patient by entering patient's id.
2/ Only one reservation allowed for the patient.
3/ if admin choose slot already booked to another patient , the program will ask the admin to choose another one.
*/

void cancel_reservation();
/*
1/ Void Function ask admin to enter patient's id.
2/ it will cancel the patient reservation. 
*/

void user_mode();
/*
1/ Void function that shows user mode.
2/ ask user to enter his id.
3/ show the user (name , age ,gender , user reservation time).
*/

#endif