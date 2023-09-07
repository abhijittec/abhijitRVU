/*********************************************************************
* Filename: whileLoopWorking3.c
* Description: To understand the working of while loop
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/
#include<stdio.h>
#include<stdlib.h>


/*********************************************************************
* Function: main()
* Description: To understand the working of while loop
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/
int main(int argc, char ** argv)
{
	/*Declaration and Initialization of variables */
	int iIndex=1,iSum=0;

	while(iIndex<5)
	{
		iIndex++;
		if(iIndex==3)
		{
			continue;

		}
		iSum=iIndex*iIndex+iSum;
	}
	printf("%d %d",iSum,iIndex);
	getch();

	/* Return a success code to the Operating System */
 	return 0;
}/*********************************************************************
* End of whileLoopWorking3.c
*********************************************************************/
