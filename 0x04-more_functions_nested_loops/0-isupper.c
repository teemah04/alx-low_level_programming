#include "main.h"

/**
 * _isupper -checks if parameter is an upper character.
 * @c: input character
 * Return: 1-if is an upper character, 0-if other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
