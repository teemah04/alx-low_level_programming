#include "main.h"

/**
 * more_numbers- prints more number between 0 - 14.
 * 10 times
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}