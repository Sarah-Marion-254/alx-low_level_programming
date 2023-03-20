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
		if (m != 9)
		{
			putchar (',');
			putchar (' ');
		} else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
