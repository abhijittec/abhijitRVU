/*********************************************************************
* Filename: dowhileLoopWorking3.c
* Description: To explain the working of a Do-While loop
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/
#include<stdio.h>
/*********************************************************************
* Function: main()
* Description: To implement a Do-While loop till a condition has been
*		met.
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main(int argc, char ** argv)
{
	/* Declaration and initialization of variables */
	int iIndex=1,iSum=0;

	do
	{
		iSum=iIndex*iIndex+iSum;
		if(iSum>50)
			break;
		iIndex++;
	}while(1);

	printf("%d %d",iSum,iIndex);

	getch();
	/* Return a success code to the Operating System */
	return 0;
}
/*********************************************************************
* End of dowhileLoopWorking3.c
*********************************************************************/
