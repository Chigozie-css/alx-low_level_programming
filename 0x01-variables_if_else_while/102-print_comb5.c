#include	<stdio.h>

/**
	*	main	-	Starting	point
	*
	*	Description:	Prints	all	possible	combinations	of	two	two-digit	numbers
	*
	*	Return:	Return	0	if	successful
	*/

int	main(void)
{
	int	num1,	num2;

	for	(num1	=	0;	num1	<	100;	num1++)
	{
		for	(num2	=	0;	num2	<	100;	num2++)
		{
			if	(num1	<	num2)
			{
				putchar((num1	/	10)	+	48);
				putchar((num1	%	10)	+	48);
				putchar('	');
				putchar((num2	/	10)	+	48);
																																putchar((num2	%	10)	+	48);
				if	(num1	!=	98	||	num2	!=	99)
				{
					putchar(',');
					putchar('	');
				}
			}
		}
	}
	putchar('\n');

	return	(0);
}
