/*********************************************************************
* Filename: ArrayofStrings.c
* Description: Stores employee id and name for 3 employees
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>

/*********************************************************************
* Function: main()
* Description: To store the employee details such as employee id and
*              name and to display such details.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv){

 	/* Declare and initialize a 1-D array to store the empid
	   for 3 employees */
	int aiEmpId[5]={71005,71006,71007};

	/* Declare and initialize a 2-D array to store the emp name
	   for 3 employees. Each employee name can contain a
	   maximum of 20 characters*/
	char acEmpName[3][20]={"Ram","Clara","Dennis"};

	/* Display the details */
	printf("Employee Id\t\tEmployee Name\n");
	printf("===========\t\t=============\n");

	printf("%d\t\t\t%s\n",aiEmpId[0],acEmpName[0]);

	printf("%d\t\t\t%s\n",aiEmpId[1],acEmpName[1]);
	printf("%d\t\t\t%s\n",aiEmpId[2],acEmpName[2]);

	getch();
 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of ArrayofStrings.c
*********************************************************************/
