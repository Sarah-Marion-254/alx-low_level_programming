#include <stdio.h>

/**
 * main - This marks the start of code
 *
 * Return: Returns 0 if success
 */
int main(void)
{
	char m;


	for (m = 'a'; m <= 'z'; m++)
	{
		putchar (m);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar (m);
	}
	putchar('\n');
	return (0);
}
