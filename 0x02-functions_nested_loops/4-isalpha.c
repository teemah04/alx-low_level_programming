#include "main.h"

/**
 * _isalpha-check is lowercase or uppercase.
 * @c:character to check if it is lowercase.
 * Return:1-if lowercase or uppercase,otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
