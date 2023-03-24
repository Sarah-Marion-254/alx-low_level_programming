#include "main.h"

/**
 * _isupper - a super function to check for uppercases
 *
 * @c: just used to input a character
 * Return: 1 is True for upper 0 is False as in lower
 */

int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
