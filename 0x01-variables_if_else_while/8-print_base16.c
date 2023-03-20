#include <stdio.h>

/**
 * main - This marks the start of code
 *
 * Return: Returns 0 if success
 */
int main(void)
{
	int m;


	for (m = 0; m < 10; m++)
	{
		putchar ('0' + m);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar (m);
	}
	putchar('\n');
	return (0);
}
