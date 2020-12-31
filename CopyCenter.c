
#include <stdio.h>
#include <stdlib.h>

/*
Computes and prints a recepit that shows the total number of copies printed and the total charge. 
*/

//Defined constants
#define PER_PAGE_FIRST_100 0.05  /*Cost per page for the first 100 pages. */
#define PER_PAGE_ADDITIONAL_COPY 0.03  /* Cost per page for each page after 100 pages.*/
#define PAGES 100                      /*Constant for 100.*/

/*Function prototypes*/

void instruct_print(int numberofCopies, double totalCost);

int main()
{
	//Declaration of Variables
	int numberofCopies;  /*Number of copies*/
	int additonalCopies; /*number of copies exceeding 100*/
	double totalCost;    /*total cost of the printing job*/

	printf("Enter number of copies to be printed");
	scanf_s("%d", &numberofCopies);

	if (numberofCopies > PAGES)
	{
		printf("Your order has exceeded 100 pages, each additonal page will cost $0.03.\n");
		additonalCopies = numberofCopies - PAGES;
		totalCost = (PAGES * PER_PAGE_FIRST_100) + (additonalCopies * PER_PAGE_ADDITIONAL_COPY); 
	}
	else
	{
		printf("Each page will cost $0.05.\n");
		totalCost = (numberofCopies * PER_PAGE_FIRST_100);
	}

	
	instruct_print(numberofCopies, totalCost);
}
void instruct_print(int numberofCopies, double totalCost)
{
	printf("This program calculates a printing job.\n");
	printf("You have printed %d copies.\n", numberofCopies);
	printf("Your total cost is $%0.2f.\n", totalCost);
}