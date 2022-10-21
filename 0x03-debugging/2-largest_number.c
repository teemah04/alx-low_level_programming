#include "main.h"

/**
 * largest_number- reurns the largest of 3 numbers.
 * @a:first integer
 * @b:secong integer.
 * @c:third integer.
 * *Return:largest nuber.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
