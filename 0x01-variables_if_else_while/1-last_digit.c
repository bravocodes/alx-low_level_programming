#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
*main - entry point
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10 ;
	if (ld > 5) 
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0 ", n, ld);
	}
	else 
	{
		printf("Last digit of %d is %d is less than  and not 0", n, ld);
	}
	/* your code goes there */
	return (0);
}

