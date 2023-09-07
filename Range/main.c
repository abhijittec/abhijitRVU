/********************************************************************
* Filename    : Range.c
* Author      : Education & Research Dept, Infosys Technologies
*		Limited
* Author:   RVU
* Date:     07/09/2023
*********************************************************************/

/* Include files */

#include<stdio.h>
#include<stdlib.h>

/********************************************************************
* Function	: main
* Description	: main fuction of the program explains range of a data
*		  type
* Input Parameters:
* 	int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

int main(int argc,char **argv) {
	short int iNumber1,iNumber2;
	unsigned short iValue;

	/*Signed short Number assigned with a value that is within the
       	range of short signed integer */

	iNumber1 = 3000;

	/* The output is 3000 as it is within the range*/
	printf("iNumber1=%d\n",iNumber1);


	/*Signed short Number assigned with a value that is not in the
       	range of short signed integer which is one more than the
       	maximum range of short integer */

	iNumber2 = 32768;

	/* The output is -32768 as it is out of the maximum range. The
        negative values are printed in a circular sequence */

	printf("iNumber2=%d\n",iNumber2);

	/*UnSigned Number assigned with a very large number that is
        out of the range of unsigned integer */
	iValue = 65536;

	/* The output is 0 as it is out of the maximum range. The
       	negative values are not printed in this case as it is an
       	unsigned number */

	printf("iValue= %u\n",iValue);
	getch();

	/* Return a success code to the Operating System */
 	return 0;
}
/********************************************************************
* End of Range.c
*********************************************************************/
