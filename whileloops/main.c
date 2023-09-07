/*********************************************************************
* Filename: whileloops.c
* Description: To understand the usage of while loop
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>


/*********************************************************************
* Function: main()
* Description: To display one employee detail at a time using
*              while loop
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv - The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declare the variables */
	int aiEmpId[5]={71005,71006,71007,71008,71009};

	/*Replace this comment and insert the code here to declare
	variable to store job band for 5 employees*/

	char cChoice='Y';

	/* Declare a variable to keep track of the record to be printed
       */
	int iCount=0;

	/* Continue the loop until the user enters 'n' or 'N' */
	while (cChoice == 'Y' || cChoice == 'y'){
		/* Clear the screen */
		system("cls");

		/* Display employee id */
		printf("Employee id: %d\n",aiEmpId[iCount]);

		/* Replace this comment and insert the code here to
		   display employee Id and job band */

		/* If the count is reached the last record, reset it
		   to zero. Otherwise increment the count*/
		if (iCount == 4) {
			iCount = 0;
		}
		else {
			iCount++;
		}
		printf("Want to continue (Y/N) ");

		/* Clear the buffer and get the choice from the user */
		fflush(stdin);
		scanf("%c",&cChoice);
	}

	getch();

 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of whileloops.c
*********************************************************************/
