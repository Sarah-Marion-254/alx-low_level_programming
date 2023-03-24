#include "main.h"

/**
 * _isupper - a super function to check for uppercases
 *
 * @c: just used to input a character
 * Return: 1 is True for upper 0 is False as in lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
