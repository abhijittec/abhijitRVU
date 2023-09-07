/*********************************************************************
* Filename: AverageCustomerFeedback.c
* Description: To find the average customer feedback for the employee
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

#include <stdio.h>

/*********************************************************************
* Function: main()
* Description: To find the average customer feedback (3 customers)
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main (int argc, char** argv) {

 	/* Declaration of variables  */
  		int iEmpId;
        double dBasicSalary;
        float fAllowances;
		float fFeedbackAverage;
        int iCustFeedback1,iCustFeedback2,iCustFeedback3;
        int iFeedbackSum;

        /* Initialize empid, basic salary and allowances*/

   	iEmpId = 71005;

	/* Basic Salary in Indian Rupees (Rs.) */
	dBasicSalary = 25000;


	/* Allowances in Indian Rupees (Rs.) */
   	fAllowances = 15000;

	iCustFeedback1 = 7;
	iCustFeedback2 = 8;
	iCustFeedback3 = 10;

	/* Find the sum and average customer feedback */
	iFeedbackSum = iCustFeedback1 + iCustFeedback2 + iCustFeedback3;
	fFeedbackAverage = iFeedbackSum / 3;

	/* Display the employee details */
  	printf("Employee Id                          :  %d\n", iEmpId);
	printf("Basic Salary                         :  %.2f\n",
                                                        dBasicSalary);
	printf("Allowances                           :  %.2lf\n",
                                                        fAllowances);
	printf("Average Customer Feedback            :  %.2f\n",
                                                    fFeedbackAverage);

	getch();
 	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of AverageCustomerFeedback.c
*********************************************************************/



