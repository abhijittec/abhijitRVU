
/*********************************************************************
* Filename: doWhileLoopWorking1.c
* Description: To calculate the square of first 5 numbers
*	       starting from 1
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/
#include<stdio.h>

/*********************************************************************
* Function: main()
* Description: To calculate the square of first 5 numbers.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main(int argc, char ** argv)
{
	/* Declaration and initialization of variables */
	int iIndex=1,iResult;

	do
	{
		iResult=iIndex*iIndex;
		printf("%d\n",iResult);
		if(iIndex==5)
			break;
		else
			iIndex++;
	}while(1);

	getch();
	/* Return a success code to the Operating System */
 	return 0;
}

/*********************************************************************
* End of doWhileLoopWorking1.c
*********************************************************************/
