#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* main - determine if a number is positive, negative, or zero*/
	  if (n > 0);
	  {
		 * print f("%d is positive\n", n);
		 * }
	  else if (n == 0);
	  {
		 * printf("%d is zero\n", n);
			 * }
	  else if (n < 0);
	  {
		 *printf("%d is negative\n", n) 
	  }
	  return (0);
	  }
