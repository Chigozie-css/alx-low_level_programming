#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description: value of n status; positive, negative and zero
 *
 * reture: aways 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Code*/
	if(n > 0)
	{
		printf("%i is positive \n", n);
	}
	else if(n == 0)
	{
		printf("%i is zero \n", n);
	}
	else
	{
		printf("%i is negative \n", n);
	}
	return 0;
}
