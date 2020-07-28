/*
   
   OPTION 1(GENERAL)
   
  Write enumerated types that supports dates—such as december 12.
   Then add a function that produces a next day.  
   So nextday(date) of december 12 is december 13. 
   Also write a function printdate(date) that prints a date legibly.
   The function can assume that February has 28 days and it most know how many days are in each month. 
   Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).
   
*/

#include <stdio.h>

typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct	date
{
	month m;
	int d;
}date;

date nextday(date d)						/* Calculating the next day */
{
	switch(d.m)
	{
		case jan:
		case mar:
		case may:
		case jul:
		case aug:
		case oct:
		case dec:            						
			if (d.d < 31)	/* Checking if the last day of the month */
				++d.d;
			else
			{
				d.d = 1;			/* Checking if the last month of the year */
				if (d.m == dec)
					d.m = jan;
				else				/*Checking the last day of the month*/
					++d.m;
			}
			break;
		case feb:					/* Checking if the last day of the month in case of feb */
			if (d.d < 28)
				++d.d;
			else
			{
				d.d = 1;
				++d.m;
			}
			break;
		default:
			if (d.d < 30)					/* Checking if the last day of the month in other months */
				++d.d;
			else
			{
				d.d = 1;
				++d.m;
			}
			break;
	}
	return (d);
}

void print_date(date d)			/*declaring a function to print a date*/
{
	switch (d.m)
	{
		case jan:
			printf("January %d\n", d.d);
			break;
		case feb:
		 	printf("February %d\n", d.d);
		 	break;
		case mar: 
			printf("March %d\n", d.d);
			break;
		case apr:
			printf("April %d\n", d.d);
			break;
		case may:
			printf("May %d\n", d.d);
			break;
		case jun:
			printf("June %d\n", d.d);
			break;
		case jul:
			printf("July %d\n", d.d);
			break;
		case aug:
			printf("August %d\n", d.d);
			break;
		case sep:
			printf("September %d\n", d.d);
			break;
		case oct:
			printf("October %d\n", d.d);
			break;
		case nov:
			printf("November %d\n", d.d);
			break;
		case dec:
			printf("December %d\n", d.d);
			break;
	}
}

int main (void)
{
	date d;

	d.m = jan;							/*Printing the dates and next dates*/
	d.d = 1;
	printf("current date : ");
	print_date(d);
	printf("The next day is : ");
	print_date(nextday(d));
	
	d.m = feb;
	d.d = 28;
	printf("\ncurrent date : ");
	print_date(d);
	printf("The next day is : ");
	print_date(nextday(d));

	d.m = mar;
	d.d = 14;
	printf("\ncurrent date : ");
	print_date(d);
	printf("The next day is : ");
	print_date(nextday(d));
	
	d.m = oct;
	d.d = 31;
	printf("\ncurrent date : ");
	print_date(d);
	printf("The next day is : ");
	print_date(nextday(d));
	
	d.m = dec;
	d.d = 31;
	printf("\ncurrent date : ");
	print_date(d);
	printf("The next day is : ");
	print_date(nextday(d));

}

