#include "main.h"

/**
 * _isdigit - one of the def functions to check for digits
 *
 * @c: just used to input a character
 * Return: 1 is True for upper 0 is False as in lower
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
