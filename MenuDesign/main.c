/*********************************************************************
* Filename: MenuDesign.c
* Description: To understand how to design menu based programs
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFEEMPLOYEES 6

/*********************************************************************
* Function: main()
* Description: To design a menu to implement the functionality such as
*              job band change, confirm employee and report.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv - The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declare and intialize employee id array */
	int aiEmployeeIds[NUMBEROFEEMPLOYEES] = {71005,71006,71007,
		                                 71008,71009,71010};

	/* Declare and initialize job band array */
	/* Replace this comment and insert the declaration here */

	/* Declare and initialize confirmation status array */
	/* Replace this comment and insert the declaration here */

	/* Declare the variable to store the entered job band */
	char cJobBand;

	/* Declare the variable to store the accepted employee id */
	int iEmpId;

	/* Declare the variable to store the employee id validation
        result */
	char cEmpIdFound;

	/* Delcare the loop variable and a variable for
	user's choice */
	int iLoopIndex;
	int iChoice;

	do{
		/* Clear the screen */
		system("cls");

		/* Initialize the employee id validation result */
		cEmpIdFound = 'N';

		/* Display the menu and get the choice from
		the user */
		printf("\t\t1. Change Job Band\n");
		printf("\t\t2. Confirm Employee\n");
		printf("\t\t3. Report\n");
		printf("\t\t4. Exit\n");

		printf("Enter your choice: ");
		scanf("%d",&iChoice);

          	/* Based on user's choice, the respective functionality is
             	invoked */
		switch(iChoice){
			case 1: /* Accept the employee id for whom the
                          	job band to be updated */
				printf("Enter the employee id ");
				scanf("%d",&iEmpId);

				/* Employee id validation*/
				for (iLoopIndex=0;iLoopIndex <
                                  NUMBEROFEEMPLOYEES;iLoopIndex++){
				    if (aiEmployeeIds[iLoopIndex] == iEmpId){
						/* Employee id is found */
						cEmpIdFound='Y';
						/* Quit the for loop */
						break;
				    }
				}

				/* Employee Id is not found */
				if (cEmpIdFound == 'N'){
					printf("Invalid Employee Id");
					getch();
				}

				else {
					/* Update Job Band */
					/* Replace this comment and write the
                              		code here to update the job band for
                              		the entered employee id */
				}
				/* Quit the switch statement */
				break;

			case 2: /* Accept the employee id for whom the
                           	confirmation status to be updated */
				printf("Enter the employee id ");
				scanf("%d",&iEmpId);

				/* Employee id validation*/
				/* Replace this comment and write the code
                            	here to validate the entered employee id
                         	*/

				/* Update confirmation status */
				/* Replace this comment and write the code
                            	here to update the confirmation status for
                            	the entered employee id */


			case 3: /* Print the report */
                        	/* Replace this comment and write the code
                           	here to print the report */


			case 4: /* Quit the program */
					exit(0);
		}


	} while (iChoice != 4);


 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of MenuDesign.c
*********************************************************************/
