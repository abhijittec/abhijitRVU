/*********************************************************************
* Filename: EmployeeArray.c
* Description: Demonstrate the use of array references
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>

/*********************************************************************
* Function: main()
* Description: Employee ids are assigned to the array and shows
*              the valid array references
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv){

 	/* Declaration of array to store 4 employee ids  */
	int aiEmpId[4];

	/* Initialize the employee ids for only 3 employees */
	aiEmpId[0]=71005;
	aiEmpId[1]=71006;
	aiEmpId[200]=71005;

	/* Display the employee ids */
  	printf("Employee Id-1: %d\n",aiEmpId[0]);
	printf("Employee Id-2: %d\n",aiEmpId[1]);
	printf("Employee Id-3: %d\n",aiEmpId[2]);

	getch();
 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of EmployeeArray.c
*********************************************************************/
