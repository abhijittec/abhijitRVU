/*********************************************************************
* Filename: AverageCustomerFeedback2DArrays.c
* Description: To store the customer's feedback (3 customers) for
*              employees (2 employees) using a 2-D array.
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>

/*********************************************************************
* Function: main()
* Description: To store the customer's feedback using a 2-D
*              array and to find the average customer feedback for
*              each employee.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declaration of 2-D array. Since there are two employees and
	   three customers, row size is 2 and the column size is 4
	   (To store employee id and the feedback) */
  	int aiEmpCustFeedback[2][4];

	/* Assign the employee id to row 0, column 0 */
     	aiEmpCustFeedback[0][0] = 71005;

	/* Assign the corresponding feedback*/
	aiEmpCustFeedback[0][1] = 7;
	aiEmpCustFeedback[0][2] = 8;
	aiEmpCustFeedback[0][3] = 10;

	/* Assign the employee id to row 1, column 0 */
     	aiEmpCustFeedback[1][0] = 71006;

	/* Assign the corresponding feedback*/
	aiEmpCustFeedback[1][1] = 5;
	aiEmpCustFeedback[1][2] = 5;
	aiEmpCustFeedback[1][3] = 7;



	/* Display the employee id and the corresponding feedback */
	printf("Employee Id\tFeedback-1\tFeedback-2\tFeedback-3\n");
	printf("===========\t==========\t==========\t==========\n");

	printf("%d\t\t  %d\t\t  %d\t\t  %d\n",aiEmpCustFeedback[0][0],
		    aiEmpCustFeedback[0][1],aiEmpCustFeedback[0][2],
			aiEmpCustFeedback[0][3]);
	printf("%d\t\t  %d\t\t  %d\t\t  %d\n",aiEmpCustFeedback[1][0],
		    aiEmpCustFeedback[1][1],aiEmpCustFeedback[1][2],
			aiEmpCustFeedback[1][3]);

	getch();
 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of AverageCustomerFeedback2DArrays.c
*********************************************************************/
