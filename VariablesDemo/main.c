/*********************************************************************
* Filename: VariablesDemo.c
* Description: To define variables and to print numbers in
*              decimal and hexadecimal format
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*********************************************************************
* Function: main()
* Description: int, float and double variables are declared
*              and initialized and the int variables are
*              printed in decimal and hexa decimal format
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv - The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declaration of variables  */

      	double dBasicSalary;
     	float fAllowances;

	/* Initialize empid, basic salary and allowances*/
     	iEmpId = 71005;

	/* Basic Salary in Indian Rupees (Rs.) */
	dBasicSalary = 25000;

	/* Allowances in Indian Rupees (Rs.) */
   	fAllowances = 15000;

	/* Display the employee details */
  	printf("Employee Id                         :  %d\n", iEmpId);
	printf("Basic Salary                        :  %lf\n",
                                                       dBasicSalary);
	printf("Allowances                          :  %f\n",
                                                        fAllowances);

	/* Display employee id in decimal and hexa decimal format */
	printf("Employee Id in decimal (base 10)    :  %d\n", iEmpId);
	printf("Employee Id in hexa decimal (base 16):  %x\n", iEmpId);

	getch();

 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of VariablesDemo.c
*********************************************************************/
