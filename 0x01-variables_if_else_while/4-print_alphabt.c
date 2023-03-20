#include <stdio.h>

/**
 * main - This marks the start of code
 *
 * Return: Returns 0 if Success
 */
int main(void)
{
	char m;


	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == 'q' || m == 'e')
		{
			continue;
		}
		putchar (m);
	}
	putchar('\n');
	return (0);
}
