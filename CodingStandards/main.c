/********************************************************************/
* Filename    :
* Author:   RVU
* Date:     07/09/2023
* Description : Display the values in variables
*********************************************************************/
/* Include files */
#include<stdio.h>

/********************************************************************/
* Function		: main()
* Description	: Display the values in variables and understand
*                 coding standards
* Input Parameters:
* 	int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*********************************************************************/

void main() {

  int Number1;     /* Declaring variables*/
     char cvalue = 'b';

  /* Reading input from the user */
	printf("Enter an integer");
  scanf("%d", &Number1);

  /* Displaying the values */
  printf("Number1 = %d  Char = %c \n", Number1,cvalue);

  getch();
  return 0;
}


