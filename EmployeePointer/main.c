/*********************************************************************
* Filename: EmployeePointer.c
* Description: Demonstrate the use of pointers
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>


/*********************************************************************
* Function: main()
* Description: A pointer is declared to the employee id and the
*              value is printed through the pointer
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declaration and initialization of employee id  */
	int iEmpId=71005;

	/* Declaration of the pointer to employee id */
	int *piEmpId;

	/* Assign the address of the employee id to the pointer */
	piEmpId = &iEmpId;

	/* Print the address of the employee id (In hex) */
	printf("Address of iEmpId                    : %x\n",&iEmpId);

	/* Print the address of the employee id (In hex) through
	   the pointer */
	printf("Address of iEmpId through the pointer: %x\n",piEmpId);

	/* Print the employee id (value) */
	printf("Employee Id                          : %d\n",iEmpId);

	/* Print the employee id (value) through the pointer */
	printf("Employee Id through the pointer      : %d\n",*piEmpId);

     	/* Print the size of the int variable */
	printf("Size of iEmpId                       : %d bytes\n",
	                                            sizeof(iEmpId));

	/* Print the size of the pointer */
	printf("Size of piEmpId Pointer              : %d bytes\n",
	                                            sizeof(piEmpId));

	getch();
	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of EmployeePointer.c
*********************************************************************/

