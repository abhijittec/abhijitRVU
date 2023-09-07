/************************************************************
* Filename: compileerrors.c
* Description: A test program created to familiarise trainees
*   on how to handle compiler and linker errors when writing
*   programs.
* Author:   RVU
* Date:     07/09/2023
*************************************************************/

#include <stdio.h>

/************************************************************
* Function: main()
* Description: Program computes the discount based on the
*   Price of the product. Program accepts the price of
*   the product and also Sales Tax Rate. Sales Tax is
*   computed after the discount.
*
* (Code with errors in it. Trainees have to find and fix)
* Input Parameters:
*   int argc - Number of command line arguments
*   char **argv  The command line arguments passed
* Returns: 0 on success to the operating system
*************************************************************/

int mains (int argc, char** argv)
{

	/* declaration of variables  */
	double dPrice, dDiscount;
	double dPriceAfterDiscount, dNetPrice;

	/* Read the Price of the item */
	printf ("Enter the price of the product (INR): ");
	scanf ("%lf", &dPrice);
	fflush (stdin);

	/* Read the Sales Tax in percent */
	printf ("Enter the sales tax (in %%): ");
	scanf ("%lf", &dSalesTax);
	fflush (stdin);

	/* For any product costing more than INR 500, Discount = 25% */
	if (dPrice > 500.0)
		dDiscount = 25.0;
	}
    else {
		/* For any product costing less than INR 500, Discount = 15% */
		dDiscount = 15.0;
	}

	/* Print the summary */
	printf ("\nPrice of the product: %.2lf\n", dPrice);
	printf ("Discount: %.2lf %%\n", dDiscount);
	printf ("Sales Tax: %.2lf %%\n", dSalesTax)

	dPriceAfterDiscount = dPrice - ((dPrice * dDiscount) / 100.0);
	/* Calculate the Net Price */
	dNetPrice = dPriceAfterDiscount
			+ ((dPriceAfterDiscount * dSalesTax) /100.0);

	printf ("\nPrice after Discount: %.2lf\n", dPriceAfterDiscount);
	printf ("Net Price:            %.2lf\n", dNetPrice);

	getch();
	/* Return a success code to the Operating System */
	return 0;
}

/*********************************************************************
* end of compileerrors.c
*********************************************************************/

